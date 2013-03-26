#pragma once
#include "healingitem.h"
#include "helditem.h"
#include "../All Classes.h"
#include "../Constants.h"

// TODO: Write everything pertaining to berries

namespace pk
{
class Berry :
	public HealingItem,
	public HeldItem
	{
	public:
		Berry(void);
		~Berry(void);
	};
}
