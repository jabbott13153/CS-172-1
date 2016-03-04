/*I affirm that all code given below was written solely by me,/
Julia Abbott, and that any help I received adhered to the rules stated for this exam. */


#include<vector>
#include"Event.h"
#include"Venue.h"

using namespace std;

//checks to see if the time is valid; if not, prints a message saying so
bool Venue::validTime(int time)
{
	for (int i = 0; i < scheduledEvents.size(); i++)
	{
		if (scheduledEvents[i] != time)
			return true;
		else
			return false;
	}
}

//adds an event to the list 
void Venue::addEvent(int time, string name)
{
	if (validTime(time) == true)
	{
		//creates placeholder variable
		Event newEvent(time, name);
		//adds value to scheduledEvents vector
		scheduledEvents[time] = newEvent;
	}
}

//finds an event through the time
Event findEvent(int time)
{
	
}

//finds an event through the name
Event findEvent(string name)
{

}