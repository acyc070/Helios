#pragma once
#include "CoreMinimal.h"
#include "ChalkboardContext.h"
#include "SavableChalkboardComponentContext.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API USavableChalkboardComponentContext : public UChalkboardContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> mActor;
    
public:
    USavableChalkboardComponentContext();

};

