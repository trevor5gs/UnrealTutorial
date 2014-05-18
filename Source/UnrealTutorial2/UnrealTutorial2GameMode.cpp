// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "UnrealTutorial2.h"
#include "UnrealTutorial2GameMode.h"
#include "UnrealTutorial2HUD.h"

AUnrealTutorial2GameMode::AUnrealTutorial2GameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FObjectFinder<UBlueprint> PlayerPawnObject(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnObject.Object != NULL)
	{
		DefaultPawnClass = (UClass*)PlayerPawnObject.Object->GeneratedClass;
	}

	// use our custom HUD class
	HUDClass = AUnrealTutorial2HUD::StaticClass();
}
