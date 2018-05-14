#pragma once
#include"Contact.h"
class ContactList
{
public:
	ContactList();
	ContactList(const ContactList& rhs);
	ContactList& operator=(const ContactList& rhs);
	~ContactList();
	void printList() const;
	void insert(Contact& c);
	void remove(char* name);
	void update();
	void lookup() const;
	void grow();
	int findName(char* aName) const;


private:
	int m_currentNumber;
	int m_maxNumber;
	Contact* m_contacts;

};
