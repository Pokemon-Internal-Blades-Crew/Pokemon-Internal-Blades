#pragma once
#include "Stdafx.h"
#include "Pokemon.h"


// TODO: Write all implementation
namespace pk
{
	class Trainer
	{
	private:
		string m_name;
		int m_gender;
		int m_cash;
		Pokemon m_party [6];
		
	public:
		// Default Constructor. Sets m_cash to 3000 and m_gender to MALE
		Trainer(void);
		~Trainer(void);

		// Standard Convention. Creates a trainer with no pokemon.
		Trainer(string name, int cash, int gender); 

		// Returns the Pokemon in index 0 of the array m_party
		Pokemon GetLeadPokemon(void){return m_party[0];}

		// Returns the Pokemon in index 1 of the array m_party
		Pokemon GetSecondPokemon(void){return m_party[1];}

		// Returns the Pokemon in index 2 of the array m_party
		Pokemon GetThirdPokemon(void){return m_party[2];}

		// Returns the Pokemon in index 3 of the array m_party
		Pokemon GetFourthPokemon(void){return m_party[3];}

		// Returns the Pokemon in index 4 of the array m_party
		Pokemon GetFifthPokemon(void){return m_party[4];}

		// Returns the Pokemon in index 5 of the array m_party
		Pokemon GetSixthPokemon(void){return m_party[5];}

		// Returns the amount of cash the trainer has.
		int GetCash(void){return m_cash;}
	};
}