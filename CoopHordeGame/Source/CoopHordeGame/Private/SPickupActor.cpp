// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupActor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"




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
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();

	Respawn();
	
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

	if (PowerupInstance)
	{
		PowerupInstance->ActivatePowerup();

		PowerupInstance = nullptr;

		//Respawn powerup
		GetWorldTimerManager().SetTimer(FTimerHandle_RespawnTimer, this, &ASPickupActor::Respawn,CooldownDuration);
	}
}

