#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphPin.h"
#include "TypeInfo.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FTypeInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FEdGraphPinType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mTypeSubObjectName;
    
public:
    FTypeInfo();
};

