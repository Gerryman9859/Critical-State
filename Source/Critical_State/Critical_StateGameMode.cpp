// Copyright Epic Games, Inc. All Rights Reserved.

#include "Critical_StateGameMode.h"
#include "Critical_StateCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACritical_StateGameMode::ACritical_StateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
