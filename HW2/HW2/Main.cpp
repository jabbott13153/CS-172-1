#include "Fan.h"
#include "QuadEq.h"
#include "Even Number.h"
#include<iostream>
using namespace std;

//code to test the fan class
void fan_testing();

//code to test the Quadratic Equation class
void QuadraticEq_testing();

//to test out EvenNumber class
void EvenNumber_testing();

int main()
{
	fan_testing();
	QuadraticEq_testing();
	EvenNumber_testing();
	return 0;
}
//code to test the fan class
void fan_testing()
{

	//setting the parameters of the first fan object
	Fan the_first = Fan();
	the_first.setSpeed(3);
	the_first.setOn(true);
	the_first.setRadius(10);

	//setting the parameters of the second fan object
	Fan the_second = Fan();
	the_second.setSpeed(2);
	the_second.setOn(false);
	the_second.setRadius(5);

	//invoking get functions to make sure the set functions are working
	//for fan 1
	cout << "These are the properties of Fan 1. \n\n";
	cout << "The speed is: " << the_first.getSpeed() << endl;
	cout << "The fan is on: " << the_first.getOn() << endl;
	cout << "The radius is: " << the_first.getRadius() << endl;

	//for fan 2
	cout << "These are the properties of Fan 2. \n\n";
	cout << "The speed is: " << the_second.getSpeed() << endl;
	cout << "The fan is on: " << the_second.getOn() << endl;
	cout << "The radius is: " << the_second.getRadius() << endl;

}

void QuadraticEq_testing()
{
	//setting parameters for equation
	QuadEq equation1 = QuadEq();
	equation1.setA(3.0);
	equation1.setB(4.0);
	equation1.setC(-5.0);

	//testing to make sure that the values are set to the correct parameters
	cout << "a is: " << equation1.getA() << endl;
	cout << "b is: " << equation1.getB() << endl;
	cout << "c is: " << equation1.getC() << endl;

	cout << "The discriminant is: " << equation1.getDiscriminant() << endl;
	equation1.getRootOne(equation1.getDiscriminant());
	equation1.getRootTwo(equation1.getDiscriminant());
	equation1.number_of_answers(equation1.is_it_true1(equation1.getDiscriminant()), equation1.is_it_true2(equation1.getDiscriminant()));
}

void EvenNumber_testing()
{
	EvenNumber number1 = EvenNumber(16);
	cout << "Number 1 is: " << number1.getValue() << endl;
	cout << "The previous even number is: " << number1.getPrevious(number1.getValue()) << endl;
	cout << "The next even number is: " << number1.getNext(number1.getValue()) << endl;
}