/// <summary>
///	This is code for Internal Blades' story line
/// It will likely use an event system based upon that of Skyrim's.
/// Build Date: 02/09/13
/// Authore:	Kyle Amos
/// </summary>

#include "StdAfx.h"
#include <string>
#include "Story_Events.h"
using namespace std;
PIBEvent::PIBEvent(float code) {
	eventCode = code;
}

float PIBEvent::GetEventCode(void)
{
	return eventCode;
}

void PIBEvent::SetEventInformation(string data)
{

}
