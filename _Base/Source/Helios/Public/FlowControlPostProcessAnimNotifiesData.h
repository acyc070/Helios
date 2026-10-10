#pragma once
#include "CoreMinimal.h"
#include "FlowControlPostProcessAnimNotifiesData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FFlowControlPostProcessAnimNotifiesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mNotifier;
    
    FFlowControlPostProcessAnimNotifiesData();
};

