// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShootMePlsPlayerController.generated.h"

class UInputMappingContext;

/**
 *
 */
UCLASS()
class SHOOTMEPLS_API AShootMePlsPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	// Begin Actor interface
	UPROPERTY(BlueprintReadWrite) FVector2D crosshairScreenLoc;

protected:

	virtual void BeginPlay() override;

	// End Actor interface
};
