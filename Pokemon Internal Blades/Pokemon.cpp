/*
						Kyle Amos
				  Project Internal Blades
	This is my attempt at a text-based Pokemon syle
	game. Plans include data for all pokemon, including
	movesets, base stats, natures, evolution trees, and
	more! 

*/

#include "StdAfx.h"
#include "Pokemon.h"
#include <string>
using namespace std;
using namespace pk;


Pokemon::Pokemon(const string &name)
{
	m_name = name;
    SetRandom();
	
}

void Pokemon::SetIVs(void)
{ 
	m_attIV = GetRandom(1, 31); // Attack Individual Values (IV) from 1 to 31
	m_spAttIV = Pokemon::GetRandom(1, 31); // Special Attack IV from 1 to 31
	m_defIV = Pokemon::GetRandom(1, 31); // Defense IV from 1 to 31
	m_spDefIV = Pokemon::GetRandom(1, 31); // Special Defense IV from 1 to 31
	m_speedIV = Pokemon::GetRandom(1, 31); // Speed IV from 1 to 31
}
void Pokemon::SetEVs(void)
{	
	// EV codes
	m_attEV = Pokemon::GetRandom(0, 255); // Attack Effort Values (EV) from 0 to 255
	m_spAttEV = Pokemon::GetRandom(0, 255); // Special Attack Effort Values (EV) from 0 to 255
	m_defEV = Pokemon::GetRandom(0, 255); // Defense Effort Values (EV) from 0 to 255
	m_spDefEV = Pokemon::GetRandom(0, 255); // Special Defense Effort Values (EV) from 0 to 255
	m_speedEV = Pokemon::GetRandom(0, 255); // Speed Effort Values (EV) from 0 to 255

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
//					. 'It's dangerous to go alone
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
//		. World
//			. Towns
//			. Routes
//			. Cities
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