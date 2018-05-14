#include "Employee.h"
#include <string>

Employee::Employee()
{
	this->m_personalNum = new char[1];
	strcpy(m_personalNum, "/0");
	this->m_salary = 0;
	this->m_department = None;
}

Employee::Employee(const Employee& e)
{
	m_name = new char[strlen(e.m_name) + 1];
	strcpy(m_name, e.m_name);
	m_personalNum = new char[strlen(e.m_personalNum) + 1];
	strcpy(m_personalNum, e.m_personalNum);
	m_adress = new char[strlen(e.m_adress) + 1];
	strcpy(m_adress, e.m_adress);
	m_salary = e.m_salary;
	m_department = e.m_department;
}

Employee::Employee(char * personalNum, char * name, char * adress, int salary, Department d)
{
	m_personalNum = new char[strlen(personalNum) + 1];
	strcpy(m_personalNum, personalNum);
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	m_adress = new char[strlen(adress) + 1];
	strcpy(m_adress, adress);
	this->m_salary = salary; // може и без this?
	this->m_department = d;
}

Employee& Employee::operator=(Employee& e)
{
	if (this != &e)
	{
		delete m_name;
		delete m_personalNum;
		delete m_adress;
		m_salary = e.m_salary;
		m_department = e.m_department;
		m_name = new char[strlen(e.m_name) + 1];
		strcpy(m_name, e.m_name);
		m_personalNum = new char[strlen(e.m_personalNum) + 1];
		strcpy(m_personalNum, e.m_personalNum);
		m_adress = new char[strlen(e.m_adress) + 1];
		strcpy(m_adress, e.m_adress);
	}
	return *this;
}

Employee::~Employee()
{
	delete[] this->m_personalNum;
	delete[] this->m_name;
	delete[] this->m_adress;
	this->m_salary = 0;
	this->m_department = None;
}
