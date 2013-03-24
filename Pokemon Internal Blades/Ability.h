#pragma once
#include "Stdafx.h"
#include "Constants.h"
using namespace std;
namespace pk
{
	class Ability
	{
	private:
		string m_name;
		string m_description;
		string m_effect;
		bool m_isHidden;
	public:
		Ability(void);
		virtual ~Ability(void);
	
		Ability(string name, string desc, string effect) 
			: m_name(name), m_description(desc), m_effect(effect)
		{
			m_isHidden = NO;
		};

		Ability(string name, string desc, string effect, bool hidden) 
			: m_name(name), m_description(desc), m_effect(effect), m_isHidden(hidden)
		{

		};

		void SetName(string name){m_name = name;};

	};
}

