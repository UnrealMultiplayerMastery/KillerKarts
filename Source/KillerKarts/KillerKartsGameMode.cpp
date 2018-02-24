// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "KillerKartsGameMode.h"
#include "KillerKartsPawn.h"
#include "KillerKartsHud.h"

AKillerKartsGameMode::AKillerKartsGameMode()
{
	DefaultPawnClass = AKillerKartsPawn::StaticClass();
	HUDClass = AKillerKartsHud::StaticClass();
}
