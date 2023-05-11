// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenarios.h"
#include "Escenario.h"

// Sets default values
AEscenarios::AEscenarios()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscenarios::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenarios::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AEscenario* OtraEscena(FString Category)
{
	//Create the Potion and log its name
	AEscenario* Escenario = OtraEscena(Category);
	//Start the concoct process
	Escenario->nuevo();
	Escenario->puntuacion();
	//Returns the created potion
	return Escenario;
}
