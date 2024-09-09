// Copyright Epic Games, Inc. All Rights Reserved.

#include "PS5GameMode.h"
#include "PS5Character.h"
#include "UObject/ConstructorHelpers.h"

APS5GameMode::APS5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
