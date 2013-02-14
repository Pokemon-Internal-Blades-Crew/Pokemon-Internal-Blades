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
#include "p_Type.h"
#include "Nature.h"

#include <string>
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

class Pokemon
{
private:
	string m_name; // Pokemon Name
	string m_nickname;  // Nickname given to Pokemon. Default should be m_name
	int m_health; // from 0 to 999
	int m_level; // from 1 to 100

	// IV codes
	int m_attIV; // Attack Individual Values (IV) from 1 to 31
	int m_spAttIV; // Special Attack IV from 1 to 31
	int m_defIV; // Defense IV from 1 to 31
	int m_spDefIV; // Special Defense IV from 1 to 31
	int m_speedIV; // Speed IV from 1 to 31

	// EV codes
	int m_attEV; // Attack Effort Values (EV) from 0 to 255
	int m_spAttEV; // Special Attack Effort Values (EV) from 0 to 255
	int m_defEV; // Defense Effort Values (EV) from 0 to 255
	int m_spDefEV; // Special Defense Effort Values (EV) from 0 to 255
	int m_speedEV; // Speed Effort Values (EV) from 0 to 255

	srand(time(0));	
	//rand()
public:
	Pokemon(const string &name);


	Pokemon()
	{
		m_name = "";
	};

	// Getters
	int GetAttackIV(void){return m_attIV;}
	int GetSpAttIV(void){return m_spAttIV;}
	int GetDefenseIV(void){return m_defIV;}
	int GetSpDefIV(void){return m_spDefIV;}
	int GetSpeedIV(void){return m_speedIV;}

	int GetAttackEV(void){return m_attEV;}
	int GetSpAttEV(void){return m_spAttEV;}
	int GetDefenseEV(void){return m_defEV;}
	int GetSpDefEV(void){return m_spDefEV;}
	int GetSpeedEV(void){return m_speedEV;}

	// Setters

	void SetIVs(void);
	void SetEVs(void);

	int GetRandomNumber(int nLow, int nHigh)	// nLow should = 1, nHigh = 31. This is for initial Generation of IVs.
	{
	    return (rand() % (nHigh - nLow + 1)) + nLow;
	}

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

//			. Types
//				. Super effective against
//				. Weak to
//			. Nature
//			. Ability
//			. Evolves From
//			. Evolves Into

};