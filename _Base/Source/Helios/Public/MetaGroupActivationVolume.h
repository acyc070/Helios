#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PawnTriggerVolume.h"
#include "SoftEnumName.h"
#include "MetaGroupActivationVolume.generated.h"

UCLASS(Blueprintable)
class HELIOS_API AMetaGroupActivationVolume : public APawnTriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mMetaGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShowLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor mDebugColor;
    
public:
    AMetaGroupActivationVolume(const FObjectInitializer& ObjectInitializer);

};

