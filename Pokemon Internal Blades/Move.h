#pragma once
#include "Stdafx.h"
#include "Pokemon.h"
class Move
{
private:
	int m_accuracy; // base accuracy from 1 to 100. If n/a, set to 1000
	int m_speed; // speed priority is -8 to 8 inclusive with 8 is fastest
	int m_power; // base power.
	int m_mp;	// How many times move can be used.
	Pokemon target();
public:
	Move(void);

	// getters
	int GetAccuracy(void){return m_accuracy;};
	int GetPriority(void){return m_speed;};
	int GetPower(void){return m_power;};
	int GetMP(void){return m_mp;};

	void SetTarget(Pokemon target);

	p_Type GetTyping(Pokemon &target);

//			. Moves
//				. Target
//				. Typing
//				. Is Physical/Is Special/Is Stat Move
//				. Damage Dealing
//				. Accuracy

};

