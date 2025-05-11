// Copyright Epic Games, Inc. All Rights Reserved.


#include "RTSGameModeBase.h"

void ARTSGameModeBase::AddResource(int32 ResourceToAdd, EResource Resource, EResource& OutResource, int32& OutNumOfResource)
{
	switch (Resource)
	{
	case  EResource::FOOD:
		FoodInventory += ResourceToAdd;
		OutResource = Resource;
		OutNumOfResource = FoodInventory;
		break;

	case EResource::STONE:
		StoneInventory += ResourceToAdd;
		OutResource = Resource;
		OutNumOfResource = StoneInventory;
		break;
	case EResource::WOOD:
		WoodInventory += ResourceToAdd;
		OutResource = Resource;
		OutNumOfResource = WoodInventory;
		break;

	case EResource::GOLD:
		GoldInventory += ResourceToAdd;
		OutResource = Resource;
		OutNumOfResource = GoldInventory;
		break;

	case EResource::SOLDIER:
		SoldierInventory += ResourceToAdd;
		OutResource = Resource;
		OutNumOfResource = SoldierInventory;
		break;

	default: 
		break;
	}
}

