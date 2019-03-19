#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class EuroCountry
{
public:
	string name;
	int voices;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int TopMarks[10] = { 12,10,8,7,6,5,4,3,2,1 };

	string path = "eurovision.txt";

	ifstream file;

	file.open(path);

	string line;

	_getch();
	return 0;
}