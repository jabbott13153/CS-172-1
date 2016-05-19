#include<iostream>
#include<fstream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<vector>

#include"Word.h"
using namespace std;

void frequency(unordered_map<string, int>, long unsigned int);
void displayOnlyOnce(vector<string>);
long unsigned int findTheMedian(long unsigned int);

int main()
{
	fstream file("pg36775.txt", ios::in | ios::out);
	unordered_map  <string, int> keeping_track_of_words;


	if (file.fail())
	{
		cout << "Cant't open file\n";
		return 0;
	}



	////variable to hold number of words
	long unsigned int X = 0;
	string word;


	//reading words and incrementing X
	while (file >> word)
	{
		X++;
		for (auto& x : { word })
		{
			//trying to iterate through the unordered map keeping_track_of_words
			//unordered_map<string, int>::iterator it = std::find_if(keeping_track_of_words.begin(), keeping_track_of_words.end(), [](string word) {return true;});
			if (keeping_track_of_words.count(word) > 0)
			{

				keeping_track_of_words.at(word) += 1;

			}
			else
			{
				keeping_track_of_words.emplace(word, 1);
			}
		}
	}
file.close();
	//file.clear();
	//file.seekp(ios::end);
frequency(keeping_track_of_words, X);
	//cout << "\n\n This file has " << X << " words. \n";
	//file << "\n\n This file has " << X << " words. \n";


	
	return 0;
}

//prints the word that occurs the most times, and how many times it occurs out to the screen
void frequency (unordered_map<string, int>mapping, long unsigned int x)
	{
		//holds the number of times a word is found
		int greatest = 0;
		//holds the most often occuring word
		string mostOftenWord;
		int was_greatest = 0;
		int temp = 0;
		//used to find the words that appear only once
		int fewest = 1;
		//used to hold the answer to whether displayOnlyOnce should be called
		char answer;
		//holds the median value
		long unsigned int m_value = findTheMedian(x);
		//holds the words that appear only once
		vector<string> onlyOnce = { "qwertyuiop" };
		//hold the words that fall on the median
		vector<string> medianWords = { "qwertyuiop" };
		for (auto itr = mapping.begin(); itr != mapping.end(); itr++)
		{
			if (greatest < itr->second)
			{
				mostOftenWord = itr->first;
				greatest = itr->second;
			}
			if (fewest == itr->second)
			
				onlyOnce.push_back(itr->first);
			if ((m_value >= (itr->second + 5)) || (m_value <= (itr->second -5)))
				medianWords.push_back(itr->first);
			
		}
		onlyOnce.erase(onlyOnce.begin());
		medianWords.erase(medianWords.begin());
		cout << "The word that appears most often is: " << mostOftenWord << ", and it appears " << greatest << " times." << endl;
		
		

		cout << "The median value is: " << m_value; /*<< " and the words that appear with this frequency are: \n";
		for (int i = 0; i < medianWords.size(); i++)
			cout << medianWords[i] << endl;*/
			/*	cout << itr->first << ":" << itr->second << endl;
		}*/
		cout << "The number of words that appear only once is: " << onlyOnce.size() << ".\n";
		/*cout << "Do you want to see the complete list? Enter 1 for yes, or 2 for no.\n";
		cin >> answer;
		if (answer == '1')
			displayOnlyOnce(onlyOnce);
		else
			cout << "Moving on then.\n";*/
}

void displayOnlyOnce(vector<string> lst)
{
	cout << "The words that appear only once are: \n";
	for (int i = 0; i < lst.size(); i++)
		{
			cout << lst[i] << "\n";
		}
}

long unsigned int findTheMedian(long unsigned int number)
{
	long unsigned int medianValue = number / 2;
	return medianValue;
}