#pragma once
#include "CoreMinimal.h"
#include "PatternDelegateDelegate.generated.h"

class UAIBaseReactivePattern;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPatternDelegate, UAIBaseReactivePattern*, Pattern);

