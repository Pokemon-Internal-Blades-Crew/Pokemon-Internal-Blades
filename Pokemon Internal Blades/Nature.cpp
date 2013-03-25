/// <summary>
///	This is code for Internal Blades' Nature System
/// 
/// Build Date: 03/24/13
/// Author:	Kyle Amos
/// </summary>

#include "StdAfx.h"
#include "Nature.h"

using namespace pk;
using namespace std;

// Set as a Neutral Nature
Nature::Nature(void)	
{
	m_name = EMPTY;
	m_attMod = NORMAL_STAT;
	m_spattMod = NORMAL_STAT;
	m_defMod = NORMAL_STAT;
	m_spdefMod = NORMAL_STAT;
	m_speedMod = NORMAL_STAT;
}

void InitializeList()
{

}