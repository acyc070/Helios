#pragma once
#include "CoreMinimal.h"
#include "SoftEnumName.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FSoftEnumName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName mType;
    
    FSoftEnumName();
};

