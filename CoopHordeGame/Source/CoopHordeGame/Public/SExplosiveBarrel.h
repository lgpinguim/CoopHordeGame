// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SExplosiveBarrel.generated.h"

class USHealthComponent;
class UStaticMesh;
class URadialForceComponent;
class UParticleSystem;

UCLASS()
class COOPHORDEGAME_API ASExplosiveBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASExplosiveBarrel();

protected:

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USHealthComponent* HealthComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	URadialForceComponent* RadialForceComp;

	UFUNCTION()
	void OnHealthChanged(USHealthComponent* InHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	bool bExploded;

	UPROPERTY(EditDefaultsOnly, Category="FX")
	float ExplosionImpulse;

	UPROPERTY(EditDefaultsOnly, Category="FX")
	UParticleSystem* ExplosionEffect;

	UPROPERTY(EditDefaultsOnly, Category="FX")
	UMaterialInterface* ExplodedMaterial;
	
};
