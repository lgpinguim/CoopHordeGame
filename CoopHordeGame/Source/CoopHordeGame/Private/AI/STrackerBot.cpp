// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/STrackerBot.h"

#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "SCharacter.h"
#include "AI/NavigationSystemBase.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASTrackerBot::ASTrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComponent->SetCanEverAffectNavigation(false);
	MeshComponent->SetSimulatePhysics(true);
	RootComponent = MeshComponent;

	HealthComponent = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->OnHealthChanged.AddDynamic(this,&ASTrackerBot::HandleTakeDamage);

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ShereComponent"));
	SphereComponent->SetSphereRadius(200);
	SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
	SphereComponent->SetupAttachment(RootComponent);

	bUseVelocityChange = false;
	MovementForce = 1000.f;

	RequiredDistanceToTarget = 100;

	ExplosionRadius = 200;
	ExplosionDamage = 40;
	bStartedSelfDestruction = false;
	SelfDamageInterval = 0.25f;
	

}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		//Find initial move to
		NextPathPoint = GetNextPathPoint();
	}
	
}

void ASTrackerBot::HandleTakeDamage(USHealthComponent* InHealthComp, float Health, float HealthDelta,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (MatInst == nullptr)
	{
		MatInst = MeshComponent->CreateAndSetMaterialInstanceDynamicFromMaterial(0,MeshComponent->GetMaterial(0));
	}

	if (MatInst)
	{
		MatInst->SetScalarParameterValue("LastTimeDamageTaken", GetWorld()->TimeSeconds);
	}
	
	// Explode on hit points ==0
	if (Health <= 0.0f)
	{
		SelfDestruct();
	}
}

void ASTrackerBot::SelfDestruct()
{
	if (bExploded)
	{
		return;
	}

	bExploded = true;
	
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ExplosionEffect, GetActorLocation());

	UGameplayStatics::PlaySoundAtLocation(this,ExplodeSound,GetActorLocation());

	MeshComponent->SetVisibility(false,true);
	MeshComponent->SetSimulatePhysics(false);
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);


	if (HasAuthority())
	{
		TArray<AActor*> IgnoredActors;
		IgnoredActors.Add(this);
	
		UGameplayStatics::ApplyRadialDamage(this,ExplosionDamage,
			GetActorLocation(),ExplosionRadius,nullptr,IgnoredActors,
			this,GetInstigatorController(),true);

		DrawDebugSphere(GetWorld(),GetActorLocation(),ExplosionRadius,12,FColor::Red,
			false,2.0f,0,1.0f);

		//Delete actor 
		SetLifeSpan(2.0f);
	}
}

FVector ASTrackerBot::GetNextPathPoint()
{
	//Easy way to find player
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this,0);
	
	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this,GetActorLocation(),PlayerPawn);

	if (NavPath->PathPoints.Num() > 1)
	{
		//Return next point in the path
		return NavPath->PathPoints[1];
	}

	//Failed to find path
	return GetActorLocation();
	
}

void ASTrackerBot::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this,20,GetInstigatorController(),this,nullptr);
}

// Called every frame
void ASTrackerBot::Tick(float DeltaTime)
{
	if (HasAuthority() && !bExploded)
	{
		Super::Tick(DeltaTime);

		float DistanceToTarget = (GetActorLocation() - NextPathPoint).Size();

		if (DistanceToTarget <= RequiredDistanceToTarget)
		{
			NextPathPoint = GetNextPathPoint();

			//DrawDebugString(GetWorld(),GetActorLocation(),"Target Reached");
		}
	
		else
		{
			FVector ForceDirection = NextPathPoint - GetActorLocation();
			ForceDirection.Normalize();

			ForceDirection *= MovementForce;
		
			MeshComponent->AddForce(ForceDirection,NAME_None,bUseVelocityChange);

			DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + ForceDirection, 32, FColor::Yellow,0.0f,0.0f,1.0f);
		}

		DrawDebugSphere(GetWorld(), NextPathPoint,20,12,FColor::Yellow,false,4.0f,1.0f);
	}
	
}

void ASTrackerBot::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	
	if (!bStartedSelfDestruction)
	{
		ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);

		if (PlayerPawn)
		{
			if (HasAuthority())
			{
				GetWorldTimerManager().SetTimer(TimerHandle_SelfDamage,this,&ASTrackerBot::DamageSelf,SelfDamageInterval,true,0.0f);
			}
			
			bStartedSelfDestruction = true;

			UGameplayStatics::SpawnSoundAttached(SelfDestructSound,RootComponent);
		}
	}
}

