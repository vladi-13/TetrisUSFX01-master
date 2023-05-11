// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioInfierno.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEscenarioInfierno : public AEscenario
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//Brew the potion
	virtual void nuevo() override;
	
};
