#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ObjectSelectionProjectSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UObjectSelectionProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> mPickupObjectSelectionPriorityTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> mTargetObjectSelectionPriorityTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> mDraggingObjectSelectionPriorityTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> mClimbingObjectSelectionPriorityTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> mHandholdingSelectionPriorityTags;
    
    UObjectSelectionProjectSettings();

};

