// Copyright Epic Games, Inc. All Rights Reserved.

#include "ForHyoYaStudyGameMode.h"
#include "ForHyoYaStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForHyoYaStudyGameMode::AForHyoYaStudyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
