#pragma once
#include "CoreMinimal.h"
#include "GenericWorldEvent.h"
#include "ScreamEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FScreamEvent : public FGenericWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDeadlyRange;
    
    FScreamEvent();
};

