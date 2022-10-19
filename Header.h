#include<iostream>
using namespace std;

class Employee
{
protected:
	int salary;
public:
	Employee(int s = 0)
	{
		salary = s;
	}
	virtual int getsalary()
	{
		return salary;
	}
	virtual int getvacation()
	{
		return 0;
	}
	virtual int getinsurance()
	{
		return 0;
	}
};
class Professional :public Employee
{
protected:
	int days;
public:
	Professional(int d = 0) :Employee(5000)
	{
		days = d;
	}
	int getvacation()
	{
		return days;
	}
};
class Nonprofessional :public Employee
{
protected:
	int hours;
public:
	Nonprofessional(int h = 0) :Employee(25)
	{
		hours = h;
	}
	int getvacation()
	{
		return hours / 8;
	}
	int getinsurance()
	{
		return 50;
	}
};