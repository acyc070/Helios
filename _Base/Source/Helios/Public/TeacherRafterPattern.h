#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "TeacherRafterPattern.generated.h"

class AActor;
class AAttackSmartPointActor;
class UAIBaseReactivePattern;
class UAnimMetaData;
class UDeathHandlerDataAsset;
class UGrabActorComponent;
class UNoiseSensor;
class UTarAnimationListenerComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UTeacherRafterPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mNotifyKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mNotifyPlayerGotAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDeathHandlerDataAsset> mDeathAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlerted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetGrabbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mCurrentAnimationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeSinceLastInvestigate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGrabActorComponent* mGrabComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* mAnimationListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNoiseSensor* mNoiseSensor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAttackSmartPointActor* mAttackSmartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIBaseReactivePattern* mPreviousAnimPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIBaseReactivePattern*> mChildPatterns;
    
public:
    UTeacherRafterPattern();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttackStarted();
    
    UFUNCTION()
    void OnAnimNotifyTargetKill(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void OnAnimNotifyPlayerGotAway(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
};

