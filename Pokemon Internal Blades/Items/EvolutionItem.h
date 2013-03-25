#pragma once
#include "item.h"
#include "../Pokemon.h"
#include "../Constants.h"
// TODO: Implement everything pertaining to evolution items

namespace pk
{
	class EvolutionItem :
		public Item
	{
	public:
		EvolutionItem(void);
		~EvolutionItem(void);
	};
}
