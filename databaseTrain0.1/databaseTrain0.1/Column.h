#pragma once
#include<string>
using namespace std;

enum type{ varchar };

class Column
{
private:
	bool primaryKey;  //�����ʶ
	string columnName;  //����
	type columnType; //�е�����
	bool allowNull;  //�Ƿ�����Ϊ��
	int length;  //��ֵ�ĳ���
public:
<<<<<<< HEAD
=======
	Column();
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc
	Column(string colName, type colType, int colLength, bool colPrimaryKey, bool colAllowNull);

	bool setColumnName(string colName);
	string getColumnName();

	bool getPrimaryKey();
	bool setPrimaryKey(bool colPrimaryKey);

	bool getAllowNull();
<<<<<<< HEAD
	bool setAllowNull(bool colAlloeNull);
=======
	bool setAllowNull(bool colAllowNull);
>>>>>>> 051d73574f993a8d27cfa4abca981562e95801cc

	type getColumnType();
	bool setColumnType(type colType);

	int getLength();
	bool setLength(int colLength);
};