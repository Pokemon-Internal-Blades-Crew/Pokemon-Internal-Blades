/// <summary>
///	This is code for Internal Blades' Ability System
/// 
/// Build Date: 02/09/13
/// Author:	Kyle Amos
/// </summary>
#include "StdAfx.h"
#include "Ability.h"

using namespace pk;

Ability::Ability(void)			// Default Constructor
{
	m_name = EMPTY;				// Sets name to nothing
	m_description = EMPTY;		// Sets description to nothing
	m_effect = EMPTY;			// Sets effect to nothing
	m_isHidden = false;			// Sets hidden to false
}


Ability::~Ability(void)
{
}
