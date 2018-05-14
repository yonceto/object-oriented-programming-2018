#include"CarNumber.h"
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

enum Regions
{
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
	��,
};


char letters[22] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
'1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };

void longNumber(char* num)
{
	if (num[0] == '�')
	{
		if (num[1] == '�')
		{
			cout << "Veliko Tarnovo" << endl;
		}
		if (num[1] == '�')
		{
			cout << "Vratsa" << endl;
		}
		if (num[1] == '�')
		{
			cout << "Vidin" << endl;
		}
	}
	else if (num[0] == '�')
	{
		if (num[1] == '�')
		{
			cout << "Gabrovo" << endl;
		}
		if (num[1] == '�')
		{
			cout << "Pleven" << endl;
		}
	}
	else
	{
		cout << "Invalid number" << endl;
	}
}

void shortNumber(char* num)
{
	switch (num[0])
	{
	case '�': cout << "Burgas" << endl;
	case '�': cout << "Varna" << endl;
	case '�': cout << "Blagoevgrad" << endl;
	case '�': cout << "Kardzhali" << endl;
	case '�': cout << "Montana" << endl;
	case '�': cout << "Ruse" << endl;
	case '�': cout << "Sofia" << endl;
	case '�': cout << "Dobrich" << endl;
	case '�': cout << "Haskovo" << endl;
	case '�': cout << "Shumen" << endl;
	case '�': cout << "Yambol" << endl;
	default: cout << "Invalid number" << endl;
		break;
	}
}

bool isADigit(char c)
{
	return ('0' <= c && c <= '9');
}

bool isALetter(char c)
{
	const char letters[] = "������������";
	return (strchr(letters, c) != NULL);
}

CarNumber::CarNumber()
{
	m_number = new char[1];
	strcpy(m_number, "");
}

CarNumber::CarNumber(const char* rhs)
{
	m_number = new char[strlen(rhs) + 1];
	strcpy(m_number, rhs);
}

CarNumber::CarNumber(const CarNumber& rhs)
{
	m_number = new char[strlen(rhs.m_number + 1)];
	strcpy(m_number, rhs.m_number);
}

CarNumber& CarNumber::operator=(const CarNumber& rhs)
{
	if (this != &rhs)
	{
		delete[] m_number;
		m_number = new char[strlen(rhs.m_number + 1)];
		strcpy(m_number, rhs.m_number);
	}
	return *this;
}

bool CarNumber::isValid()
{
	bool isValid = true;
	if (strlen(this->m_number) < 7 || strlen(this->m_number) > 8)
	{
		isValid = false;
	}
	for (int i = 2; i < 6; i++)
	{
		if (isADigit(m_number[i]) == false)
		{
			isValid = false;
		}
	}
	for (int i = 6; i < strlen(m_number); i++)
	{
		if (isALetter(m_number[i] == false))
		{
			isValid = false;
		}
	}
	return isValid;
}

void CarNumber::ShowRegion(CarNumber num) const
{
	/*if (num.isValid())
	{*/
		if(strlen(num.m_number) == 7)
		{ 
			shortNumber(num.m_number);
		}
		if (strlen(num.m_number) == 8)
		{
			longNumber(num.m_number);
		}
	/*}*/
}

CarNumber::~CarNumber()
{
	delete[] m_number;
}