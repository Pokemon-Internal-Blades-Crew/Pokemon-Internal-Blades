#pragma once
#include "../Pokemon.h"
#include "../Constants.h"
namespace pk
{
	class Item
	{
		private:
			Pokemon m_target;		
			string m_name;		// Name of the item
		public:
			// Default Constructor. Sets m_name to nothing.
			Item(void);
			// Real Constructor.  Sets m_name to name.
			Item(string name);
			
			// returns the name of the item
			string GetName(void){return m_name;}

			// Sets the target of the item
			void SetTarget(Pokemon target){m_target = target;}

			// Gets the target of the item
			Pokemon GetTarget(void){return m_target;}

			// Sets the name of the item to 'name'
			void SetName(string name){m_name = name;}
	};
}

