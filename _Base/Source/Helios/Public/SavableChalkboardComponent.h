#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESaveDataCategory.h"
#include "SavableChalkboardDelegateDelegate.h"
#include "SavableChalkboardComponent.generated.h"

class UChalkboardWrapper;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API USavableChalkboardComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavableChalkboardDelegate OnChalkboardLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavableChalkboardDelegate OnChalkboardPreSave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataCategory mSaveDataCategory;
    
public:
    USavableChalkboardComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UChalkboardWrapper* GetChalkboardWrapper();
    
};

