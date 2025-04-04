// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealStation.generated.h"

UCLASS()
class TEACHINGDEMO2025_API AHealStation : public AActor
{
	GENERATED_BODY()

	float healthTickDelay;		// Time remaining until next health tick
	float healthSendDelay;		// Time until health can be sent to player

public:	
	// Sets default values for this actor's properties
	AHealStation();
	/* Max healing unit can hold*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing") int32 MaxValue;
	/* Current healing in unit*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing") int32 HealthValue;
	/* Delay between health value increase*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing") float HealthTickRate;
	/* Delay between health send to player*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing") float HealthSendRate;

	/*Event - When health is generated*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Healing") void OnHealthGenerated(int32 health);
	/*Player requesting health, only sent when sendDelay < 0 */
	UFUNCTION(BlueprintCallable, Category = "Healing") int32 RequestHealth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
