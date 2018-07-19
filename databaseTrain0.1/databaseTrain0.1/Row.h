#pragma once
#include<string>
using namespace std;
class Row
{

private:
	string* data;  //ĞĞµÄÄÚÈİ

public:
	Row(string* rowData);

	string getCell(int index);
<<<<<<< HEAD
	bool setCell(int index);

=======
	bool setCell(int index, string cellContent);
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
};