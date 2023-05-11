// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.h"
#include "Escenarios.generated.h"

UCLASS(ABSTRACT)
class TETRISUSFX01_API AEscenarios : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenarios();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Create Potion and returns it. It's pure virtual, so it doesn't need an
	//implementation in this class
	virtual AEscenario* ConcoctEscenario(FString Escenario)PURE_VIRTUAL(AEscenarios::ConcoctEscenario, return nullptr;);
	//Order, concoct and returns a Potion of a specific Category
	AEscenario* OtraEscena(FString Category);
};
