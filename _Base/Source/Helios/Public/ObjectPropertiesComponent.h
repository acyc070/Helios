#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDynamicObjectCharacteristics.h"
#include "ObjectPropertiesComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UObjectPropertiesComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mCharacteristics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mDynamicCharacteristics;
    
public:
    UObjectPropertiesComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveDynamicCharacteristic(EDynamicObjectCharacteristics characteristic);
    
    UFUNCTION(BlueprintPure)
    bool HasDynamicCharacteristic(EDynamicObjectCharacteristics characteristic) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDynamicCharacteristics() const;
    
    UFUNCTION(BlueprintCallable)
    void AddDynamicCharacteristic(EDynamicObjectCharacteristics characteristic);
    
};

