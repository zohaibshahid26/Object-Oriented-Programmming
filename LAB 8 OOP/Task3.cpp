#include<iostream>
using namespace std;
class Professor
{
private:
	string name;
	string designation;
	int extensionNo;
public:
	Professor()
	{
		name = " ";
		designation = " ";
		extensionNo = 0;
	}
	Professor(string n, string d, int e)
	{
		name = n;
		designation = d;
		extensionNo = e;
	}
	void setName(string n)
	{
		name = n;
	}
	void setDesignation(string d)
	{
		designation = d;
	}
	void setExtensionNo(int e)
	{
		extensionNo = e;
	}
	string getName()
	{
		return name;
	}
	string getDesignation()
	{
		return designation;
	}
	int getExtensionNo()
	{
		return extensionNo;
	}
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Designation: " << designation << endl;
		cout << "Extension No: " << extensionNo << endl;
	}
};
	


class SEFaculty
{
	int NoOfSEFaculty;
	Professor* Faculty;
public:
	SEFaculty(int n,Professor* p)
	{
		NoOfSEFaculty = n;
		Faculty = p;
	}
	void displayFacultyMembers()
	{
		for (int i = 0; i < NoOfSEFaculty; i++)
		{
			Faculty[i].display();
		}
	}
};
int main()
{
	int num;
	string name;
	string designation;
	int extensionNo;
	cout << "Enter the no of the professors in SE deoartment" << endl;
	cin >> num;
	Professor* p = new Professor[num];
	cout << "Enter the details of the professors" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter the name of the professor " << endl;
		cin >> name;
		cout << "Enter the designation of the professor " << endl;
		cin >> designation;
		cout << "Enter the extension no of the professor " << endl;
		cin >> extensionNo;
		p[i].setName(name);
		p[i].setDesignation(designation);
		p[i].setExtensionNo(extensionNo);
	}
	SEFaculty faculty(num, p);
	faculty.displayFacultyMembers();




}