#include "ContactList.h"
#include "Contact.h"

ContactList::ContactList()
{
	m_maxNumber = 10;
	m_currentNumber = 0;
	m_contacts = new Contact[m_maxNumber];
}

ContactList::ContactList(const ContactList& rhs)
{
	m_currentNumber = rhs.m_currentNumber;
	m_contacts = new Contact[m_currentNumber + 1];
	for (int i = 0; i < m_currentNumber; i++)
	{
		m_contacts[i] = rhs.m_contacts[i];
	}
}

ContactList& ContactList::operator=(const ContactList& rhs)
{
	if (this != &rhs)
	{
		delete m_contacts;
		m_currentNumber = rhs.m_currentNumber;
		m_contacts = new Contact[m_currentNumber];
		for (int i = 0; i < m_currentNumber; i++)
		{
			m_contacts[i] = rhs.m_contacts[i];
		}
	}
		return *this;
}


ContactList::~ContactList()
{
	delete[] m_contacts;
	m_currentNumber = 0;
}

void ContactList::printList() const
{
	if (m_currentNumber == 0)
	{
		cout << "Contact list is empty." << endl;
	}

	cout << "\n\t***NAME***\t\t***PHONE***\t\t***ADDRESS***\n\n";
	for (int i = 0; i < m_currentNumber; i++)
	{
		cout << m_contacts[i];
	}
}

void ContactList::insert(Contact& c)
{
	if (m_currentNumber == m_maxNumber)
	{
		grow();
	}
	m_contacts[m_currentNumber] = c;
	m_currentNumber++;
}

void ContactList::grow()
{
	Contact* oldList = m_contacts;
	m_maxNumber *= 2;
	m_contacts = new Contact[m_maxNumber];
	for (int i = 0; i < m_currentNumber - 1; i++)
	{
		m_contacts[i] = oldList[i];
	}
	delete[] oldList;
}

void ContactList::remove(char* name)
{
	for (int i = 0; i < m_currentNumber; i++)
	{
		if (m_contacts[i].getName() == name)
		{
			delete &m_contacts[i];
		}
	}
}

void ContactList::update()
{
	char* name = new char[100];
	cin.getline(name, 101);
	int contactNum = findName(name);
	
	if (contactNum == -1)
	{
		cout << name << " not found" << endl;
	}
	else
	{
		cout << "Update contact: " << endl;
		cin >> m_contacts[contactNum];
	}
}

void ContactList::lookup() const
{
	char* name = new char[100];
	cin.getline(name, 100);
	int contactNum = findName(name);
	if (contactNum == -1)
	{
		cout << name << " not found" << endl;
	}
	else
	{
		cout << m_contacts[contactNum];
	}

}

int ContactList::findName(char* aName) const
{
	for (int i = 0; i < m_currentNumber; i++)
		if (strcmp(m_contacts[i].getName(), aName) == 0)
		{
			return i;
		}
			return -1;
}
