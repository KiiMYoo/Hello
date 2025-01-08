// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelloGameMode.h"
#include "HelloCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHelloGameMode::AHelloGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
