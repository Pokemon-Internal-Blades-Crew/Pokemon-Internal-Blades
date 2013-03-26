#pragma once

#include "item.h"
#include "../All Classes.h"
#include "../Constants.h"

// TODO: Write everything pertaining to Technical Machines

namespace pk
{
	class TM :
		public Item
	{
	private:
		Move_class m_move;
		Pokemon m_PokemonLearnList [465];
		bool m_isReusable;

	public:
		TM(void);
		~TM(void);
	};
}
