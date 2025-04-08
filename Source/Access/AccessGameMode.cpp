// Copyright Epic Games, Inc. All Rights Reserved.

#include "AccessGameMode.h"
#include "AccessCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAccessGameMode::AAccessGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
