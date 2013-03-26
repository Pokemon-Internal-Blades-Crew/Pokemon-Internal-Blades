#pragma once
#include "Stdafx.h"
#include "All Classes.h"


// TODO: Write all implementation
namespace pk
{
	class Trainer
	{
	private:
		string m_name;			// Name of the trainer
		int m_gender;			// Gender of the trainer
		long m_cash;			// Cash amount of the trainer
		Pokemon m_party [6];	// Pokemon in Party
		long m_trainerID;		// ID of the trainer. Should be 6 characters.
		
	public:
		// Default Constructor. Sets m_cash to 3000 and m_gender to MALE
		Trainer(void);
		~Trainer(void);

		// Standard Convention. Creates a trainer with no pokemon.
		Trainer(string name, long cash, int gender, long trainerID); 

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
		long GetCash(void){return m_cash;}
	};
}