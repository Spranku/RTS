// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTSUnitBase.generated.h"

UCLASS()
class RTS_API ARTSUnitBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARTSUnitBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Params")
	FText UnitName = FText::FromString("DefaultName");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Params")
	FText UnitDescription = FText::FromString("Default Description");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Params")
	int32 WoodCost = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Params")
	int32 WoodCarrying = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Params")
	int32 StoneCost = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Params")
	int32 FoodCost = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Params")
	UTexture2D* Thumbnail = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
