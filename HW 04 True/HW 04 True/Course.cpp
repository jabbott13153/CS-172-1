#include"Course.h"
#include<string>
#include<iostream>


Course::Course(const std::string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new std::string[capacity];
}

Course::~Course()
{
	delete[] students;
}
std::string Course::getCourseName() const
{
	return courseName;
}
void Course::addStudent(const std::string& name, int capacity)
{
	if (numberOfStudents < capacity)
	{
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
	else
	{
		doubleCapacity(students, capacity);
		students[numberOfStudents] = name;
		numberOfStudents++;
		capacity *= 2;
	}
}
void Course::dropStudent(const std::string& name)
{
	
	for (int i = 0; i < capacity; i++)
	{
		if (students[i] == name)
		{
			students[i] = "No Student";
			numberOfStudents--;
			break;
		}
	}
}
std::string* Course::getStudents() const
{
	return students;
}
int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}
std::string * Course::doubleCapacity(const std::string * List, int size)
{
	std::string* NewArray = new std::string[size * 2];
	for (int i = 0; i < size; i++)
	{
		NewArray[i] = List[i];
	}
	return NewArray;
}
void Course::clear()
{
	for (int i = 0; i < capacity; i++)
	{
		delete &students[i];
		numberOfStudents--;
	}

}
Course::Course(const Course& course)
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new std::string[capacity];
}
int Course::getCapacity()
{
	return capacity;
}