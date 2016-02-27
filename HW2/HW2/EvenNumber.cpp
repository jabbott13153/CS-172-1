#include "Even Number.h"
using namespace std;

//to return the next even number in the sequence
int EvenNumber::getNext(int Value)
{
	int next_value = Value += 2;
	return next_value;
}

//to get the previous even number in the sequence
int EvenNumber::getPrevious(int Value)
{
	int previous_value = Value -= 2;
	return previous_value;
}

//set a new value
int EvenNumber::setValue(int new_value)
{
	value = new_value;
	return value;
}
