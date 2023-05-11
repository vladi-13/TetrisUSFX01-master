// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaRandomicaBuilder.h"

// Sets default values
APiezaRandomicaBuilder::APiezaRandomicaBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiezaRandomicaBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APiezaRandomicaBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiezaRandomicaBuilder::buildBloqueMadera()
{
}

void APiezaRandomicaBuilder::buildBloqueMetal()
{
}

void APiezaRandomicaBuilder::buildBloquePiedra()
{
}

void APiezaRandomicaBuilder::buildBloqueHielo()
{
}

void APiezaRandomicaBuilder::buildBloqueExplosivo()
{
}

APiece* APiezaRandomicaBuilder::getPiece()
{
	return nullptr;
}

