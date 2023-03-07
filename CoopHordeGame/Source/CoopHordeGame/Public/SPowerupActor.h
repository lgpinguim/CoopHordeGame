// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "SPowerupActor.generated.h"

UCLASS()
class COOPHORDEGAME_API ASPowerupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*Time between ticks*/
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	float PowerupInterval;

	/*Total times we apply the powerup */
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	int32 TotalNumberOfTicks;

	FTimerHandle TimerHandle_PowerupTick;

	UFUNCTION()
	void OnTickPowerup();

	/*Total number of ticks applied*/
	int32 TicksProcessed;

public:

	void ActivatePowerup();

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnActivated();

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnExpired();

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void OnPowerupTicked();

};
