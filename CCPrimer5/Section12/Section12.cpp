// Section12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<memory>
#include"Prac2.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	StrBlob blob;
	blob.push_back("hello");
	blob.push_back("world");
	blob.front() = "haha";
	blob.print();
	getchar();
	return 0;
}

