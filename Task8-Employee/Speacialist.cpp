#include "Speacialist.h"
#include <string>

Specialist::Specialist()
{
	this->m_workDescription = new char[1];
	strcpy(m_workDescription, "/0");
}

Specialist::Specialist(char * personNum, char * name, char * adress, int salary, Department d, char * des)
{
	strcpy(m_workDescription, des);
}

Specialist::~Specialist()
{
	delete[] this->m_workDescription;
}
