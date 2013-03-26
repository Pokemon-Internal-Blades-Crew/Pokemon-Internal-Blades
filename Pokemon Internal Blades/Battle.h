#pragma once
#include "Stdafx.h"
#include "Pokemon.h"
#include "Move.h"

// TODO: Write all implementation for this class
using namespace pk;
class Battle
{
private:
	Pokemon pkmn1;
	Pokemon pkmn2;
public:
	Battle(void);
	~Battle(void);
	
	
	// Checks to see if the move gets STAB
	bool CheckStab(Move move, Pokemon target);
};

