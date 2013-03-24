#include "StdAfx.h"
#include "Nature.h"

using namespace pk;
using namespace std;

Nature::Nature(void)	// Set as a Neutral Nature
{
	m_name = EMPTY;
	m_attMod = NORMAL_STAT;
	m_spattMod = NORMAL_STAT;
	m_defMod = NORMAL_STAT;
	m_spdefMod = NORMAL_STAT;
	m_speedMod = NORMAL_STAT;
}
//Nature::InitializeList()
void InitializeList()
{

}