#pragma once
#include "Stdafx.h"
#include "Pokemon.h"
#include "Constants.h"
using namespace pk;

namespace pk
{
	class Move
	{
	private:
		std::string m_name;			// Name of the move
		int			m_accuracy;		// Base accuracy from 1 to 100. If n/a, set to 1000
		int			m_speed;		// Speed priority is -8 to 8 inclusive with 8 is fastest
		int			m_power;		// Move's base power.
		int			m_mp;			// How many times move can be used.
		Pokemon		m_target;		// Target of the Move
		int			m_moveType;		// Type of the Move;

		// setters
		void SetAccuracy(int acc){m_accuracy = acc;}	// Sets the move Accuracy
		void SetSpeed(int speed){m_speed = speed;}		// Sets the Move's speed Priority
		void SetPower(int power){m_power = power;}		// Sets the move's base power.
		void SetMP(int mp){m_mp = mp;}					// Set the move's move points; ie. How many times the move can be used.
	
	public:
		Move(void);
		Move(std::string name, int acc, int speed, int power, int mp) // Used for instantiating new moves
			: m_name(name), m_accuracy(acc), m_speed(speed), m_power(power), m_mp(mp)
		{
		};

		// getters
		std::string GetName(void){return m_name;};	// Returns the name of the move
		int GetAccuracy(void){return m_accuracy;};	// Returns the accuracy of the move
		int GetPriority(void){return m_speed;};		// Returns the speed priority
		int GetPower(void){return m_power;};		// Returns the move's power
		int GetMP(void){return m_mp;};				// Returns the move's base MP
		Pokemon GetTarget(){return m_target;};		// Returns the target of the move

		void SetTarget(Pokemon target){m_target = target;}			// Sets the target of the move
		void SetMoveStats(int acc, int speed, int power, int mp)	// Calls the Setters in one method
		{
			SetAccuracy(acc);	// Sets accuracy to acc
			SetSpeed(speed);	// Sets speed to speed
			SetPower(power);	// Sets power to power
			SetMP(mp);			// Sets mp to mp
		}



		int GetTyping();					// Used for STAB
		Pokemon GetTarget(Pokemon target);	// Used to get target


	// Pokemon GetTarget(void){return m_target;}
	//			. Moves
	//				. Target ----
	//				. Typing
	//				. Is Physical/Is Special/Is Stat Move
	//				. Damage Dealing
	//				. Accuracy -----

	};
}

