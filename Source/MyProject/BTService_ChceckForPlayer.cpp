// Fill out your copyright notice in the Description page of Project Settings.

#include "BTService_ChceckForPlayer.h"


UBTService_ChceckForPlayer::UBTService_ChceckForPlayer()
{
	bCreateNodeInstance = true;
}

void UBTService_ChceckForPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AEnemyAI *EnemyPC = Cast<AEnemyAI>(OwnerComp.GetAIOwner());
	
	if (EnemyPC)
	{
		auto Enemy = GetPlayerControllerdActor();

		if (Enemy)
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(EnemyPC->EnemyKeyID, Enemy);
		}
	}
}

AVR_Character* UBTService_ChceckForPlayer::GetPlayerControllerdActor() const
{
	auto PlayerControlledActor = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerControlledActor) { return nullptr; }

	return Cast<AVR_Character>(PlayerControlledActor);
}