///	<summary>
///						Kyle Amos
///				  Project Internal Blades
///	This is my attempt at a text-based Pokemon syle
///	game. Plans include data for all pokemon, including
///	movesets, base stats, natures, evolution trees, and
///	more! 
///
/// </summary>

#include "StdAfx.h"
#include "Pokemon.h"
#include <string>

using namespace std;
using namespace pk;

// Constructor.
Pokemon::Pokemon(const string &name, const int type1, const int type2, bool owned)	
{
	m_name = name;		// Sets the Pokemon's name to name
    SetRandom();		// Starts Random Generator
	m_isFainted = NO;	// Automatic is not fainted
	m_owned = owned;	// Set owned status. True is trainer, false is wild.
	m_type1 = type1;	// Set first type.
	m_type2 = type2;	// Set second type. If in real game, this does not exist, type2 is NONE.
	SetIVs();
	SetEVs();
	SetStats();
}


// Sets the Individual values from 1 to 31
void Pokemon::SetIVs(void)	
{ 
	m_hpIV = Pokemon::GetRandom(1, 31);		// HP Individual Value from 1 to 31
	m_attIV = Pokemon::GetRandom(1, 31);	// Attack Individual Values (IV) from 1 to 31
	m_spAttIV = Pokemon::GetRandom(1, 31);	// Special Attack IV from 1 to 31
	m_defIV = Pokemon::GetRandom(1, 31);	// Defense IV from 1 to 31
	m_spDefIV = Pokemon::GetRandom(1, 31);	// Special Defense IV from 1 to 31
	m_speedIV = Pokemon::GetRandom(1, 31);	// Speed IV from 1 to 31
}

// Eventually this should set the EV's to 0, but this is for the sake of testing.
void Pokemon::SetEVs(void)
{	
	// EV codes
	m_hpEV =	0;	// HP Effort Values
	m_attEV =	0;	// Attack Effort Values (EV)
	m_spAttEV =	0;	// Special Attack Effort Values (EV)
	m_defEV =	0;	// Defense Effort Values (EV)
	m_spDefEV =	0;	// Special Defense Effort Values (EV)
	m_speedEV =	0;	// Speed Effort Values (EV)

}

// Sets Stats. Fairly Self Explanatory.
void Pokemon::SetStats(void)
{
	/*
		Attack, Defense, Speed, Sp. Attack, Sp. Defense:
           (((IV + 2 * BaseStat + (EV/4) ) * Level/100 ) + 5) * Nature Value
	*/

	m_HP =			(int)(((m_hpIV		+ 2 * m_baseHealth		+ ((double)m_hpEV / 4))		* ((double)m_level / 100)) + 10 + m_level);
	m_Attack =		(int)((((m_attIV	+ 2 * m_baseAttack		+ ((double)m_attEV / 4))	* ((double)m_level / 100)) + 5) * GetNature().GetAttackMod());
	m_SpAttack =	(int)((((m_spAttIV	+ 2 * m_baseSpAttack	+ ((double)m_spAttEV / 4))	* ((double)m_level / 100)) + 5) * GetNature().GetSpAttackMod());
	m_Defense =		(int)((((m_defIV	+ 2 * m_baseDefense		+ ((double)m_defEV / 4))	* ((double)m_level / 100)) + 5) * GetNature().GetDefenseMod());
	m_SpDefense =	(int)((((m_spDefIV	+ 2 * m_baseSpDefense	+ ((double)m_spDefEV / 4))	* ((double)m_level / 100)) + 5) * GetNature().GetSpDefenseMod());
	m_Speed =		(int)((((m_speedIV	+ 2 * m_baseSpeed		+ ((double)m_speedEV / 4))	* ((double)m_level / 100)) + 5) * GetNature().GetSpeedMod());
}

// Goal: Create a Text Based Pokemon Game with unique attack moves
//	Heirarchy
//	. Overall Pokemon Game
//		. Player Character Code
//			. Name
//			. Gender
//			. Starter Pokemon
//				. Nature determined by Personality Quiz
//			. Team of 6
//			. Box Pokemon
//			. Personality
//				. Determine by Personality Quiz
//		. Pokemon Code
//			. Stats
//				. Health
//				. Level
//				. Attack
//				. Special Attack
//				. Defense
//				. Special Defense
//				. Speed
//			. Moves
//				. Target
//				. Typing
//				. Is Physical/Is Special/Is Stat Move
//				. Damage Dealing
//				. Accuracy
//			. Types
//				. Super effective against
//				. Weak to
//			. Nature
//			. Ability
//			. Evolves From
//			. Evolves Into
//		. Battle Code
//			. Player
//			. Opponent
//				. Is Trainer
//				. Is Wild
//		. Story Code
//			. Main Quest
//				. Main Intro
//					. See tPoA
//					. Navi
//					. 'It's dangerous to go alone'
//					. Get starter
//					. Personality Quiz during chute
//				. Main Exposition
//				. Main Rising Action
//				. Main Climax
//				. Main Falling Action
//				. Main Resolution
//			. Side Quests
//		. Item Codes
//			. Healing
//			. Catching
//			. TM
//			. Key Item
//			. Battle
//			. Evolution
//		. World
//			. Towns
//			. Routes
//			. Cities
//			. Alternate
//		. Pokedex : Don't ask.
//			. Navi
//				. Natural Array Villain Identifier
//			. Tatl Plugin
//				. Target Aquiring Terrain Lister
//			. Tael Plugin
//				. Terrain and Environment Listings
//			. Midna Plugin
//				. Magicka Information Database - Nocturnal Advisor
//			. Advisor Plugin
//				. Algorithm: Depth and Volume Integration System - Operation R