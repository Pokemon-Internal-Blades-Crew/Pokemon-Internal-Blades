#pragma once
#include "Stdafx.h"
#include "All Classes.h"

// TODO: Write all implementation for this class
using namespace pk;
class Battle
{
private:
	Pokemon pkmn1;
	Pokemon pkmn2;
	
	Pokemon		m_target;		// Target of the Move
public:
	Battle(void);
	~Battle(void);
	
	
	// Checks to see if the move gets STAB
	bool CheckStab(Move_class move, Pokemon target);

	
	// Returns the target of the move
	Pokemon GetTarget(){return m_target;};	

	// Sets the target of the move
	void SetTarget(pk::Pokemon target){m_target = target;}			

};

