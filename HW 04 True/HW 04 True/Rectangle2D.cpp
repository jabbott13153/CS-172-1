

#include"Rectangle2D.h"
#include<iostream>

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
double Rectangle2D::getArea(double width, double length) const
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

double Rectangle2D::getWidth() const
{
	return width;
}
double Rectangle2D::getLength() const
{
	return length;
}
//returns true if an x,y point is within the rectange
const bool Rectangle2D::contains(double second_x, double second_y)
{
	if ((second_x > x - length / 2) && (second_x < x + length / 2))
	{
		if ((second_y > y - width / 2) && (second_y < y + width / 2))
			return true;
	}
}
//returns true if one rectangle is contained within a second rectangle
//&r is the ADDRESS of r, not the actual variable itself!!!!
const bool Rectangle2D::contains(const Rectangle2D &r)
{

	r.getX();
	
	r.getArea(r.getWidth(), r.getLength());
	return true;
}
//returns true if one rectangle overlaps the second rectangle
const bool Rectangle2D::overlaps(const Rectangle2D &r)
{
	if (r.contains != true)
	{
		return true;
	}
	
}

