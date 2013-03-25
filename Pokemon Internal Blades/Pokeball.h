#pragma once
#include "item.h"
#include "Constants.h"
#include "Pokemon.h"

using namespace pk;

namespace pk
{
	class Pokeball :
		public Item
		{
		private:
			Pokemon m_target;
			double m_captureRate;	// Catch Rate from 0.5 to 16.0

			// CatchValue = ((( 3 * Max HP - 2 * HP ) * (Catch Rate * Ball Modifier ) / (3 * Max HP) ) * Status Modifier
			// Catch = 1048560 / √(√(16711680 / CatchValue)) = (220 - 24) / √(√((224 - 216) / CatchValue))
		public:
			Pokeball(void);
			~Pokeball(void);
			void Catch(Pokemon target);
		};
}
