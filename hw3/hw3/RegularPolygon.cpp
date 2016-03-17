#include<cmath>
#include"RegularPolygon.h"



//function to retrieve side value
int RegularPolygon::getSide()
{
	return side;
}
//function to retrieve n value
double RegularPolygon::getN()
{
	return n;
}
//function to retireve x value
double RegularPolygon::getX()
{
	return x;
}
//function to retrieve y value
double RegularPolygon::getY()
{
	return y;
}

//function to change side value
void RegularPolygon::setSide(double Side)
{
	side = Side;
}
//function to change x value
void RegularPolygon::setX(double X)
{
	x = X;
}
//function to change y value
void RegularPolygon::setY(double Y)
{
	y = Y;
}
//function to change n value
void RegularPolygon::setN(int N)
{
	n = N;
}

//function to calculate and retrieve perimeter
const double RegularPolygon::getPerimeter(double Sides, int N)
{
	//creates a variable to store the perimeter in
	double product = N * Sides;
	return product;
}

//function to calculate and retrieve area
const double RegularPolygon::getArea(double Sides, int N)
{
	//create variable to store the area in
	double area = 0;

	//creates an approximation of pi
	const double PI = 3.14159;
	//creates numerator and denominator variables
	double numerator = N * (Sides * Sides);

	double denominator = 4 * (tan(PI / N));

	area = numerator / denominator;
	return area;
}