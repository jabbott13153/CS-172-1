#ifndef ImplementV_H_
#define ImplementV_H_

class Vector
{
public:
	int size;
	template<typename T>
	T vecArray[];

	void pop_back();

	bool const empty();

	template<typename T>
	void push_back(T);

	void clear();


};





#endif

