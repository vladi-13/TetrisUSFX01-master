// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenario : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenario();

protected:
	FString Nombre;
	int Tama�o;

	TArray<FString> Esce;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void nuevo();
	void puntuacion();
	FString GetNombreEscenario();
};
