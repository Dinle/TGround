// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "S05_TestingGFPSHUD.generated.h"

UCLASS()
class AS05_TestingGFPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	AS05_TestingGFPSHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};
