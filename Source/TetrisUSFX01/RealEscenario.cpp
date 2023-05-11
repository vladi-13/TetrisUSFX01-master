// Fill out your copyright notice in the Description page of Project Settings.


#include "RealEscenario.h"
#include "EscenarioInfierno.h"
#include "EscenarioCielo.h"
#include "EscenarioLucha.h"

AEscenario* ARealEscenario::ConcoctEscenario(FString Escenarioo)
{
    //Select which potion to spawn depending on the passed string
    if (Escenarioo.Equals("Lucha")) {
        return GetWorld()->SpawnActor<AEscenarioLucha>(AEscenarioLucha::StaticClass());
    }
    else if (Escenarioo.Equals("Infierno")) {
        return GetWorld()->SpawnActor<AEscenarioInfierno>(AEscenarioInfierno::StaticClass());
    }
    else if (Escenarioo.Equals("Cielo")) {
        return GetWorld()->SpawnActor<AEscenarioCielo>(AEscenarioCielo::StaticClass());
    }
    else return nullptr; //Return null if the string isn't valid
}
