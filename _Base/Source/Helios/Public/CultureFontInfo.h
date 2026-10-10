#pragma once
#include "CoreMinimal.h"
#include "ECultureEnum.h"
#include "CultureFontInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct HELIOS_API FCultureFontInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECultureEnum mCulture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* mFontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mVerticalOffsetRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFontScale;
    
    FCultureFontInfo();
};

