#include"CarNumber.h"
#include"Person.h"
#pragma once
class Car
{
public:
	Car();
	Car(const Car& rhs);
	Car& operator=(const Car& rhs);
	~Car();
private:
	char* m_brand;
	char* m_model;
	int m_year;
	CarNumber m_number;
	Person m_owner;
	Person* m_drivers;
};