#include<iostream>
#include<fstream>
#include<string>


using namespace std;


//int main()
//{
//	ofstream fout;
//	fout.open("X.txt");
//
//	if (fout.fail()) {
//		cout << "can't open file" << endl;
//		return 0;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		string line;
//		cout << "Please enter a word. \n";
//		cin >> line;
//		fout << "word " << i << " is: " << line << endl;
//	}
//	fout.close();
//}


int main()
{
	fstream file("pg1533.txt", ios::in | ios::out);

	if (file.fail())
	{
		cout << "Cant't open file\n";
		return 0;
	}

	//variable to hold number of words
	long unsigned int X = 0;
	string word;


	//reading words and incrementing X
	while (file >> word)
	{
		X++;
	}

	file.clear();
	file.seekp(ios::end);

	cout << "\n\n This file has " << X << " words. \n";
	file << "\n\n This file has " << X << " words. \n";


	file.close();
	return 0;
}
