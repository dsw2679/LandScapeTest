// Copyright Epic Games, Inc. All Rights Reserved.

#include "LandScape_TestGameMode.h"
#include "LandScape_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALandScape_TestGameMode::ALandScape_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
