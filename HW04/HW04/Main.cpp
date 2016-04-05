#include<iostream>

using namespace std;

int* ex01_part_1(int Size);
int ex01_part2(int*, int);

//ex02 
int* doubleCapacity(const int*, int size);

int main()
{

	//create variable so user can input an integer into the ex01_part_1 function
	int size_of_array = 0;
	
//prompt user to enter a number, then input number into function
	cout << "Please enter the size of the new array: \n";
	cin >> size_of_array;

	//int* array = ex01_part_1(size_of_array);
	cout << "The amount of numbers above the average is: " << ex01_part2(ex01_part_1(size_of_array), size_of_array) << endl;
	return 0;
}

//code to create array using a number inputted into funciton,
//then reads the requisite amount of numbers into the array
int* ex01_part_1(int Size)
{
	//create variable for pointer to point to
	int Number;

	//create pointer to be able to input numbers into the array.
	//Pointer set to NULL
	int * number = &Number;

	//pointer to allocate memory for new array
	int* newArray = new int[Size];

	//initialize the array
	for (int i = 0; i < Size; i++)
	{
		
		cout << "Please enter an integer: " << endl;
		cin >> *number;
		newArray[i] = *number;
	}

	//check to make sure program is working correctly
	/*for (int i = 0; i < Size; i++)
	{
		cout << newArray[i] << endl;

	}*/
	return newArray;
}

//function to take average, and then return the numbers above the average
int ex01_part2(int* new_array, int size)
{
	int average = 0;
	//creates variable to store amount of numbers above the average
	int tally = 0;
//finds average
	for (int i = 0; i < size; i++)
	{
		average += new_array[i];
	}
	average /= size;

	//checks to see what numers are above the average
	for (int i = 0; i < size; i++)
	{
		if (new_array[i] > average)
			tally++;			
	}

	return tally;
}

//creates a new array with double the capacity of the list variable
int* doubleCapacity(const int* List, int size)
{
	int *newArray = new int[size * 2];
	for (int i = 0; i < size * 2; i++)
	{

	}
}