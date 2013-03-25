#pragma once
#include "Pokemon.h"
#include "Constants.h"
namespace pk
{
	class Item
	{
		private:
			string m_name;		// Name of the item
		public:
			// Default Constructor. Sets m_name to nothing.
			Item(void);
			// Real Constructor.  Sets m_name to name.
			Item(string name);
			
			// returns the name of the item
			string GetName(void){return m_name;}

			// Sets the name of the item to 'name'
			void SetName(string name){m_name = name;}
	};
}

