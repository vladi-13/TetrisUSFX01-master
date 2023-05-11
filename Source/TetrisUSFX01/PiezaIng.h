// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaBuilder.h"
#include "PiezaIng.generated.h"

UCLASS()
class TETRISUSFX01_API APiezaIng : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiezaIng();

private:
	IPiezaBuilder* PiezaBuilder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void constructPieza();
	void setPiezaBuilder(AActor* Builder);
	class APiece* getPiece();
};
