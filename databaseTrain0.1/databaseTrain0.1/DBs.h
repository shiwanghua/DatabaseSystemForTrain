#pragma once
#include<string>
#include<iostream>
<<<<<<< HEAD
=======
#include<vector>
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
#include<map>
#include"Table.h"
#include"Database.h"
#include"Where.h"
#include"Row.h"
#include"ArrayPlus.h"

using namespace std;

class DBs
{
private:
<<<<<<< HEAD
	ArrayPlus<Database> databasees;
=======
	vector<Database> databasees;
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
public:
	DBs();
	bool insert(string databaseName, string tableName, map<string, string>);
	bool insert(string databaseName, string tableName, string*);
	bool Delete(string databaseName, string tableName, Where);  //Where �ṹ���������ȷ��Row�������±�
	Table select(string databaseName, string tableName, string* columnName,int columnCount, Where);
	bool update(string databaseName, string tableName, map<string, string>, Where);
<<<<<<< HEAD
	bool createTable(Table*); //���� Database.addTable(Table*)
=======
	bool createTable(string databaseName,Table* newTable); //���� Database.addTable(Table*)
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
	bool dropTable(string databaseName, string tableName);  //���� Database.deleteTable(String tableName)
	bool createDatabase(Database databaseName);
	bool dropDatabase(string databaseName);
};