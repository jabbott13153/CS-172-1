#include"Implement Vector.h"

int size;
template<typename T>
T vecArray[];


template<typename T>
void Vector::pop_back()
{
	T* temp_delete = &vecArray[size - 1];
	delete temp_delete;
}

bool const Vector::empty()
{
	for (int i = 0; i < size; i++)
	{
		if(vecArray[i] )
	}
}

template<typename T>
void Vector::push_back(T);

void Vector::clear();
