#include<iostream>
using namespace std;
class Employee
{
protected:
	string name;
	string ssn;
	double net_pay;
public:
	Employee()
	{
		name = "";
		ssn = "";
		net_pay = 0;
	}
	Employee(string n, string s, double p)
	{
		name = n;
		ssn = s;
		net_pay = p;
	}
	void printCheck()
	{
		cout << "Name: " << name << endl;
		cout << "SSN: " << ssn << endl;
		cout << "Net Pay: " << net_pay << endl;
	}
	string getName() const
	{
		return name;
	}
	string getSSN() const
	{
		return ssn;
	}
	double getNetPay() const
	{
		return net_pay;
	}
	void setName(string n)
	{
		name = n;
	}
	void setSSN(string s)
	{
		ssn = s;
	}
	void setNetPay(double p)
	{
		net_pay = p;
	}
};
class SalariedEmployee : public Employee
{
protected:
	double salary;//weekly
public:
	SalariedEmployee()
	{
		salary = 0;
	}
	SalariedEmployee(string n, string s, double p, double sal) : Employee(n, s, p)
	{
		salary = sal;
	}
	void printCheck()
	{
		Employee::printCheck();
		cout << "Salary: " << salary << endl;
	}
	double getSalary() const
	{
		return salary;
	}
	void setSalary(double sal)
	{
		salary = sal;
	}
};
class Administrator : public SalariedEmployee
{
	string title;
	string area;
	string supervisor;

public:
	Administrator()
	{
		title = " ";
		area = " ";
		supervisor = " ";
	}
	Administrator(string n, string s, double p, double sal, string t, string a, string su) : SalariedEmployee(n, s, p, sal)
	{
		title = t;
		area = a;
		supervisor = su;
	}
	void set_supervoiser(string supervoiser)
	{
		this->supervisor = supervoiser;
	}
	void setSupervoiserData(string supervoiser, string title, string area, double salary)
	{
		this->supervisor = supervisor;
		this->title = title;
		this->area = area;
		this->salary = salary;
	}
	void print()
	{
		cout << "Administrator Name:" << name << endl;
		cout << "Administrator SSN : " << ssn << endl;
		cout << "Administrator Net Pay : " << net_pay << endl;
		cout << "Administrator Salary : " << salary << endl;
		cout << "Supervisor Name: " << supervisor << endl;
		cout << "Supervisor Title: " << title << endl;
		cout << "Supervisor Area: " << area << endl;
		cout << "Supervisor Salary: " << salary << endl;
	}
	void printCheck()
	{

		SalariedEmployee::printCheck();

	}
};

int main()
{
	Administrator a1("Ahmed", "123456789", 120.78, 2000.56, "Manager", "IT", "Ali");
	cout << "Administrator and his/her Supervoiser Details" << endl;
	a1.print();
	cout << endl;
	cout << "Cheque: " << endl;
	a1.printCheck();
	return 0;
}