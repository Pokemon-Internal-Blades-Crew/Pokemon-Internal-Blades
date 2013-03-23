#pragma once
#include "Stdafx.h"
#include "Pokemon.h"
using namespace pk;
class Move
{
private:
	std::string m_name; // name of the move
	int m_accuracy; // base accuracy from 1 to 100. If n/a, set to 1000
	int m_speed; // speed priority is -8 to 8 inclusive with 8 is fastest
	int m_power; // base power.
	int m_mp;	// How many times move can be used.
	Pokemon m_target;

	// setters
	void SetAccuracy(int acc){m_accuracy = acc;}
	void SetSpeed(int speed){m_speed = speed;}
	void SetPower(int power){m_power = power;}
	void SetMP(int mp){m_mp = mp;}
public:
	Move(void);
	Move(std::string name, int acc, int speed, int power, int mp) 
		: m_name(name), m_accuracy(acc), m_speed(speed), m_power(power), m_mp(mp)
	{
	};

	// getters
	std::string GetName(void){return m_name;};
	int GetAccuracy(void){return m_accuracy;};
	int GetPriority(void){return m_speed;};
	int GetPower(void){return m_power;};
	int GetMP(void){return m_mp;};
	Pokemon GetTarget();

	void SetTarget(Pokemon target){m_target = target;}
	void SetMoveStats(int acc, int speed, int power, int mp)
	{
		SetAccuracy(acc);
		SetSpeed(speed);
		SetPower(power);
		SetMP(mp);
	}



	p_Type GetTyping(Pokemon m_target);



	//Pokemon GetTarget(void){return m_target;}
//			. Moves
//				. Target ----
//				. Typing
//				. Is Physical/Is Special/Is Stat Move
//				. Damage Dealing
//				. Accuracy -----

};

