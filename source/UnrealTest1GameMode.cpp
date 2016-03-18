// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "UnrealTest1.h"
#include "UnrealTest1GameMode.h"
#include "UnrealTest1PlayerController.h"
#include "UnrealTest1Character.h"

AUnrealTest1GameMode::AUnrealTest1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUnrealTest1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}