#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECultureEnum.h"
#include "ESaveFileType.h"
#include "LevelNameReference.h"
#include "LocalizationStrings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ULocalizationStrings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESaveFileType, FText> SaveString_Title;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SaveString_SubTitle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SaveString_Detail;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FLevelNameReference, FText> LevelPresenceStrings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECultureEnum, FText> LocalizedLanguageName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, ECultureEnum> LocalizedCultureNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizedSaveFulLDisk;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UserSignIn_Xbox;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LoadingString;
    
    ULocalizationStrings();

};

