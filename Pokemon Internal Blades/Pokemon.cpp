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

Pokemon::Pokemon(const string &name)
{
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
//