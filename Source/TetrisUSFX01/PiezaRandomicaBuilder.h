// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaBuilder.h"
#include "PiezaRandomicaBuilder.generated.h"

UCLASS()
class TETRISUSFX01_API APiezaRandomicaBuilder : public AActor , public IPiezaBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiezaRandomicaBuilder();

private:
	class APiece* Piece;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void buildBloqueMadera() override;
	virtual void buildBloqueMetal() override;
	virtual void buildBloquePiedra() override;
	virtual void buildBloqueHielo() override;
	virtual void buildBloqueExplosivo() override;
	virtual class APiece* getPiece() override;
};
