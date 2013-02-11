#include "StdAfx.h"
#include <string>
using namespace std;

class PIBEvent {

public:
	PIBEvent(float code);
	float eventCode; // This is the event specific code to distinguish between different events.
	float GetEventCode(void);
	void SetEventInformation(string data);


//		. Story Code
//			. Main Quest
//				. Main Intro
//				. Main Exposition
//				. Main Rising Action
//				. Main Climax
//				. Main Falling Action
//				. Main Resolution
//			. Side Quests

};