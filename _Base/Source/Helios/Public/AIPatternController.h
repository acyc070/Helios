#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Controller.h"
#include "AIPatternController.generated.h"

class UAIAnimator;
class UAIBaseModularBrain;
class UAILookinator;
class UAINavigator;
class UPathFindingComponent;

UCLASS(Blueprintable)
class HELIOS_API AAIPatternController : public AController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIBaseModularBrain* mBrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathFindingComponent* mPathfinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAINavigator* mNavigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIAnimator* mBodyAnimator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAILookinator* mLookinator;
    
    AAIPatternController(const FObjectInitializer& ObjectInitializer);

};

