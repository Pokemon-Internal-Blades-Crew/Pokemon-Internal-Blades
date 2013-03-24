#pragma once
/// <summary>
/// 					Kyle Amos
///				  Project Internal Blades
///		This is my attempt at a text-based Pokemon style
///		game. Plans include data for all pokemon, including
///		movesets, base stats, natures, evolution trees, and
///		more! 
/// </summary>

#include "StdAfx.h"
#include "Nature.h"
#include "Ability.h"
#include "Constants.h"

#include <string>
#include <iostream>
#include <stdlib.h> // for rand() and srand()
#include <time.h> // for time()

using namespace std;
using namespace pk;

namespace pk
{
	class Pokemon
	{
	private:
		string m_name; // Pokemon Name
		string m_nickname;  // Nickname given to Pokemon. Default should be m_name

		Ability m_ability1;	// First ability
		Ability m_ability2; // Second ability
		Ability m_abilityHidden1; // Third ability
		Ability m_abilityHidden2; // Fourth ability
		
		signed int m_health; // from 0 to 999
		signed int m_level; // from 1 to 100

		/*
		Hit Points:
           ( (IV + 2 * BaseStat + (EV/4) ) * Level/100 ) + 10 + Level

		Attack, Defense, Speed, Sp. Attack, Sp. Defense:
           (((IV + 2 * BaseStat + (EV/4) ) * Level/100 ) + 5) * Nature Value*/

		// IV codes
		signed int	m_attIV;			// Attack Individual Values (IV) from 1 to 31
		signed int	m_spAttIV;			// Special Attack IV from 1 to 31
		signed int	m_defIV;			// Defense IV from 1 to 31
		signed int	m_spDefIV;			// Special Defense IV from 1 to 31
		signed int	m_speedIV;			// Speed IV from 1 to 31

		// EV codes
		signed int	m_attEV;			// Attack Effort Values (EV) from 0 to 255
		signed int	m_spAttEV;			// Special Attack Effort Values (EV) from 0 to 255
		signed int	m_defEV;			// Defense Effort Values (EV) from 0 to 255
		signed int	m_spDefEV;			// Special Defense Effort Values (EV) from 0 to 255
		signed int	m_speedEV;			// Speed Effort Values (EV) from 0 to 255

		int			m_currentHP;		// Used in battle. When reaches 0, pokemon faints.
		double		m_damage;			// 
		double		m_stab;				// Same Type Attack Bonus
		double		m_effectiveness;	// Effectiveness
		long		m_trainerID;		// Trainer ID: 6 digits

		bool		m_owned;			// Tells if owned. Default to wild: false
		bool		m_isFainted;		// Tells if the Pokemon is fainted. Default is false.

		int			m_type1;			// First type.  Default is NORMAL
		int			m_type2;			// Second Type. Default is NONE

	public:	
		Pokemon(const string &name, int type1, int type2);


		Pokemon()	// Default constructor. Sets name to blank and starts up the Random seed.
		{
			m_name = EMPTY;
			SetRandom();
			m_owned = NO;
			m_type1 = NORMAL;
			m_type2 = NONE;
		};

		// Getters
		int GetAttackIV(void){return m_attIV;}		// Returns Attack Individual Value
		int GetSpAttIV(void){return m_spAttIV;}		// Returns Special Attack IV
		int GetDefenseIV(void){return m_defIV;}		// Returns Defense IV
		int GetSpDefIV(void){return m_spDefIV;}		// Returns Special Defense IV
		int GetSpeedIV(void){return m_speedIV;}		// Returns Speed IV

		int GetAttackEV(void){return m_attEV;}		// Returns Attack EV
		int GetSpAttEV(void){return m_spAttEV;}		// Returns Special Attack EV
		int GetDefenseEV(void){return m_defEV;}		// Returns Defense EV
		int GetSpDefEV(void){return m_spDefEV;}		// Returns Special Defense EV
		int GetSpeedEV(void){return m_speedEV;}		// Returns Speed EV

		// Setters

		void SetIVs(void);
		void SetEVs(void);

		int GetTime(){return (int)time(0);}	// returns the time in seconds

		void SetRandom(){srand(GetTime());}	// Sets the seed for random generator
		
		static int GetRandom(int nLow, int nHigh){return rand() % nHigh + nLow;}	// returns the next number in the set

		void SetType1(int type1){m_type1 = type1;};	// Sets the first type to type1
		void SetType2(int type2){m_type2 = type2;}; // Sets the second type to type2

//		. Pokemon Code
//			. Stats					----
//				. Health			----
//				. Level				----
//				. Attack			----
//				. Special Attack	----
//				. Defense			----
//				. Special Defense	----
//				. Speed				----

//			. Moves
//				. Target
//				. Typing
//				. Is Physical/Is Special/Is Stat Move
//				. Damage Dealing
//				. Accuracy

//			. Types			-Partially Done-
//				. Super effective against
//				. Weak to
//			. Nature		-Partially Done-
//			. Ability		-Started-
//			. Evolves From
//			. Evolves Into

	};


}