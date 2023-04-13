// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupActor.h"
#include "CoreMinimal.h"
#include "SCharacter.h"
#include "GameFramework/Actor.h"
#include "Components/DecalComponent.h"
#include "Components/SphereComponent.h"
#include "TimerManager.h"

// Sets default values
ASPickupActor::ASPickupActor()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ShepreComponent"));
	SphereComponent->SetSphereRadius(75.0f);
	RootComponent = SphereComponent;

	DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
	DecalComponent->SetRelativeRotation(FRotator(90, 0.0f, 0.0f));
	DecalComponent->DecalSize = FVector(64, 75, 75);
	DecalComponent->SetupAttachment(RootComponent);

	CooldownDuration = 10.0f;

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();

	if(HasAuthority())
	{
		Respawn();
	}
}

void ASPickupActor::Respawn()
{
	if (PowerUpClass == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Powerup class is nullptr in %s, please update your blueprint"), *GetName());
		return;
	}

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	PowerupInstance = GetWorld()->SpawnActor<ASPowerupActor>(PowerUpClass,GetTransform(),SpawnParameters);
}

void ASPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	ASCharacter* Player = Cast<ASCharacter>(OtherActor);

	if (HasAuthority() && PowerupInstance && Player)
	{
		PowerupInstance->ActivatePowerup(OtherActor);

		PowerupInstance = nullptr;

		//Respawn powerup
		GetWorldTimerManager().SetTimer(FTimerHandle_RespawnTimer, this, &ASPickupActor::Respawn,CooldownDuration);
	}
}

