// Copyright Epic Games, Inc. All Rights Reserved.

#include "DropperGameGameMode.h"
#include "DropperGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADropperGameGameMode::ADropperGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
