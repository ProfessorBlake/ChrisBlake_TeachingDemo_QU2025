// Copyright Epic Games, Inc. All Rights Reserved.

#include "TeachingDemo2025GameMode.h"
#include "TeachingDemo2025Character.h"
#include "UObject/ConstructorHelpers.h"

ATeachingDemo2025GameMode::ATeachingDemo2025GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
