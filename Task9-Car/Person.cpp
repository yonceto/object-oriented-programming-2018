#include"Person.h"
#include<iostream>
using namespace std;

Person::Person()
{
	m_name = new char[1];
	strcpy(m_name, "");
	m_personalNum = new char[1];
	strcpy(m_personalNum, "");
	m_phone = new char[1];
	strcpy(m_phone, "");
}

Person::Person(char* name, char* num, char* phone)
{
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	m_personalNum = new char[strlen(num) + 1];
	strcpy(m_personalNum, num);
	m_phone = new char[strlen(phone) + 1];
	strcpy(m_phone, phone);
}

Person::Person(const Person& rhs)
{
	m_name = new char[strlen(rhs.m_name) + 1];
	strcpy(m_name, rhs.m_name);
	m_personalNum = new char[strlen(rhs.m_personalNum) + 1];
	strcpy(m_personalNum, rhs.m_personalNum);
	m_phone = new char[strlen(rhs.m_phone) + 1];
	strcpy(m_phone, rhs.m_phone);
}

Person& Person::operator=(const Person& rhs)
{
	if (this != &rhs)
	{
		delete[] m_name;
		m_name = new char[strlen(rhs.m_name) + 1];
		strcpy(m_name, rhs.m_name);
		delete[] m_personalNum;
		m_personalNum = new char[strlen(rhs.m_personalNum) + 1];
		strcpy(m_personalNum, rhs.m_personalNum);
		delete[] m_phone;
		m_phone = new char[strlen(rhs.m_phone) + 1];
		strcpy(m_phone, rhs.m_phone);
	}
	return *this;
}

Person::~Person()
{
	delete[] m_name;
	delete[] m_personalNum;
	delete[] m_phone;
}

char* Person::getName() const
{
	return m_name;
}

void Person::setName(char* name)
{
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
}

char* Person::getPersonalNum() const
{
	return m_personalNum;
}

void Person::setPersonalNum(char* num)
{
	m_personalNum = new char[strlen(num) + 1];
	strcpy(m_personalNum, num);
}

char* Person::getPhone() const
{
	return m_phone;
}

void Person::setPhone(char* phone)
{
	m_phone = new char[strlen(phone) + 1];
	strcpy(m_phone, phone);
}