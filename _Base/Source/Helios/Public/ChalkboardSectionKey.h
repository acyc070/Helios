#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphPin.h"
#include "SectionKeyData.h"
#include "TypeInfo.h"
#include "ChalkboardSectionKey.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable)
struct HELIOS_API FChalkboardSectionKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mSectionKeyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTypeInfo mType;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FEdGraphPinType mOldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOldSubObjectTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSectionKeyData mKeyData;
    
    FChalkboardSectionKey();
};

