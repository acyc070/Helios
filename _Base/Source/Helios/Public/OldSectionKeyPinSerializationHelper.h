#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphPin.h"
#include "OldSectionKeyPinSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FOldSectionKeyPinSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mSectionKeyPath;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FEdGraphPinType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mTypeSubObjectName;
    
    HELIOS_API FOldSectionKeyPinSerializationHelper();
};

