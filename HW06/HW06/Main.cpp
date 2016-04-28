#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

//for ex01
//creating a function to perform a linear search through an array
template<typename J>
J linear_search(const J list[], J key, int array_size);

//for ex02
//creates a function that returns whether an array is sorted or not
template<typename C>
bool isSorted(const C list[], int size);

//ask about ex03

//for ex04
//creates a function that shuffles the contents of a vector
template<typename K>
void shuffle(vector<K>& v);

int main()
{
	//testing ex01
	//a variable to hold a test key
	string test_one = "It is a Chinchilla";
	//an array of ints for testing
	int Test_Array1[] = { 3,6,9,12,15,18,21,24,27,30 };
	//an array of doubles for testing
	double testArray2[] = { 3.14159, 63.58, 23.22, 29.22 };
	//an array of strings for testing
	string testArray3[] = { "It is a Chinchilla", "It is a Cat", "It is a Dog", "It is a Donkey", "It is a Koala" };
	//three funciton calls with different variables to test linear_search
	cout << "Array testing1 " << linear_search(Test_Array1, 21, 10) << endl;
	cout << "Array testing2 " << linear_search(testArray2, 29.22, 4) << endl;
	cout << "Array testing3 " << linear_search(testArray3, test_one, 5) << endl;

	//ex02 test
	cout << "Array testing1 " << isSorted(Test_Array1, 10) << endl;
	cout << "Array testing2 " << isSorted(testArray2, 4) << endl;
	//cout << "Array testing3 " << isSorted(testArray3, 5) << endl; <-- work on this code

	//testing shuffle funciton
	vector<string> vector1 = { "That is a Chinchilla", "That is a Cat" , "That is a Dog", "That is a Chicken", "That is a Gazelle" };
	//showing origial function's order
	cout << "\nThe unshuffled order of vector1 is: " << endl;
	for (int i = 0; i < vector1.size(); i++)
	{
		cout << vector1[i] << endl;
	}

	cout << "\nThe shuffled order of vector1 is: \n";
	shuffle(vector1);

	return 0;
}

//a function to perform a linear search through an array
template<typename J>
J linear_search(const J list[], J key, int array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		if (key == list[i])
		{
			return list[i];                               // Joseph: I think it wants to know where in the array the object is, not the object there.
		}
	} 
		cout << "There is no match for " << key << " .\n";
		
		// Joseph: And it need to return something even if it doesn't find it
}

//creates a function that returns true if function is sorted
template<typename C>
bool isSorted(const C list[], int size)
{
	//variable to hold true or false value
	bool is_true = true;
	for (int i = 0; i < size; i++)
	{
		if (list[i] > list[i - 1])
			is_true = true;
		else
		{
			is_true = false;
			break;
		}
	}
	return is_true;
}

//creates a function that shuffles the contents of a vector
template<typename K>
void shuffle(vector<K>& v)
{
	srand(time(NULL));
	for (int i = 0; i < v.size(); i++)
	{
		int index = rand() % v.size();
		K temp = v[i];
		v[i] = v[index];
		v[index] = temp;
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}

