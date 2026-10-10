#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "ShootAction.generated.h"

class UFirearmComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UShootAction : public UAIActionPattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFirearmComponent* mFirearm;
    
public:
    UShootAction();

};

