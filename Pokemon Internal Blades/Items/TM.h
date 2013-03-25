#pragma once

#include "item.h"
#include "../Pokemon.h"
#include "../Constants.h"
#include "../Move.h"

// TODO: Write everything pertaining to Technical Machines

namespace pk
{
	class TM :
		public Item
	{
	private:
		Move m_move;
		Pokemon m_PokemonLearnList [465];
		bool m_isReusable;

	public:
		TM(void);
		~TM(void);
	};
}
