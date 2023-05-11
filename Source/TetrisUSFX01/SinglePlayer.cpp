// Fill out your copyright notice in the Description page of Project Settings.


#include "SinglePlayer.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASinglePlayer::ASinglePlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Search for existing Instances of this class
	TArray<AActor*> Instances;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),ASinglePlayer::StaticClass(), Instances);
	if (Instances.Num() > 1)
	{
		//If exist at least one of them, set the instance with the first found one
		Instance = Cast<ASinglePlayer>(Instances[0]);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s already exists"), *Instance->GetName()));
		//Then Destroy this Actor
		Destroy();
	}

}

// Called when the game starts or when spawned
void ASinglePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASinglePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

