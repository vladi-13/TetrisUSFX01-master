// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioCielo.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEscenarioCielo : public AEscenario
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//Brew the potion
	virtual void nuevo() override;
	
};
