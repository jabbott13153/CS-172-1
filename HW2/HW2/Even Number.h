#ifndef _EVENNUMBER_H_
#define _EVENNUMBER_H_

class EvenNumber
{
private:
	int value;

public:
	//to get value of object
	int getValue()
	{
		return value;
	};


	//to return the next even number in the sequence
	int getNext(int);

	//to get the previous even number in the sequence
	int getPrevious(int);

	//set a new value
	int setValue(int);

	//create no arg constuctor
	EvenNumber()
	{
		value = 0;
	}

	//create one are constructor
	EvenNumber(int user_value)
	{
		value = user_value;
	}
};



#endif
