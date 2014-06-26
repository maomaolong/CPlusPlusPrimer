#pragma once
#include<vector>
#include<memory>
using namespace std;

shared_ptr<vector<int>> func();

void readFunc(shared_ptr<vector<int>> vec);

void printFunc(shared_ptr<vector<int>> vec);

