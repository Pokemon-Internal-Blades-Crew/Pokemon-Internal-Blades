/// <summary>
///	This is code for Internal Blades' Move System
/// Build Date: 03/24/13
/// Author:	Kyle Amos
/// </summary>
#include "StdAfx.h"
#include "Move.h"
#include "Constants.h"

Move::Move(void)
{
	m_name = EMPTY;			// Empty Name
	m_moveType = NORMAL;	// Normal Move: Default
	m_accuracy = 1000;		// High accuracy
	m_speed = 0;			// Normal Speed Priority
	m_power = 0;			// Zero Power
	m_mp = HIGH_MP;			// 30 MP
}

Pokemon Move::GetTarget(Pokemon target)
{
	return target;
} 

int Move::GetTyping()
{
	return m_moveType;
}

double Move::CheckEffectiveness(Pokemon target)
{
	double effectiveness = 1.0;

	// sets selfType to the move's type;
	int selfType = m_moveType;
	
	// sets placeholder int to the target's first type
	int targetType1 = target.GetType1();

	// sets placeholder int to the target's second type
	int targetType2 = target.GetType2();
	
	// First run of the CheckTypeEffective
	effectiveness *= pkmn1.CheckTypeEffective(selfType, targetType1);

	// Second Run of the Check TYpe Effective
	effectiveness *= pkmn1.CheckTypeEffective(selfType, targetType2);

	return effectiveness;
}

