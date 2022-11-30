// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Component/SHealthComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Pawn.h"
#include "Sound/SoundCue.h"
#include "STrackerBot.generated.h"

class USHealthComponent;
class USphereComponent;
class USoundCue;

UCLASS()
class COOPHORDEGAME_API ASTrackerBot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASTrackerBot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components" )
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components" )
	USHealthComponent* HealthComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components" )
	USphereComponent* SphereComponent;

	UFUNCTION()
	void HandleTakeDamage(USHealthComponent* InHealthComp, float Health, float HealthDelta,
		const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UFUNCTION()
	void SelfDestruct();

	FVector GetNextPathPoint();

	//next point in navigation path
	FVector NextPathPoint;

	UPROPERTY(EditDefaultsOnly,Category ="TrackerBot")
	float MovementForce;

	UPROPERTY(EditDefaultsOnly,Category ="TrackerBot")
	bool bUseVelocityChange;

	UPROPERTY(EditDefaultsOnly,Category ="TrackerBot")
	float RequiredDistanceToTarget;

	//Dynamic Material to pulse on damage
	UMaterialInstanceDynamic* MatInst;

	UPROPERTY(EditDefaultsOnly,Category ="TrackerBot")
	UParticleSystem* ExplosionEffect;

	bool bExploded;

	bool bStartedSelfDestruction;

	UPROPERTY(EditDefaultsOnly,Category ="TrackerBot")
	float SelfDamageInterval;

	UPROPERTY(EditDefaultsOnly,Category ="TrackerBot")
	float ExplosionRadius;

	UPROPERTY(EditDefaultsOnly,Category ="TrackerBot")
	float ExplosionDamage;

	FTimerHandle TimerHandle_SelfDamage;

	void DamageSelf();

	UPROPERTY(EditDefaultsOnly,Category ="TrackerBot")
	USoundCue* SelfDestructSound;

	UPROPERTY(EditDefaultsOnly,Category ="TrackerBot")
	USoundCue* ExplodeSound;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;  
	

};
