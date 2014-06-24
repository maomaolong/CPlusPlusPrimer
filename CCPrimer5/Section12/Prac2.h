#pragma once
#include<memory>
#include<string>
#include<vector>
#include<list>
#include<iostream>
using namespace std;

class StrBlob
{
public:
	typedef vector<string>::size_type size_type;
	StrBlob(void):data(make_shared<vector<string>>()){}
	~StrBlob(void){}
	
	inline size_type size() const{ return data->size();}
	void push_back(const string &str){data->push_back(str);}
	bool empty() const{return data->empty();}
	void pop_back();
	//string& front();
	//string& back();
	string& front() const;
	string& back() const;

	void print() const;

private:
	void check(size_type i,string str) const;
	shared_ptr<vector<string>> data;
};

//题目是编写你自己的StrBlob类，包含const版本的front和back.这个题目有什么意义？对front和back的const进行重载有什么好处？

//#include "stdafx.h"
//#include<iostream>
//#include<memory>
//#include"Prac2.h"
//using namespace std;
//int _tmain(int argc, _TCHAR* argv[])
//{
//	StrBlob blob;
//	blob.push_back("hello");
//	blob.push_back("world");
//	blob.front() = "haha";
//	blob.print();
//	getchar();
//	return 0;
//}