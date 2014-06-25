// Section12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Prac6.h"
int _tmain(int argc, _TCHAR* argv[])
{
	auto vec = func();
	readFunc(vec);
	printFunc(vec);
	delete vec;
	getchar();
	getchar();
	return 0;
}

