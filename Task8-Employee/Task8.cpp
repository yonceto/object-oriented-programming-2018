// Task8.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include"Employee.h"
using namespace std;


int main()
{
	char* pN = new char[1000];
	char* n = new char[1000];
	cin >> pN;
	cin >> n;
	Employee e = Employee(pN, n);
	cout << e.m_personalNum;
	cout << e.m_name << endl;
}

