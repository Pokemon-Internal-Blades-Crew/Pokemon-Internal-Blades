#pragma once
#include "item.h"
#include "../Pokemon.h"
#include "../Constants.h"

// TODO: Write everything Pertaining to Healing Items.

namespace pk
{
	class HealingItem :
		public Item
	{
	public:
		HealingItem(void);
		~HealingItem(void);
	};
}
