#pragma once

#include "Components/DecalComponent.h"
#include "Components/SphereComponent.h"
#include "SPowerupActor.h"
#include "SPickupActor.generated.h"

UCLASS()
class COOPHORDEGAME_API ASPickupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPickupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UDecalComponent* DecalComponent;

	UPROPERTY(EditDefaultsOnly, Category ="PickupActor")
	TSubclassOf<ASPowerupActor> PowerUpClass;

	ASPowerupActor* PowerupInstance;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	float CooldownDuration;

	FTimerHandle FTimerHandle_RespawnTimer;

	UFUNCTION()
	void Respawn();

public:	

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;  


};
