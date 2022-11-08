// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWeapon.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;

//Contains information of a single hitscan weapon linetrace
USTRUCT()
struct FHitScanTrace
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FVector_NetQuantize TraceFrom;

	UPROPERTY()
	FVector_NetQuantize TraceTo;
};

UCLASS()
class COOPHORDEGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASWeapon();
	
	UFUNCTION(BlueprintCallable,  Category ="Weapon",  meta = (BlueprintProtected))
	virtual void StartFire();

	UFUNCTION(BlueprintCallable,  Category ="Weapon",  meta = (BlueprintProtected))
	virtual void StopFire();


protected:
	
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category ="Components")
	USkeletalMeshComponent* MeshComponent;

	void PlayFireEffects(FVector TracerEndPoint);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category ="Weapon")
	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category ="Weapon")
	FName MuzzleSocketName;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category ="Weapon")
	FName TracerTargetName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category ="Weapon")
	UParticleSystem* MuzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category ="Weapon")
	UParticleSystem* FleshImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category ="Weapon")
	UParticleSystem* DefaultImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category ="Weapon")
	UParticleSystem* TracerEffect;

	UPROPERTY(EditDefaultsOnly, Category ="Weapon")
	TSubclassOf<UCameraShakeBase> FireCamShake;

	UPROPERTY(EditDefaultsOnly, Category ="Weapon")
	float BaseDamage;
	
	UPROPERTY(EditDefaultsOnly, Category ="Weapon")
	float VulnerableDamageMultiplier;

	virtual void Fire();
	
	UFUNCTION(Server,Reliable,WithValidation)
	virtual void ServerFire();

	UPROPERTY(EditDefaultsOnly, Category ="Weapon")
	FTimerHandle TimerHandle_TimeBetweenShots;

	float LastFireTime;

	/*RPM - Bullets per minute fired by the weapon */
	UPROPERTY(EditDefaultsOnly, Category ="Weapon")
	float RateOfFire;

	// Derived from rate of fire
	float TimeBetweenShots;

	UPROPERTY(ReplicatedUsing=OnRep_HitScanTrace)
	FHitScanTrace HitScanTrace;

	UFUNCTION()
	void OnRep_HitScanTrace();

public:
};
