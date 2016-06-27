//
//  INCLUDES
//
#include <iostream>
#include <fstream>
#include "List.cpp"

using namespace std;

//
//  FUNCTION PROTOTYPES
//
bool readFile(string filename);


//
//	CONSTANTS
//



//
//  MAIN
//
int main()
{
	string filename = "";

	cout << "Enter filename: ";
	cin >> filename;

	readFile(filename);

	cout << endl;

	return 0;
}



//
//  FUNCTION IMPLEMENTATIONS
//
bool readFile(string filename)
{
	bool succeeded = true;
	string fileContents = "";
	ifstream fin;

	fin.open(filename);

	while( fin.good() )
	{
		fin >> fileContents;
		cout << fileContents;
	}

	fin.close();

	return succeeded;
}




