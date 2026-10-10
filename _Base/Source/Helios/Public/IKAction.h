#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIKTaskIdentifier.h"
#include "AIActionPattern.h"
#include "IKAction.generated.h"

class AActor;
class UAnimMetaData;
class UCharacterIKControllerComponent;
class USceneComponent;
class UTarAnimationListenerComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UIKAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOutBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mNotifyStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mNotifyEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mTargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIKTaskIdentifier mIKIDTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mTargetComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterIKControllerComponent* mCharacterIKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* mAnimationListener;
    
public:
    UIKAction();

protected:
    UFUNCTION()
    void OnAnimNotifyStart(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void OnAnimNotifyEnd(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
};

