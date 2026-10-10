#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SmartPointProgressDelegateDelegate.h"
#include "SmartPointActor.generated.h"

class UArrowComponent;
class UBillboardComponent;
class USavableChalkboardComponent;
class USmartPoint;

UCLASS(Blueprintable)
class HELIOS_API ASmartPointActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USmartPoint* mSmartPointComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartPointProgressDelegate mOnProgressEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* mArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* mBillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USavableChalkboardComponent* mSavableChalkboardComponent;
    
    ASmartPointActor(const FObjectInitializer& ObjectInitializer);

};

