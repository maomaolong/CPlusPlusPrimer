// Section12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Prac7.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	auto vec = func();
	readFunc(vec);
	printFunc(vec);
	getchar();
	getchar();
	return 0;
}

