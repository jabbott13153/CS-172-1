#ifndef _QuadEq_H_
#define _QuadEq_H_

class QuadEq


{
private:
	//a coefficient
	double a;
	//b coefficient
	double b;
	//c coefficient
	double c;

	//variables to tell if discriminant is less than 0
	bool RootOneTrue;
	bool RootTwoTrue;

public:
	//retrieve discriminant
	double getDiscriminant();
	
	//gets subtracting root to -b
	double getRootOne(double disctriminant);
	
	//gets adding root to -b
	double getRootTwo(double discriminant);
	
	//number of real answers
	void number_of_answers(bool, bool);

	//checks if discriminant is greater than 0
	bool is_it_true1(double);
	bool is_it_true2(double);
	//puts everything together
	double all_together_now(double);

//coefficient constuct
	//get a, b, and c
	double getA()
	{
		return a;
	}

	double getB()
	{
		return b;
	}

	double getC()
	{
		return c;
	}

	//change constructs
	double setA(double A)
	{
		a = A;
		return a;
	}
	double setB(double B)
	{
		b = B;
		return b;
	}
	double setC(double C)
	{
		c = C;
		return c;
	}
	QuadEq()
	{
		a = 0;
		b = 0;
		c = 0;
	}

};

#endif