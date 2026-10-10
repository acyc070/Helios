#pragma once
#include "CoreMinimal.h"
#include "ChalkboardContext.h"
#include "EPawnType.h"
#include "PawnChalkboardContext.generated.h"

class AAISpawner;
class AControlledPawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HELIOS_API UPawnChalkboardContext : public UChalkboardContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnType mPawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AAISpawner>> mAISpawners;
    
public:
    UPawnChalkboardContext();

protected:
    UFUNCTION(BlueprintPure)
    AControlledPawn* GetPawn() const;
    
};

