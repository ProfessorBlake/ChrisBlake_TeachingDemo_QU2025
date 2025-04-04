// Fill out your copyright notice in the Description page of Project Settings.


#include "HealStation.h"

// Sets default values
AHealStation::AHealStation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxValue = 100;
	HealthValue = 50;
	HealthTickRate = 1.0f;
	healthTickDelay = HealthTickRate;
	HealthSendRate = 0.25f;
	healthSendDelay = 0;
}

// Called when the game starts or when spawned
void AHealStation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHealStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Health Generation
	if (healthTickDelay > 0)
	{
		healthTickDelay -= DeltaTime;
		if (healthTickDelay <= 0)
		{
			HealthValue++;
			if (HealthValue < MaxValue)
			{
				healthTickDelay = HealthTickRate;
			}
			OnHealthGenerated(HealthValue);
		}
	}

	// Send Health
	if (healthSendDelay > 0) healthSendDelay -= DeltaTime;

}

int32 AHealStation::RequestHealth()
{
	if (HealthValue <= 0) return 0;

	if (healthSendDelay <= 0)
	{
		healthSendDelay = HealthSendRate;
		healthTickDelay = HealthTickRate;
		HealthValue--;
		OnHealthGenerated(HealthValue);
		return 1;
	}
	else
		return 0;
}
