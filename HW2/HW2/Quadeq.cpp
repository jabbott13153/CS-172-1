#include"QuadEq.h"
#include<cmath>
#include<iostream>
using namespace std;

double QuadEq::getDiscriminant()
{
	//creating variable to store the discriminant, and also calculating the discriminant
	double discriminant = ((b * b) - (4 * a * c));
	//return anwser
	return discriminant;
}

double QuadEq::getRootOne(double discriminant)
{
	//creating variable to store the first root
	static double root;
	//checks to make sure discriminant is greater than 0; calculating first root
	if (discriminant > 0)
	{
		root = sqrt(-b - discriminant);
		static bool RootOneTrue = true;
	}
	else
	{
		cout << "There is no answer to the square root of: " << -b << " - " << discriminant << endl << endl;
		static bool RootOneTrue = false;
		root = 0;
	}
	
	//return answer
	return root;
}

double QuadEq::getRootTwo(double discriminant)
{
	//creating variable to store the second root
	static double root2;
	//checks to make sure discriminant is greater than 0; calculating second root
	if (discriminant > 0)
	{
		root2 = sqrt(-b + discriminant);
		static bool RootOneTrue = true;
	}
	else
	{
		cout << "There is no answer to the square root of: " << -b << " + " << discriminant << endl << endl;
		static bool RootOneTrue = false;
		root2 = 0;
	}

	//return answer
	return root2;
}

bool QuadEq::is_it_true1(double discriminant)
{
	static bool rootOneTrue;
	if (discriminant <= 0)
		bool rootOneTrue = false;
	else
		bool rootOneTrue = true;

	return rootOneTrue;
}

bool QuadEq::is_it_true2(double discriminant)
{
	static bool rootTwoTrue;
	if (discriminant <= 0)
		rootTwoTrue = false;
	else
		rootTwoTrue = true;

	return rootTwoTrue;
}

double QuadEq::all_together_now(double Root)
{
	//calculates the answer fully
	double answer = Root / (4 * a * c);
	return answer;
}



void QuadEq::number_of_answers(bool RootOneTrue, bool RootTwoTrue)
{
	if (RootOneTrue == true && RootTwoTrue == true)
	{
		std::cout << "There are two answers. \n\n.";
		std::cout << "The first is: " << all_together_now(getRootOne(getDiscriminant())) << " .\n";
		std::cout << "The second is: " << all_together_now(getRootTwo(getDiscriminant())) << " .\n";
	}
	else if (RootOneTrue == true && RootTwoTrue == false)
	{
		cout << "There is one answer: " << all_together_now(getRootOne(getDiscriminant())) << endl << endl;
	}
	else if (RootOneTrue == false && RootTwoTrue == true)
		cout << "There is one answer. " << all_together_now(getRootTwo(getDiscriminant())) << endl << endl;
	else
		cout << "There is no real answer. \n\n";
}