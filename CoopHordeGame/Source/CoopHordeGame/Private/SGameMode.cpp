// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"

#include "EngineUtils.h"
#include "TimerManager.h"
#include "Component/SHealthComponent.h"
#include "Components/ShapeComponent.h"


ASGameMode::ASGameMode()
{
	TimeBetweenWaves = 2.0f;

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;

}

void ASGameMode::StartWave()
{
	WaveCount++;

	NumberOfBotsToSpawn = 2 * WaveCount;

	GetWorldTimerManager().SetTimer(TimerHandle_BotSpawner, this, &ASGameMode::SpawnBotTimerElapsed, 1.0f, true, 0.0f);
}

void ASGameMode::SpawnBotTimerElapsed()
{
	SpawnNewBot();

	NumberOfBotsToSpawn--;

	if (NumberOfBotsToSpawn <= 0)
	{
		EndWave();
	}
}

void ASGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_BotSpawner);

}

void ASGameMode::PrepareForNextWave()
{
	
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ASGameMode::StartWave, TimeBetweenWaves, false);
}

void ASGameMode::CheckWaveState()
{

	bool bIsPreparingForWave = GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);


	if(NumberOfBotsToSpawn >0 || bIsPreparingForWave)
	{
		return;
	}

	bool bIsAnyBotAlive = false;

	for (TActorIterator<APawn> Itr(GetWorld()); Itr; ++Itr)
	{
		APawn* TestPawn = *Itr;
		if (TestPawn == nullptr || TestPawn->IsPlayerControlled())
		{
			continue;
		}

		USHealthComponent* HealthComp = Cast<USHealthComponent>(TestPawn->GetComponentByClass(USHealthComponent::StaticClass()));
		if (HealthComp && HealthComp->GetHealth() > 0.0f)
		{
			bIsAnyBotAlive = true;
			break;
		}

		if (!bIsAnyBotAlive)
		{
			PrepareForNextWave();
		}
	}

	
}

void ASGameMode::CheckAnyPlayerAlive()
{

	for(FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		APlayerController* PC = It->Get();
		if (PC && PC->GetPawn())
		{
			APawn* MyPawn = PC->GetPawn();
			USHealthComponent* HealthComp = Cast<USHealthComponent>(MyPawn->GetComponentByClass(UShapeComponent::StaticClass()));
			if (ensure(HealthComp) && HealthComp->GetHealth() > 0.0f)
			{
				return;
			}
		}
	}

	//No Player Alive
	GameOver();
	
}

void ASGameMode::GameOver()
{
	EndWave();
	//Finish match, present game over
}


void ASGameMode::StartPlay()
{
	Super::StartPlay();

	PrepareForNextWave();
}

void ASGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CheckWaveState();

	CheckAnyPlayerAlive();
}
