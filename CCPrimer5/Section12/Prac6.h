#pragma once
#include<vector>

using namespace std;

vector<int>* func();

void readFunc(vector<int>* vec);

void printFunc(vector<int>* vec);

//题：编写函数，返回一个动态分配的int的vector，将此vector传递给另一个函数，这个函数读取标准输入，将读入的值保存在
//		vector元素中，再将vector传递给另一个函数，打印读入的值，记得在恰当的时刻delete vector

//#include "stdafx.h"
//#include "Prac6.h"
//int _tmain(int argc, _TCHAR* argv[])
//{
//	auto vec = func();
//	readFunc(vec);
//	printFunc(vec);
//	delete vec;
//	getchar();
//	getchar();
//	return 0;
//}