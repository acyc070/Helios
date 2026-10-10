#pragma once
#include "CoreMinimal.h"
#include "HeliosActorReference.generated.h"

class AActor;

USTRUCT(Atomic, BlueprintType, Immutable)
struct HELIOS_API FHeliosActorReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> mSoftObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsCrossLevelObject;
    
public:
    FHeliosActorReference();
};

