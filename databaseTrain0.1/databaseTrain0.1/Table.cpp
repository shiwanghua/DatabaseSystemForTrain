#include "Table.h"
<<<<<<< HEAD

=======
#include<iostream>
using namespace std;
Table::Table()
{
}
Table::Table(string name)
{
	tableName = name;
	rowCount = 0;
}
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
Table::Table(string name, int colCount)
{
	tableName = name;
	columnCount = colCount;
	rowCount = 0;
	column = new Column[colCount];
}
<<<<<<< HEAD

Table::Table()
{
=======
Table::Table(string name, int colCount, Column * col)
{
	tableName = name;
	columnCount = colCount;
	rowCount = 0;
	column = col;

}

bool Table::setTableName(string name)
{
	tableName = name;
	return false;
}

string Table::getTableName()
{
	return tableName;
}

bool Table::setColumnCount(int c)
{
	columnCount = c;
	return false;
}

int Table::getColumnCount()
{
	return columnCount;
}

int Table::getRowCount()
{
	return rowCount;
}

bool Table::addRow(Row * newRow)
{
	this->row.push_back(*(newRow));
	return false;
}

bool Table::deleteRow(int rowIndex)
{
	row.erase(row.begin() + rowIndex - 1);
	return false;
}

void Table::showTable()
{
	for (int i = 0; i < columnCount; i++)
	{
		string c_name = column[i].getColumnName();
		cout << c_name << " ";
	}

	for (auto it = row.begin(); it != row.end(); it++)
	{
		for (int j = 0; j < columnCount; j++)
		{
			cout << it->getCell(j) << " ";
			if (j == columnCount - 1)cout << endl;
		}
	}
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
}
