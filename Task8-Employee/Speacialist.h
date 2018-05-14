#pragma once
#include"Employee.h"
class Specialist : public Employee
{
public:
	Specialist();
	Specialist(char* personNum, char* name, char* adress, int salary, Department d, char* des) :
		Employee(personNum, name, adress, salary, d) {
			this->m_workDescription = des;
	}
	~Specialist();

private:
	char* m_workDescription;
};
