// Copyright Epic Games, Inc. All Rights Reserved.

#include "MiddleTestGameMode.h"
#include "MiddleTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMiddleTestGameMode::AMiddleTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
