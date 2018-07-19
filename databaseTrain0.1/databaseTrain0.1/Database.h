#pragma once
<<<<<<< HEAD
#include"Table.h"
#include"ArrayPlus.h"
=======
#include<vector>
#include"Table.h"
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
using namespace std;
class Database
{
private:
	string name;
	int tableCount;
<<<<<<< HEAD
	ArrayPlus<Table> tables;
public:
	Database(string databaseName);
	bool addTable(Table*);
	bool deleteTable(string tableName);

	bool setDatabaseName(string databaseName);
	string getDatabaseName();

=======
	vector<Table> tables;
public:
	Database(string databaseName);
	bool addTable(Table* newTable);
	bool deleteTable(string tableName);


	bool setDatabaseName(string databaseName);
	string getDatabaseName();


>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
	int getTableCount();
};