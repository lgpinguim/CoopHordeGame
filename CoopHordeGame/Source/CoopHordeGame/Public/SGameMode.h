// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameMode.generated.h"

enum class EWaveState : uint8;

/**
 * 
 */
UCLASS()
class COOPHORDEGAME_API ASGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	FTimerHandle TimerHandle_BotSpawner;

	FTimerHandle TimerHandle_NextWaveStart;

	int32 NumberOfBotsToSpawn;

	int32 WaveCount;

	UPROPERTY(EditDefaultsOnly, Category ="GameMode")
	float TimeBetweenWaves;


protected:

	//Hook for BP to Spawn a single bot
	UFUNCTION(BlueprintImplementableEvent,Category ="GameMode")
	void SpawnNewBot();

	//start spawning bots
	void StartWave();

	void SpawnBotTimerElapsed();

	//stop spawning bots
	void EndWave();

	//Set timer between waves
	void PrepareForNextWave();

	void CheckWaveState();

	void CheckAnyPlayerAlive();

	void GameOver();

	void SetWaveState(EWaveState NewState);

public:

	ASGameMode();

	virtual  void StartPlay() override;

	virtual void Tick(float DeltaSeconds) override;
	
};
