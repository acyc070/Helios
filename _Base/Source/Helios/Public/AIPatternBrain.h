#pragma once
#include "CoreMinimal.h"
#include "AIActionOptions.h"
#include "AIBaseModularBrain.h"
#include "PatternGroup.h"
#include "Templates/SubclassOf.h"
#include "AIPatternBrain.generated.h"

class UAIActionPattern;
class UAIPatternLoadout;
class UAIReactivePattern;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UAIPatternBrain : public UAIBaseModularBrain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAllowEventDriven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAIPatternLoadout*> mPatternLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatternGroup> mPatternGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAIReactivePattern*> mPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UAIActionPattern>, FAIActionOptions> mActionOptions;
    
    UAIPatternBrain(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsRunningAnyPatterns() const;
    
    UFUNCTION(BlueprintCallable)
    void ForgetDetections();
    
};

