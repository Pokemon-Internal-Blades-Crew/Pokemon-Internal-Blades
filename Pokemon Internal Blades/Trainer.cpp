#include "Trainer.h"


Trainer::Trainer(void)
{
	m_cash = 3000;
	m_gender = MALE;
}


Trainer::~Trainer(void)
{
}

Trainer::Trainer(string name, int cash, int gender)
{
	m_name = name;
	m_cash = cash;
	m_gender = gender;
}