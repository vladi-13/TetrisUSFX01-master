// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockHijo01.h"

ABlockHijo01::ABlockHijo01()
{
	
	UE_LOG(LogTemp, Warning, TEXT("Constructor de ABlockHijo01"));
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/block.block'"));

	if (BlockMeshAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(BlockMeshAsset.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		BlockMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));

		//AActor* MyActor = ...; // Obtener el puntero al actor que se desea modificar
		//FVector NewScale(2.0f, 2.0f, 2.0f); // Crear un vector que representa la nueva escala
		//ChangeActorSize(MyActor, NewScale); // Llamar a la funci?n para cambiar el tama?o del actor

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
	}

}

void ABlockHijo01::MostrarInformacion()
{
	//UE_LOG(LogTemp, Warning, TEXT("index=%d"), Index);
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloqueHijo01"));
}
