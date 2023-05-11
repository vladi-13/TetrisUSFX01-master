// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.h"
#include "BloqueMadera.generated.h"

UCLASS()
class TETRISUSFX01_API ABloqueMadera : public AActor , public IBloque
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueMadera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
