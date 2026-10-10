#pragma once
#include "CoreMinimal.h"
#include "EPawnType.h"
#include "ObjectPropertiesComponent.h"
#include "PawnPropertiesComponent.generated.h"

class UChalkboardWrapper;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPawnPropertiesComponent : public UObjectPropertiesComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    EPawnType PawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* InfoChalkboardBlueprintWrapper;
    
public:
    UPawnPropertiesComponent(const FObjectInitializer& ObjectInitializer);

};

