// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EAction : uint8
{
	WAIT = 0  UMETA(DisplayName = "Wait"),
	COLLECT = 1 UMETA(DisplayName = "Collect"),
	ATTACK = 2  UMETA(DisplayName = "Attack")
};

UENUM(BlueprintType)
enum class EResource : uint8
{
	WOOD = 0  UMETA(DisplayName = "Wood"),
	STONE = 1 UMETA(DisplayName = "Stone"),
	FOOD = 2  UMETA(DisplayName = "Food"),
	GOLD = 3  UMETA(DisplayName = "Gold"),
	SOLDIER = 4  UMETA(DisplayName = "Soldier")
};

/**
 * 
 */
class RTS_API RTSTypes
{
public:
	RTSTypes();
	~RTSTypes();
};
