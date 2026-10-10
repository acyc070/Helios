#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AutoTestProfiler.generated.h"

UCLASS(Blueprintable)
class AUTOTESTRUNTIME_API UAutoTestProfiler : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAutoTestProfiler();

};

