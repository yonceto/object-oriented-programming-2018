// Task9.cpp : Defines the entry point for the console application.
//
#include"CarNumber.h"
#include<iostream>
using namespace std;


int main()
{
	CarNumber num = CarNumber("ВР1678ШШ");
	/*num.ShowRegion(num);*/
	cout << num.isValid();
    return 0;
}

