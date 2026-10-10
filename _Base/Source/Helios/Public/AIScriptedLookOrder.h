#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AILookOptions.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "AIScriptedLookOrder.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedLookOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mLookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mLookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILookOptions mLookOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mTurnTowardsLookAt;
    
    UAIScriptedLookOrder();

};

