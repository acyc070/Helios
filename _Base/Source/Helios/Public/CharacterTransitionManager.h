#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterTransitionManager.generated.h"

class UCharacterTransitionController;

UCLASS(Blueprintable)
class UCharacterTransitionManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterTransitionController* mTransitionController;
    
public:
    UCharacterTransitionManager();

};

