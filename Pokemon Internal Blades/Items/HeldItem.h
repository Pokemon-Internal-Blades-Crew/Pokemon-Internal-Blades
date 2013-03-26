#pragma once
#include "item.h"
#include "../All Classes.h"
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
