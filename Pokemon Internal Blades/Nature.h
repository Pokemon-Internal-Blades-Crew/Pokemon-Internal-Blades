#pragma once
#include "Stdafx.h"
#include "Constants.h"

// TODO: Add Favorite Flavor of Berry and other assorted Nature Related Data

namespace pk
{
	class Nature
	{
	private:
		std::string m_name;		// name of the nature
	//	Nature[] list;
		double m_attMod;		// attack modification
		double m_spattMod;		// spatt modification value
		double m_defMod;		// defense modification value
		double m_spdefMod;		// spdefense modification value
		double m_speedMod;		// speed modification value

		void InitializeList();

	public:
		// default constructor
		Nature(void);

		// Constructor for new Natures
		Nature(std::string name, const double atMod, const double spatMod, const double defMod, const double spdefMod, const double spdMod){
			m_attMod = (atMod);			// Sets attack mod value
			m_spattMod = (spatMod);		// Sets spatt mod value
			m_defMod = (defMod);		// sets def mod value
			m_spdefMod = (spdefMod);	// sets spdef mod value
			m_speedMod = (spdMod);		// sets speed mod value
		}

		// -----------SETTERS-----------


		// -----------GETTERS-----------

		// Returns Attack Modification Value
		double GetAttackMod(){return m_attMod;}

		// Returns Special Attack Modification Value
		double GetSpAttackMod(){return m_spattMod;}

		// Returns Defense Modification Value
		double GetDefenseMod(){return m_defMod;}

		// Returns Special Defense Modifcation Value
		double GetSpDefenseMod(){return m_spdefMod;}

		// Returns Speed Modification Value
		double GetSpeedMod(){return m_speedMod;}

	};
}

