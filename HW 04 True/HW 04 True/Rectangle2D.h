

#ifndef Rectange_h_
#define Rectange_h_

class Rectangle2D
{
private:
	//represents the position on the x axis'
	double x;
	//represents the postition on the y axis
	double y;
	//represents the width of the rectangle
	double width;
	//represents the length of the rectangle
	double length;

public:
	//constructor the first
	Rectangle2D()
	{
		x = 0;
		y = 0;
		width = 1;
		length = 1;
	}

	//constructor the second
	Rectangle2D(double new_x, double new_y, double new_width, double new_length)
	{
		x = new_x;
		y = new_y;
		width = new_width;
		length = new_length;
	}

	double getX() const
	{
		return x;
	}
	double getY() const
	{
		return y;
	}
	//changes x value
	void setX(double);
	//changes y value
	void setY(double);
	//returns area of the rectangle
	double getArea(double, double) const;
	//returns perimiter of rectanlge
	double getPerimeter(double, double);

	double getWidth() const;
	double getLength() const;
	//returns true if an x,y point is within the rectange
	const bool contains(double, double);
	//returns true if one rectangle is contained within a second rectangle
	const bool contains(const Rectangle2D &r);
	//returns true if one rectangle overlaps the second rectangle
	const bool overlaps(const Rectangle2D &r);
};


#endif;
