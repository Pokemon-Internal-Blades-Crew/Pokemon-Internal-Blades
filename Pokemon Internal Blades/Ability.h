#pragma once
#include "Stdafx.h"
#include "Constants.h"
using namespace std;

// TODO: Make List of Effects for Abilities

namespace pk
{
	class Ability
	{
	private:
		string m_name;			// m_name is the name of the Ability
		string m_description;	// m_description is the description of the Ability
		string m_effect;		// m_effect is the effect of the Ability
		bool m_isHidden;		// Boolean value that tells if it is a hidden ability
	public:
		// default constructor
		Ability(void);	

		// default deconstructor
		virtual ~Ability(void);	

		// Constructor for new abilities. It is probably better not to use in favor of the next constructor.
		Ability(string name, string desc, string effect) 
			: m_name(name), m_description(desc), m_effect(effect)
		{
			m_isHidden = NO;	// sets hidden to false.
		};


		// Constructor for new abilities.
		Ability(string name, string desc, string effect, bool hidden) 
			: m_name(name), m_description(desc), m_effect(effect), m_isHidden(hidden)
		{

		};

		// Setter for the name.
		void SetName(string name){m_name = name;};	

	};
}

