#include"Car.h"
#include<iostream>
using namespace std;

Car::Car()
{
	m_year = 0;
	m_brand = new char[1];
	strcpy(m_brand, "");
	m_model = new char[1];
	strcpy(m_model, "");
	m_owner = Person();
	m_drivers = new Person[1];
	m_drivers[0] = Person();
}