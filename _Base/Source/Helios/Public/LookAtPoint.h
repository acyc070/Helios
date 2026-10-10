#pragma once
#include "CoreMinimal.h"
#include "BaseAIPoint.h"
#include "LookAtPoint.generated.h"

class APawnTriggerVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API ULookAtPoint : public UBaseAIPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseLookAtVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APawnTriggerVolume> mLookAtVolumeSoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mViewRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mType;
    
    ULookAtPoint(const FObjectInitializer& ObjectInitializer);

};

