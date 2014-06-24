#include "stdafx.h"
#include "Prac2.h"

void StrBlob::check(StrBlob::size_type i,string str) const
{
	if (data->size() <= i)
	{
		throw out_of_range(str.c_str());
	}
}

void StrBlob::pop_back()
{
	check(0,"pop_back StrBlob is empty");
	data->pop_back();
}

//string& StrBlob::front()
//{
//	check(0,"front StrBlob is empty");
//	return data->front();
//}
//
//string& StrBlob::back()
//{
//	check(0,"back StrBlob is empty");
//	return data->back();
//}

string& StrBlob::front() const
{
	check(0,"front StrBlob is empty");
	return data->front();
}

string& StrBlob::back() const
{
	check(0,"back StrBlob is empty");
	return data->back();
}

void StrBlob::print() const
{
	auto iter = data->begin();
	while (iter != data->end())
	{
		cout<<*iter<<endl;
		iter++;
	}
}