#pragma once
#include "item.h"
#include "../Pokemon.h"
#include "../Constants.h"

// TODO: Write everything pertaining to HeldItems

namespace pk
{
	class HeldItem :
		public Item
	{
	public:
		HeldItem(void);
		~HeldItem(void);
	};
}
