#pragma once
#include "CoreMinimal.h"
#include "EIKTaskIdentifier.h"
#include "AIReactivePattern.h"
#include "EHeightLevel.h"
#include "AttemptToGrabReachablePawnPattern.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAttemptToGrabReachablePawnPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCloseDistanceGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHeightLevel, EIKTaskIdentifier> mIKHandledLevels;
    
    UAttemptToGrabReachablePawnPattern();

};

