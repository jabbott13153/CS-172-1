#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include"RegularPolygon.h"
using namespace std;

//function to check if the word is a palindrome
bool checkPalindrome(vector<char>, string);

//function to test RegularPolygon.h
void testPolygon();

int main()
{
	//10.5

	//creating a variable to store the potential palindrome, and then allowing the user to enter the word
	string words;
	cout << "Please enter a word: " << endl;
	//storing the word in string variable words
	cin >> words;

	//variable to store word size

	static int Size = words.size();
	//creating a vector to store the char's of the string words
	vector<char> Stack;

	//store the individual chars in the vectore
	for (int i = (words.size() - 1); i >= 0; i--)
	{
		Stack.push_back(words[i]);
	}

	//check to make sure of order --> for (int i = 0; i < words.size(); i++)
		//check to make sure of order --> cout << Stack[i];
	

	//vector<char>* possible_palindromes = NULL;

	if (checkPalindrome(Stack, words))
		cout << words << " is a palindrome. \n";
	else
		cout << words << " is not a palindrome. \n";

	//10.13

	//not calling for some reason, torubleshoot later
	void testPolygon();

	//no arg construct
	RegularPolygon the_First;
	//display perimeter
	cout << "the_First's perimeter is: " << the_First.getPerimeter(the_First.getSide(), the_First.getN()) << endl;
	//display area
	cout << "the_First's area is: " << the_First.getArea(the_First.getSide(), the_First.getN()) << endl;

	//two arg construct
	RegularPolygon the_Second(6, 4.0);
	cout << "the_Second's perimeter is: " << the_Second.getPerimeter(the_Second.getSide(), the_Second.getN()) << endl;
	//display area
	cout << "the_Second's area is: " << the_Second.getArea(the_Second.getSide(), the_Second.getN()) << endl;

	//four arg construct
	RegularPolygon the_Last(10, 4.0, 5.6, 7.8);
	cout << "the_Last's perimeter is: " << the_Last.getPerimeter(the_Last.getSide(), the_Last.getN()) << endl;
	//display area
	cout << "the_Last's area is: " << the_Last.getArea(the_Last.getSide(), the_Last.getN()) << endl;
	return 0;
}

//function to check if the word is a palindrome
bool checkPalindrome(vector<char> possibility, string word_of_choice)
{
	for (int i = 0; i < possibility.size(); i++)
	{
		
		if (word_of_choice[i] == possibility[i])
		{
			return true;
		}
		else
			return false;
	}
	
}

//not calling for some reason, troubleshoot later
void testPolygon()
{
	//no arg construct
	RegularPolygon the_First;
	//display perimeter
	cout << "the_First's perimeter is: " << the_First.getPerimeter(the_First.getSide(), the_First.getN());
	//display area
	cout << "the_First's area is: " << the_First.getArea(the_First.getSide(), the_First.getN());

	//two arg construct
	RegularPolygon the_Second(6, 4.0);
	cout << "the_Second's perimeter is: " << the_Second.getPerimeter(the_Second.getSide(), the_Second.getN());
	//display area
	cout << "the_Second's area is: " << the_Second.getArea(the_Second.getSide(), the_Second.getN());

	//four arg construct
	RegularPolygon the_Last(10, 4.0, 5.6, 7.8);
	cout << "the_Last's perimeter is: " << the_Last.getPerimeter(the_Last.getSide(), the_Last.getN());
	//display area
	cout << "the_Last's area is: " << the_Last.getArea(the_Last.getSide(), the_Last.getN());
}