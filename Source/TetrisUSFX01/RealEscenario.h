// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenarios.h"
#include "RealEscenario.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ARealEscenario : public AEscenarios
{
	GENERATED_BODY()
	
public:
	
	virtual AEscenario* ConcoctEscenario(FString Escenarioo) override;
};
