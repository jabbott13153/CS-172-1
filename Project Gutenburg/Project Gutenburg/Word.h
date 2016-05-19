#ifndef WORD_H_
#define WORD_H_

#include<vector>
#include<string>
#include<unordered_map>
#include<fstream>
using std::vector;
using std::string;

class Word {

private:

	string Type;
	unsigned int Frequency;

	
	
public:
	//create constructor
	Word(string);
	//create default constructor
	Word() {};
	string getType() { return Type; };
	unsigned int getFrequency() { return Frequency; };
	void setFrequency(unsigned int freq)
	{
		Frequency = freq;
	};
};

#endif