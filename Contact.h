#pragma once
#include<iostream>
using namespace std;
class Contact
{
	friend istream& operator >> (istream& a, Contact& e);
	friend ostream& operator << (ostream& a, const Contact& e);
public:
	Contact();
	Contact(char* name, char* num, char* adress);
	Contact(const Contact& c);
	Contact& operator=(const Contact& c);
	~Contact();
	char* getName() const;

private:
	char* m_name;
	char* m_number;
	char* m_adress;
};

