#include "Contact.h"
#include<string>


istream& operator >> (istream& s, Contact& c)
{
	delete[] c.m_name;
	delete[] c.m_adress;
	delete[] c.m_number;

	char* buffer = new char[1000];

	s.getline(buffer, 1000);		    // Gets a name; discards newline.
	c.m_name = new char[strlen(buffer) + 1];
	strcpy(c.m_name, buffer);

	s.getline(buffer, 1000);	// Gets a phone; discards newline.
	c.m_number = new char[strlen(buffer) + 1];
	strcpy(c.m_number, buffer);

	s.getline(buffer, 1000);		// Gets an address; discards newline.
	c.m_adress = new char[strlen(buffer) + 1];
	strcpy(c.m_adress, buffer);

	delete[] buffer;

	return s;
}

ostream& operator << (ostream& s, const Contact& c)
{
	int i;

	s << '\t' << c.m_name;		// извежда name (след tab).
								// извежда интервали
	for (i = strlen(c.m_name) + 1; i < 20; i++)
		s.put(' ');

	s << '\t' << c.m_number;		// извежда телефонен номер
	for (i = strlen(c.m_number) + 1; i < 20; i++)
		s.put(' ');

	s << '\t' << c.m_adress;			// извежда адрес
	s << '\n';

	return s;
}


Contact::Contact()
{
	this->m_name = new char[1];
	strcpy(m_name, "");
	this->m_number = new char[1];
	strcpy(m_number, "");
	this->m_adress = new char[1];
	strcpy(m_adress, "");
}

Contact::Contact(char * name, char * num, char * adress)
{
	this->m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	this->m_number = new char[strlen(num) + 1];
	strcpy(m_number, num);
	this->m_adress = new char[strlen(adress) + 1];
	strcpy(m_adress, adress);
}
char* Contact::getName() const
{
	return this->m_name;
}

Contact::Contact(const Contact& c)
{
	m_name = new char[strlen(c.m_name) + 1];
	strcpy(m_name, c.m_name);
	m_adress = new char[strlen(c.m_adress) + 1];
	strcpy(m_adress, c.m_adress);
	m_number = new char[strlen(c.m_number) + 1];
	strcpy(m_number, c.m_number);
}

Contact& Contact::operator=(const Contact& c)
{
	if (this != &c)
	{
		delete[] m_name;
		delete[] m_adress;
		delete[] m_number;
		m_name = new char[strlen(c.m_name) + 1];
		strcpy(m_name, c.m_name);
		m_adress = new char[strlen(c.m_adress) + 1];
		strcpy(m_adress, c.m_adress);
		m_number = new char[strlen(c.m_number) + 1];
		strcpy(m_number, c.m_number);
	}
	return *this;
}

Contact::~Contact()
{
	delete[] this->m_name;
	delete[] this->m_number;
	delete[] this->m_adress;
}
