// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VR_Character.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "EnemyCharacter.h"
#include "EnemyAI.h"
#include "BehaviorTree/BTService.h"
#include "BTService_ChceckForPlayer.generated.h"


UCLASS()
class MYPROJECT_API UBTService_ChceckForPlayer : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_ChceckForPlayer();
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
	 AVR_Character* GetPlayerControllerdActor() const;
	
};
