#pragma once

#include "Stdafx.h"
#include "Pokemon.h"
class p_Type
{
using namespace poke;
private:
	Pokemon target;
	std::string type;
public:
	p_Type(void);
	
	double GetEffectiveness(Pokemon target);

	


//			. Types
//				. Super effective against
//				. Weak to
};

