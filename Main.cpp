// Zadacha_slunce.cpp : Defines the entry point for the console application.
//
#include "Contact.h"
#include"ContactList.h"
#include <iostream>

using namespace std;

int main()
{
	Contact con1;
	cin >> con1;
	cout << con1;
	Contact con2;
	cin >> con2;
	cout << con2;
	ContactList conList;
	conList.insert(con1);
	conList.insert(con2);
	conList.update();
	conList.printList();
	return 0;
}