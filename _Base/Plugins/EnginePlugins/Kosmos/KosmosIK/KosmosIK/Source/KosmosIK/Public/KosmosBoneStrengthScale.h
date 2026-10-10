#pragma once
#include "CoreMinimal.h"
#include "KosmosBoneStrengthScale.generated.h"

USTRUCT(BlueprintType)
struct KOSMOSIK_API FKosmosBoneStrengthScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationStrengthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrientationStrengthScale;
    
    FKosmosBoneStrengthScale();
};

