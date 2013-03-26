#include "Battle.h"



Battle::Battle(void)
{
}


Battle::~Battle(void)
{
}

bool Battle::CheckStab(Move move, Pokemon target)
{
	bool isTrue;
	if(move.GetTyping() == target.GetType1() || move.GetTyping() == target.GetType2())
		isTrue = true;
	else
		isTrue = false;
	return isTrue;
}
