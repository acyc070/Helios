#pragma once
#include "CoreMinimal.h"
#include "SmoothAlignmentCompletedComponentDelegate.h"
#include "SmoothAlignmentData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FSmoothAlignmentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* mAlignedComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmoothAlignmentCompletedComponent mOnMoveCompleted;
    
public:
    HELIOS_API FSmoothAlignmentData();
};

