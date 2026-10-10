#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PawnFilter.generated.h"

class AAISpawner;
class APawn;

USTRUCT(BlueprintType)
struct HELIOS_API FPawnFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPawnFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> mPawnClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawner* mSpawnerFilter;
    
    FPawnFilter();
};

