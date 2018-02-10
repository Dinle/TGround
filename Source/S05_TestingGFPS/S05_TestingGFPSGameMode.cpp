// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "S05_TestingGFPSGameMode.h"
#include "S05_TestingGFPSHUD.h"
#include "S05_TestingGFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS05_TestingGFPSGameMode::AS05_TestingGFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_TestingGFPSHUD::StaticClass();
}
