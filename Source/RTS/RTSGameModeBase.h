// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RTSGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class RTS_API ARTSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 AliveUnits = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats|Resources")
	int32 WoodInventory = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats|Resources")
	int32 StoneInventory = 0;
	
};
