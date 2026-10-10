#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "CrossLevelObjectProxyInterface.h"
#include "PuzzleSlotReceiverComponent.generated.h"

class AActor;
class UArrowComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPuzzleSlotReceiverComponent : public USceneComponent, public ICrossLevelObjectProxyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArrowComponent* mArrow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mInteractOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCLOCatchingRadius;
    
public:
    UPuzzleSlotReceiverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    AActor* GetCarryableInSlot() const;
    
    UFUNCTION(BlueprintPure)
    bool DoesHaveCarryable() const;
    

    // Fix for true pure virtual functions not being implemented
};

