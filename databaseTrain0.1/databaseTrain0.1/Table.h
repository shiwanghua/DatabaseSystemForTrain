#pragma once
#include<string>
<<<<<<< HEAD
=======
#include<vector>  //实现 Table 中 Row 对象的动态增加
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
#include"Column.h"
#include"Row.h"
#include"ArrayPlus.h"
using namespace std;
class Table
{
private:
	string tableName;  //表名
	int columnCount;  //列的个数
	int rowCount;  //该表当前行的个数
	Column* column;  //列数组
<<<<<<< HEAD
	ArrayPlus<Row> row; //行数组
public:
	Table();  //默认构造函数
	Table(string name);
=======
	vector<Row> row; //行数组
public:
	Table();  //默认构造函数
	Table(string name);
	Table(string name, int colCount);
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
	Table(string name,int colCount, Column* col);

	bool setTableName(string);
	string getTableName();

	bool setColumnCount(int c);  //调用之前检查rowCount是否为零
	int getColumnCount();

	int getRowCount();

	bool addRow(Row*);
	bool deleteRow(int rowIndex);

	void showTable();

};