#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDamageSourceType.h"
#include "EDamageType.h"
#include "GenericActorEvent.h"
#include "HeliosDamageEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FHeliosDamageEvent : public FGenericActorEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageType mDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageSourceType mDamageSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mDirectCause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mDamageDirection;
    
    FHeliosDamageEvent();
};

