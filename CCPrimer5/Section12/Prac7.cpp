#include "stdafx.h"
#include "Prac7.h"
#include<iostream>

shared_ptr<vector<int>> func()
{
	//return shared_ptr<vector<int>>(); error ����ط���Ҫ�ر�ע�⣡
	return make_shared<vector<int>>();

}

void readFunc(shared_ptr<vector<int>> vec)
{
	int n;
	while (cin>>n)
	{
		vec->push_back(n);
	}
}

void printFunc(shared_ptr<vector<int>> vec)
{
	auto iter = vec->begin();
	while (iter != vec->end())
	{
		cout<<*iter<<endl;
		iter++;
	}
}
