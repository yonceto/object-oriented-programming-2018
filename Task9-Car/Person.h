#pragma once
class Person
{
public:
	Person();
	Person(char* name, char* num, char* phone);
	Person(const Person&);//copy конструктор
	Person& operator=(const Person&); // оператор =
	~Person();

	char* getName() const;
	void setName(char* name);
	char* getPersonalNum() const;
	void setPersonalNum(char* num);
	char* getPhone() const;
	void setPhone(char* phone);



private:
	char* m_name;
	char* m_personalNum;
	char* m_phone;
};