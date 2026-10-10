#pragma once
#include "CoreMinimal.h"
#include "ECollectibleCategory.generated.h"

UENUM()
enum class ECollectibleCategory : uint8 {
    Masks,
    PhantomKids,
    ACH_MAX UMETA(Hidden),
};

