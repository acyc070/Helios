#pragma once
#include "CoreMinimal.h"
#include "EIKTaskIdentifier.h"
#include "AIActionPattern.h"
#include "TeacherIKAction.generated.h"

class AActor;
class UAnimMetaData;
class USceneComponent;
class USplineComponent;
class UTarAnimationListenerComponent;
class UTeacherCharacterIKComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UTeacherIKAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mNotifyStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mNotifyEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIKTaskIdentifier mIKIDTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCloseDistanceGrab;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTeacherCharacterIKComponent* mCharacterIKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* mAnimationListener;
    
public:
    UTeacherIKAction();

    UFUNCTION(BlueprintCallable)
    void SetStaticSpline(const USplineComponent* staticSpline);
    
protected:
    UFUNCTION()
    void OnAnimNotifyStart(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION()
    void OnAnimNotifyEnd(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
};

