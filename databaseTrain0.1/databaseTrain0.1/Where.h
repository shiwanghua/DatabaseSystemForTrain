#pragma once
<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <string>
=======
#include<string>
>>>>>>> 8ce9253263a2efb29f36e8b87572c6848656020a
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
using namespace std;
class Where
{
private:
	string columnName;
	string value;
public:
	Where(string wherColumnName, string whereValue);

	string getWhereColumnName();
	string getWhereValue();

};