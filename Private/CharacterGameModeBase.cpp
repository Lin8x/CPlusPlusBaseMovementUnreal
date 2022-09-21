// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterGameModeBase.h"

void ACharacterGameModeBase::StartPlay()
{
	Super::StartPlay();
	
	check(GEngine != nullptr);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Gamemode Functional!"));
}


