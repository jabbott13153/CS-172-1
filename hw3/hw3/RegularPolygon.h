#ifndef REGULARPOLYGON_H_
#define REGULARPOLYGON_H_ 

class RegularPolygon
{
private:
	int n;
	double side;
	double x;
	double y;

public:
	//constructors
	//no arg constructor
	RegularPolygon()
	{
		n = 3;
		side = 1.0;
		x = 0.0;
		y = 0.0;
	}

	//two arg constructor, centered at (0,0)
	RegularPolygon(int N, double sides)
	{
		n = N;
		side = sides;
		x = 0.0;
		y = 0.0;
	}
	//four arg constructor
	RegularPolygon(int N, double sides, double X, double Y)
	{
		x = X;
		y = Y;
		side = sides;
		n = N;
	}

	

	//function to retrieve side value
	int getSide();
	//function to retrieve n value
	double getN();
	//function to retireve x value
	double getX();
	//function to retrieve y value
	double getY();

	//function to change side value
	void setSide(double);
	//function to change x value
	void setX(double);
	//function to change y value
	void setY(double);
	//function to change n value
	void setN(int);


	//function to calculate and retrieve perimeter
	const double getPerimeter(double, int);
	//function to calculate and retrieve area
	const double getArea(double, int);

	
};

#endif
