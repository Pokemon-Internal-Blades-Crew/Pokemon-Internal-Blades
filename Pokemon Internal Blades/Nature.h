#pragma once
#include "Stdafx.h"
#include "Pokemon.h"
class Nature
{
private:
	std::string m_name;
	double m_attMod;
	double m_spattMod;
	double m_defMod;
	double m_spdefMod;
	double m_speedMod;
public:
	Nature(void);
	Nature(std::string name, double atMod, double spatMod, double defMod, double spdefMod, double spdMod):
		m_attMod(atMod), m_spattMod(spatMod), m_defMod(defMod), m_spdefMod(spdefMod), m_speedMod(spdMod);
};

