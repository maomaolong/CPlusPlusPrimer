#pragma once
#include<vector>

using namespace std;

vector<int>* func();

void readFunc(vector<int>* vec);

void printFunc(vector<int>* vec);

//�⣺��д����������һ����̬�����int��vector������vector���ݸ���һ�����������������ȡ��׼���룬�������ֵ������
//		vectorԪ���У��ٽ�vector���ݸ���һ����������ӡ�����ֵ���ǵ���ǡ����ʱ��delete vector

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