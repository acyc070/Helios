#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIReactivePattern.h"
#include "ReachActorWhenCalledPattern.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UReachActorWhenCalledPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CallMemoryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnoreDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ReachDistance;
    
    UReachActorWhenCalledPattern();

};

