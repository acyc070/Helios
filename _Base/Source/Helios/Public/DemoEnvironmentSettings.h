#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DemoEnvironmentSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class UDemoEnvironmentSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RunInDemoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RunEndSlateScreenMode;
    
    UDemoEnvironmentSettings();

};

