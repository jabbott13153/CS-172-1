#include"Rectangle2D.h"

//changes x value
void Rectangle2D::setX(double new_x)
{
	x = new_x;
}
//changes y value
void Rectangle2D::setY(double new_y)
{
	y = new_y;
}
//returns area of the rectangle
double Rectangle2D::getArea(double width, double length)
{
	double area = 0;
	area = width * length;
	return area;
}
//returns perimiter of rectanlge
double Rectangle2D::getPerimeter(double width, double length)
{
	double perimeter = 0;
	perimeter = width + width + length + length;
	return perimeter;
}
//returns true if an x,y point is within the rectange
const bool Rectangle2D::constrains(double second_x, double second_y)
{
	return true;
}
//returns true if one rectangle is contained within a second rectangle
const bool Rectangle2D::contains(const Rectangle2D &r)
{
	return true;
}
//returns true if one rectangle overlaps the second rectangle
const bool Rectangle2D::overlaps(const Rectangle2D &r)
{
	return true;
}