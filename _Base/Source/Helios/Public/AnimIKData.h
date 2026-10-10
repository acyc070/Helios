#pragma once
#include "CoreMinimal.h"
#include "AnimIKData.generated.h"

USTRUCT(BlueprintType)
struct FAnimIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mFootIKEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseSlopeBehaviour;
    
    HELIOS_API FAnimIKData();
};

