#ifndef Course_H_
#define Course_H_
#include<string>

class Course
{
public:
	Course(const std::string& courseName, int capacity);
	~Course();
	std::string getCourseName() const;
	void addStudent(const std::string& name, int capacity);
	void dropStudent(const std::string& name);
	std::string* getStudents() const;
	int getNumberOfStudents() const;
	std::string* doubleCapacity(const std::string* List, int size);
	void clear();
	Course(const Course&);
	int getCapacity();

private:
	std::string courseName;
	std::string* students;
	int numberOfStudents;
	int capacity;
};
	




#endif
