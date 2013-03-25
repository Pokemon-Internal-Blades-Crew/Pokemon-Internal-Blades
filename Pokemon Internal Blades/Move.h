#pragma once
#include "Stdafx.h"
#include "Pokemon.h"
#include "Constants.h"
using namespace pk;

// TODO: Implement Effect Type
// TODO: 

namespace pk
{
	class Move
	{
	private:
		Pokemon		pkmn1;
		std::string m_name;			// Name of the move
		int			m_accuracy;		// Base accuracy from 1 to 100. If n/a, set to 1000
		int			m_speed;		// Speed priority is -8 to 8 inclusive with 8 is fastest
		int			m_power;		// Move's base power.
		int			m_mp;			// How many times move can be used.
		Pokemon		m_target;		// Target of the Move
		int			m_moveType;		// Type of the Move;

		// setters

		// Sets the move Accuracy
		void SetAccuracy(int acc){m_accuracy = acc;}	

		// Sets the Move's speed Priority
		void SetSpeed(int speed){m_speed = speed;}		

		// Sets the move's base power.
		void SetPower(int power){m_power = power;}
		
		// Set the move's move points 
		// IE. How many times the move can be used.
		void SetMP(int mp){m_mp = mp;}					
	
	public:
		// Default Constructor
		Move(void);

		// Used for instantiating new moves
		Move(std::string name, int acc, int speed, int power, int mp)
			: m_name(name), m_accuracy(acc), m_speed(speed), m_power(power), m_mp(mp)
		{
		};

		// getters

		// Returns the name of the move
		std::string GetName(void){return m_name;};

		// Returns the accuracy of the move
		int GetAccuracy(void){return m_accuracy;};	

		// Returns the speed priority	
		int GetPriority(void){return m_speed;};	

		// Returns the move's power
		int GetPower(void){return m_power;};	

		// Returns the move's base MP
		int GetMP(void){return m_mp;};			

		// Returns the target of the move
		Pokemon GetTarget(){return m_target;};	

		// Sets the target of the move
		void SetTarget(Pokemon target){m_target = target;}			

		// Calls the Setters in one method
		void SetMoveStats(int acc, int speed, int power, int mp)	
		{
			SetAccuracy(acc);	// Sets accuracy to acc
			SetSpeed(speed);	// Sets speed to speed
			SetPower(power);	// Sets power to power
			SetMP(mp);			// Sets mp to mp
		}


		// Used for STAB
		int GetTyping();

		// Used to get target
		Pokemon GetTarget(Pokemon target);
		
		// Checks the effectiveness of the Move to the target.
		double CheckEffectiveness(Pokemon target);
		

	// Pokemon GetTarget(void){return m_target;}
	//			. Moves
	//				. Target ----
	//				. Typing
	//				. Is Physical/Is Special/Is Stat Move
	//				. Damage Dealing
	//				. Accuracy -----

	};
}

