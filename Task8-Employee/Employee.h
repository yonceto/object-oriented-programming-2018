#pragma once
using namespace std;
enum Department
{
	None,
	Sales,
	Branding,
	Marketing,
	Management,
};


class Employee
{
public:
	Employee();
	Employee(const Employee& e);
	Employee(char* personalNum, char* name, char* adress, int salary, Department d);
	Employee& operator=(const Employee& e);
	~Employee();

//private:
	char* m_personalNum;
	char* m_name;
	char* m_adress;
	int m_salary;
	Department m_department;
};
