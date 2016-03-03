/*I affirm that all code given below was written solely by me, Julia Abbott, and that any help I received adhered to the rules stated for this exam. */
#include"Event.h"

#include<string>
#include<vector>
#ifndef _VENUE_H_
#define _VENUE_H_

using namespace std;
class Venue
{
private:
	vector<Event> scheduledEvents;
	int numEvents;

public:
	bool validTime(int time);
	void addEvent(int time, string name);
	Event findEvent(int time);
	Event findEvent(string name);
	
};
#endif