#pragma once
#include<string>
using namespace std;

enum type{ varchar };

class Column
{
private:
	bool primaryKey;  //主码标识
	string columnName;  //列名
	type columnType; //列的类型
	bool allowNull;  //是否允许为空
	int length;  //列值的长度
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