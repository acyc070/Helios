#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FullBodyIKOptions.generated.h"

UCLASS(Blueprintable, Config=FullBodyIKPlugin)
class BIKRIG_API UFullBodyIKOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DontPromptForActivationKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivationKey;
    
    UFullBodyIKOptions();

};

