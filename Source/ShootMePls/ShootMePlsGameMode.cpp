// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootMePlsGameMode.h"
#include "ShootMePlsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootMePlsGameMode::AShootMePlsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
