#pragma once
#include<string>
<<<<<<< HEAD
=======
#include<vector>  //ʵ�� Table �� Row ����Ķ�̬����
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
#include"Column.h"
#include"Row.h"
#include"ArrayPlus.h"
using namespace std;
class Table
{
private:
	string tableName;  //����
	int columnCount;  //�еĸ���
	int rowCount;  //�ñ�ǰ�еĸ���
	Column* column;  //������
<<<<<<< HEAD
	ArrayPlus<Row> row; //������
public:
	Table();  //Ĭ�Ϲ��캯��
	Table(string name);
=======
	vector<Row> row; //������
public:
	Table();  //Ĭ�Ϲ��캯��
	Table(string name);
	Table(string name, int colCount);
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
	Table(string name,int colCount, Column* col);

	bool setTableName(string);
	string getTableName();

	bool setColumnCount(int c);  //����֮ǰ���rowCount�Ƿ�Ϊ��
	int getColumnCount();

	int getRowCount();

	bool addRow(Row*);
	bool deleteRow(int rowIndex);

	void showTable();

};