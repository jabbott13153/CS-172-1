#include "Word.h"
#include<vector>
#include<string>
#include<unordered_map>
#include<fstream>
using std::vector;
using std::string;

//create constructor
Word::Word(string w)
{
	Type = w;
	Frequency = 1;
}

