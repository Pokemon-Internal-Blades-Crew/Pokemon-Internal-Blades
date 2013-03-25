#pragma once
#include "item.h"
#include "../Pokemon.h"
#include "../Constants.h"

// TODO: Write Everything pertaining to KeyItems

namespace pk
{
	class KeyItem :
		public Item
	{
	public:
		KeyItem(void);
		~KeyItem(void);
	};
}
