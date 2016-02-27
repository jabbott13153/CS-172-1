#ifndef FAN_H
#define FAN_H_

class Fan
{

private:
	int Speed;
	bool On;
	double Radius;

public:
	//code to set speed for object
	int setSpeed(int speed);

	//code to set on or off for object
	bool setOn(bool on);

	//code to set radius for object
	double setRadius(int radius);

	//code to show speed of object
	int getSpeed();

	//code to show if object is on or off
	bool getOn();

	//code to show radius of object
	double getRadius();

	//fan construct;
	Fan()
	{
		Speed = 0;
		On = false;
		Radius = 1;
	}



};

#endif