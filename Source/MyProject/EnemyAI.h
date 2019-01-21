// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "EnemyCharacter.h"
#include "EnemyAI.generated.h"


UCLASS()
class MYPROJECT_API AEnemyAI : public AAIController
{
	GENERATED_BODY()


	UPROPERTY(transient)
	class UBlackboardComponent *BlackboardComp;


	UPROPERTY(transient)
	class UBehaviorTreeComponent *BehaviorComp;

public:
	AEnemyAI();

	virtual void Possess(APawn *InPawn) override;

	uint8 EnemyKeyID;
};
