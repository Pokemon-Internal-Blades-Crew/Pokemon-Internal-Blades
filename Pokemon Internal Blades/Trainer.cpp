#include "Trainer.h"


Trainer::Trainer(void)
{
	m_cash = 3000;
	m_gender = MALE;
	m_trainerID = DEFAULT_ID;
}


Trainer::~Trainer(void)
{
}

Trainer::Trainer(string name, long cash, int gender, long trainerID)
{
	m_name = name;
	m_cash = cash;
	if(gender != MALE || gender != FEMALE)
		m_gender = MALE;
	else
		m_gender = gender;
	if(trainerID < 100000 || trainerID >= 1000000)
		m_trainerID = DEFAULT_ID;
	else
		m_trainerID = trainerID;
}