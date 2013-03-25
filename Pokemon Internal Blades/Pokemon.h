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

// TODO: Write Effectiveness Code
// TODO: Implement Moves
// TODO: Implement Evolution

// TODO: Create Item Class
// TODO: Create Held Item Class			from Item class
// TODO: Create Evolution Item Class	from Item class
// TODO: Create Key Item Class			from Item class
// TODO: Create Healing Item Class		from Item class
// TODO: Create Pokeball Class			from Item class

// TODO: Create Pokedex Class
// TODO: Create Classification String for implementation with a Pokedex Class

// TODO: Create a Trainer Class

// TODO: Create a Battle Class

// TODO: Create a Box System Class

namespace pk
{
	class Pokemon
	{
	private:

		string		m_name;				// Pokemon Name
		string		m_nickname;			// Nickname given to Pokemon. Default should be m_name

		Ability		m_ability1;			// First ability
		Ability		m_ability2;			// Second ability
		Ability		m_abilityHidden1;	// Third ability
		Ability		m_abilityHidden2;	// Fourth ability
		
		Nature		m_nature;			// Nature of the Pokemon

		signed int	m_health;			// from 0 to 999
		signed int	m_level;			// from 1 to 100

		signed int	m_baseHealth;		// Base Hp
		signed int	m_baseAttack;		// Base attack
		signed int	m_baseSpAttack;		// Base Special Attack
		signed int	m_baseDefense;		// Base Defense
		signed int	m_baseSpDefense;	// Base Special Defense
		signed int	m_baseSpeed;		// Base Speed

		signed int	m_HP;				// Formula calculated HP stat
		signed int	m_Attack;			// Formula calculated Attack stat
		signed int	m_SpAttack;			// Formula calculated Special Attack stat
		signed int	m_Defense;			// Formula calculated Defense stat
		signed int	m_SpDefense;		// Formula calculated Special Defense stat
		signed int	m_Speed;			// Formula calculated Speed stat

		// IV codes
		signed int	m_hpIV;				// Health Individual Value from 1 to 31
		signed int	m_attIV;			// Attack Individual Value (IV) from 1 to 31
		signed int	m_spAttIV;			// Special Attack IV from 1 to 31
		signed int	m_defIV;			// Defense IV from 1 to 31
		signed int	m_spDefIV;			// Special Defense IV from 1 to 31
		signed int	m_speedIV;			// Speed IV from 1 to 31

		// EV codes
		signed int	m_hpEV;				// Health Effort Value from 0 to 255
		signed int	m_attEV;			// Attack Effort Values (EV) from 0 to 255
		signed int	m_spAttEV;			// Special Attack Effort Values (EV) from 0 to 255
		signed int	m_defEV;			// Defense Effort Values (EV) from 0 to 255
		signed int	m_spDefEV;			// Special Defense Effort Values (EV) from 0 to 255
		signed int	m_speedEV;			// Speed Effort Values (EV) from 0 to 255

		int			m_currentHP;		// Used in battle. When reaches 0, pokemon faints.
		double		m_damage;			// Damage value
		double		m_stab;				// Same Type Attack Bonus
		double		m_effectiveness;	// Effectiveness against target.
		long		m_trainerID;		// Trainer ID: 6 digits

		bool		m_owned;			// Tells if owned. Default to wild: false
		bool		m_isFainted;		// Tells if the Pokemon is fainted. Default is false.

		int			m_type1;			// First type.  Default is NORMAL
		int			m_type2;			// Second Type. Default is NONE

		// Set's IV's
		void SetIVs(void);

		// Set Actual Stats
		void SetStats(void);

	public:	
		Pokemon(const string &name, const int type1, const int type2, bool owned);

		// Default constructor. 
		// Sets name to blank and starts up the Random seed.
		Pokemon()	
		{
			m_name = EMPTY;
			SetRandom();
			m_owned = NO;
			m_type1 = NORMAL;
			m_type2 = NONE;
			SetIVs();
			SetEVs();
			SetStats();
		};


		// -----------Getters-----------

		// Returns Health Individual Value
		int GetHpIV(void){return m_hpIV;}

		// Returns Attack Individual Value
		int GetAttackIV(void){return m_attIV;}		

		// Returns Special Attack IV
		int GetSpAttIV(void){return m_spAttIV;}		
		
		// Returns Defense IV
		int GetDefenseIV(void){return m_defIV;}		
		
		// Returns Special Defense IV
		int GetSpDefIV(void){return m_spDefIV;}		
		
		// Returns Speed IV
		int GetSpeedIV(void){return m_speedIV;}		

		// Returns Health Effort Value
		int GetHpEV(void){return m_hpEV;}

		// Returns Attack EV
		int GetAttackEV(void){return m_attEV;}		
		
		// Returns Special Attack EV
		int GetSpAttEV(void){return m_spAttEV;}		
		
		// Returns Defense EV
		int GetDefenseEV(void){return m_defEV;}		
		
		// Returns Special Defense EV
		int GetSpDefEV(void){return m_spDefEV;}		
		
		// Returns Speed EV
		int GetSpeedEV(void){return m_speedEV;}		

		// Returns Nature
		Nature GetNature(void){return m_nature;}



		// -----------SETTERS-----------

		// Set's EV's
		void SetEVs(void);

		// returns the time in seconds
		int GetTime(){return (int)time(0);}	

		// Sets the seed for random generator
		void SetRandom(){srand(GetTime());}	

		// Sets the first type to type1
		void SetType1(int type1){m_type1 = type1;};	

		// Sets the second type to type2
		void SetType2(int type2){m_type2 = type2;}; 
		

		// returns the next number in the set
		static int GetRandom(int nLow, int nHigh){return rand() % nHigh + nLow;}	

//		. Pokemon Code
//			. Stats					----
//				. Level				----
//				. IVs
//					. Health			----
//					. Attack			----
//					. Special Attack	----
//					. Defense			----
//					. Special Defense	----
//					. Speed				----
//				. EVs
//					. Health			----
//					. Attack			----
//					. Special Attack	----
//					. Defense			----
//					. Special Defense	----
//					. Speed				----
//				. Battle
//					. Health			----
//					. Attack			----
//					. Special Attack	----
//					. Defense			----
//					. Special Defense	----
//					. Speed				----

//			. Moves
//				. Target	-----
//				. Typing	-----
//				. Is Physical/Is Special/Is Stat Move
//				. Damage Dealing
//				. Accuracy	-----
//				. STAB

//			. Types			-Partially Done-
//				. Super effective against
//				. Weak to
//			. Nature		-Partially Done-
//			. Ability		-Started-
//			. Evolves From
//			. Evolves Into

	};


}