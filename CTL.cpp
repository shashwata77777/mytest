// CTL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector.cpp>
using namespace std;
int main()
{
	CTL::vector<int> myvec;
	myvec.push_back(10);
	myvec.push_back(20);
	myvec.push_back(30);
	myvec.push_back(40);
	myvec.push_back(50);
	myvec.push_back(60);
	myvec.push_back(70);
	myvec.push_back(80);
	CTL::vector<int> myvec2 = myvec;
    std::cout << "Hello World!\n"; 
}
