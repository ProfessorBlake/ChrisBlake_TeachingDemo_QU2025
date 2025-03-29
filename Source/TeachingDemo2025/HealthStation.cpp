// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthStation.h"

// Sets default values
AHealthStation::AHealthStation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxValue = 100;
	HealthValue = 50;
	HealthTickRate = 1.0f;
	healthTickDelay = HealthTickRate;
}

// Called when the game starts or when spawned
void AHealthStation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHealthStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

