// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealthStation.generated.h"

UCLASS()
class TEACHINGDEMO2025_API AHealthStation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealthStation();
	/* Max healing unit can hold*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing") int32 MaxValue;
	/* Current healing in unit*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing") int32 HealthValue;
	/* Delay between health value increase*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing") float HealthTickRate;

	/*Event - When health is generated*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Healing") int32 OnHealthGenerated;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float healthTickDelay;		// Time remaining until next health tick

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
