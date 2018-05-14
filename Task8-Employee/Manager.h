#pragma once
#include"Speacialist.h"
#include<string>
class Manager : public Specialist
{
public:
	Manager();
	Manager(char* personNum, char* name, char* adress, int salary, Department d, char* des, char*Ddes) :
		Specialist (personNum, name, adress, salary, d, des) {
		strcpy(m_deparmentDescription, Ddes);
	}
	~Manager();

private:
	char* m_deparmentDescription;
};

Manager::Manager()
{
	this->m_deparmentDescription = new char[1];
	strcpy(m_deparmentDescription, "/0");
}

Manager::~Manager()
{
	delete[] this->m_deparmentDescription;
}
