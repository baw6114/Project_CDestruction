// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Project_CDestructionGameMode.h"
#include "Project_CDestructionHUD.h"
#include "Project_CDestructionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_CDestructionGameMode::AProject_CDestructionGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProject_CDestructionHUD::StaticClass();
}
