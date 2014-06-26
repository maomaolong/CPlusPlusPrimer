#include "stdafx.h"
#include "Prac6.h"
#include<iostream>

vector<int>* func()
{
	auto p = new vector<int>();
	return p;
}

void readFunc(vector<int>* vec)
{
	int n;
	while (cin>>n&&n!=0)
	{
		vec->push_back(n);
	}
}

void printFunc(vector<int>* vec)
{
	auto iter = vec->begin();
	while (iter != vec->end())
	{
		cout<<*iter<<endl;
		iter++;
	}
}