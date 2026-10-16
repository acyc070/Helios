#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InteractableLeavesSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UInteractableLeavesSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mMaximumActivatedLeaves;
    
    UInteractableLeavesSettings();

};

