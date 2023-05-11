// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaIng.h"

// Sets default values
APiezaIng::APiezaIng()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiezaIng::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APiezaIng::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiezaIng::constructPieza()
{
	//Creates the buildings
	PiezaBuilder->buildBloqueExplosivo();
	PiezaBuilder->buildBloqueHielo();
	PiezaBuilder->buildBloqueMadera();
	PiezaBuilder->buildBloqueMetal();
	PiezaBuilder->buildBloquePiedra();
}

void APiezaIng::setPiezaBuilder(AActor* Builder)
{
	//Cast the passed Actor and set the Builder
	PiezaBuilder = Cast<IPiezaBuilder>(Builder);
}

APiece* APiezaIng::getPiece()
{
	if (PiezaBuilder)
	{
		//Returns the Lodging of the Builder
		return PiezaBuilder->getPiece();
	}
	else {
		return nullptr;
	}
}

