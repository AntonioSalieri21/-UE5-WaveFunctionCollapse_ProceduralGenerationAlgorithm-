// Copyright Epic Games, Inc. All Rights Reserved.

#include "Backrooms_ProjectGameMode.h"
#include "Backrooms_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABackrooms_ProjectGameMode::ABackrooms_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
