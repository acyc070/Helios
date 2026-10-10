#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChalkboardContext.generated.h"

class UChalkboardWrapper;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class HELIOS_API UChalkboardContext : public UObject {
    GENERATED_BODY()
public:
    UChalkboardContext();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UChalkboardWrapper* GetChalkboard() const;
    
};

