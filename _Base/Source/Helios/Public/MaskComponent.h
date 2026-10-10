#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MaskData.h"
#include "OnMaskEquippedDelegate.h"
#include "OnMaskOffDelegate.h"
#include "MaskComponent.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UMaskComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaskData CurrentMaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UChildActorComponent> CurrentMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadSocketName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMaskEquipped OnMaskEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMaskOff OnMaskOff;
    
    UMaskComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void TakeOffMask();
    
public:
    UFUNCTION(BlueprintPure)
    FName GetCurrentMaskUniqueId() const;
    
private:
    UFUNCTION()
    void ChangeMask();
    
};

