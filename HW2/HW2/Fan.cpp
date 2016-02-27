#include"Fan.h"
#include<iostream>
using namespace std;


//code to set speed for object
int Fan::setSpeed(int speed)
{
	Speed = speed;
	return Speed;
}
//code to set on or off for object
bool Fan::setOn(bool on)
{
	On = on;
	return On;
}
//code to set radius for object
double Fan::setRadius(int radius)
{
	Radius = radius;
	return Radius;
}
//code to show speed of object
int Fan::getSpeed()
{
	return Speed;
}
//code to show if object is on or off
bool Fan::getOn()
{
	return On;
}
//code to show radius of object
double Fan::getRadius()
{
	return Radius;

}