#pragma once
#include "CoreMinimal.h"
#include "ChalkboardSectionKey.h"
#include "ESmartVolumeHint.h"
#include "PawnTriggerVolume.h"
#include "SmartVolume2.generated.h"

UCLASS(Blueprintable)
class HELIOS_API ASmartVolume2 : public APawnTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartVolumeHint mActionHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mBehaviorHint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mBehaviorHint2;
    
    ASmartVolume2(const FObjectInitializer& ObjectInitializer);

};

