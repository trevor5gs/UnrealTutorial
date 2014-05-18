// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once 

#include "UnrealTutorial2HUD.generated.h"

UCLASS()
class AUnrealTutorial2HUD : public AHUD
{
	GENERATED_UCLASS_BODY()

public:

	/** Primary draw call for the HUD */
	virtual void DrawHUD() OVERRIDE;

private:
	/** Crosshair asset pointer */
	UTexture2D* CrosshairTex;

};

