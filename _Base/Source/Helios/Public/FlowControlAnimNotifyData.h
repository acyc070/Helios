#pragma once
#include "CoreMinimal.h"
#include "FlowControlAnimNotifyData.generated.h"

class AActor;
class UAnimMetaData;

USTRUCT(BlueprintType)
struct HELIOS_API FFlowControlAnimNotifyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mNotifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName mNotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimMetaData*> mAnimMetaData;
    
    FFlowControlAnimNotifyData();
};

