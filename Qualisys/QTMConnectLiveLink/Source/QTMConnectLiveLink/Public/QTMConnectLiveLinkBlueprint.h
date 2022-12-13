// QTM Connect For Unreal. Copyright 2018-2022 Qualisys
//
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ILiveLinkSource.h"
#include "QTMConnectLiveLinkBlueprint.generated.h"

UCLASS()
class QTMCONNECTLIVELINK_API UQTMConnectLiveLinkBlueprint : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "Qualisys", meta = (DisplayName = "Create QTM Connect LiveLink Source", IpAddress = "127.0.0.1", Stream3d = "false", Stream6d = "true", StreamSkeleton = "true", StreamForce = "false", StreamRate = "All Frames", FrequencyValue = 0))
    static void CreateQTMConnectLiveLinkSource(FString IpAddress, bool Stream3d, bool Stream6d, bool StreamSkeleton, bool StreamForce, FString StreamRate, int FrequencyValue, FLiveLinkSourceHandle& SourceHandle);
};
