#pragma once

#include "Components/ActorComponent.h"
#include "UObject/Object.h"

#include "SpudLevelDataComponent.generated.h"

/// A bit of metadata which can be used to customise the behavior of level streaming per level.
UCLASS()
class SPUD_API USpudLevelDataComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	bool bPersistInstances = true;

};