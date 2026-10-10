#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AINavigationOptions.h"
#include "AINavigationOptionsData.generated.h"

UCLASS(Blueprintable)
class UAINavigationOptionsData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAINavigationOptions mNavigationOptions;
    
public:
    UAINavigationOptionsData();

};

