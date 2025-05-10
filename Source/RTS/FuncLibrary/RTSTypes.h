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

/**
 * 
 */
class RTS_API RTSTypes
{
public:
	RTSTypes();
	~RTSTypes();
};
