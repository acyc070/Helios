#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "AIBaseModularBrain.generated.h"

class AController;
class APawn;
class UAIAnalyzer;
class UAIAnimator;
class UAILookinator;
class UAINavigator;
class UChalkboardWrapper;
class UPathFindingComponent;
class UPerceptionAnalyzer;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UAIBaseModularBrain : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAIAnalyzer*> mAnalyzers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPathFindingComponent* mPathfinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAINavigator* mNavigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIAnimator* mBodyAnimator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAILookinator* mLookinator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mResetChalkboardOnForget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mAIChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mPublicPawnChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* mPawnSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* mPawnController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPerceptionAnalyzer* mPerceptionAnalyzer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIAnalyzer*> mLoadedAnalyzers;
    
public:
    UAIBaseModularBrain(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UChalkboardWrapper* GetPublicPawnChalkboard();
    
    UFUNCTION(BlueprintCallable)
    UChalkboardWrapper* GetChalkboard();
    
    UFUNCTION(BlueprintPure)
    UAIAnalyzer* GetAnalyzerByClass(TSubclassOf<UAIAnalyzer> AnalyzerClass) const;
    
};

