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
