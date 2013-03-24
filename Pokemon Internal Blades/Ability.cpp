#include "StdAfx.h"
#include "Ability.h"

using namespace pk;

Ability::Ability(void)
{
	m_name = EMPTY;
	m_description = EMPTY;
	m_effect = EMPTY;
	m_isHidden = false;
}


Ability::~Ability(void)
{
}
