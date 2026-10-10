#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECultureEnum.h"
#include "SaveSystemConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class USaveSystemConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSaveImage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECultureEnum, FString> SaveIconsOverrides;
    
public:
    USaveSystemConfig();

};

