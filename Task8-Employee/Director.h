#pragma once
#include"Employee.h"
#include"Secretary.h"
class Director
{
public:
	Director();
	~Director();

private:
	Employee** m_employees;
	Secretary m_secretary;
};

Director::Director()
{
}

Director::~Director()
{
}