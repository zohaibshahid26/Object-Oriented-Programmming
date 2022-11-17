//write a class person which acts as a base class and the Student class is derived from the base class.
//A person has a 
//-name
//-age

//while a student has courses array which holds the record of all the coursses a student is enrolled.
// -students roll no;
// student cgpa;
//

#include<iostream>
#include<string>
using namespace std;
class Person
{
	int age;
	string name;
public:
	void setName(string n)
	{
		name = n;
	}
	void setAge(int g)
	{
		age = g;
	}
	string getName() const
	{
		return name;
	}

	int getAge() const
	{
		return age;
	}

    virtual ~Person()
	{
		cout << "Destructor of Person Called" << endl;
	}
	Person()
	{
		age = 0;
		name = " ";

	}
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
	virtual void setRollno(string r) 
	{
	}
	virtual void setCgpa(double cgpa)
	{
	}
	virtual void SetCourses(string* c, int courses)
	{
	}
	virtual void displayStudent(int c)
	{
		
	}


};
class Student : public Person
{
	string* Courses;
	string rollNo;
	double cgpa;
 public:
	 void setRollno(string r)
	 {
		 rollNo = r;
	 }
	 void setCgpa(double cgpa)
	 {
		 this->cgpa = cgpa;
	 }
	 void SetCourses(string* c, int courses)
	 {
		 Courses = new string[courses];
		 for (int i = 0; i < courses; i++)
		 {
			 Courses[i] = c[i];
		 }
	 }
	 void displayStudent(int c)
	 {
		 cout << "The Student is:" << endl;
		 cout << "Name: " << getName() << endl;
		 cout << "RollNo: " << rollNo << endl;
		 cout << "CGPA:  " << cgpa <<endl;
		 cout<<"Student has following courses: " << endl;
		 for (int i = 0; i < c; i++)
		 {
			 cout << Courses[i] << endl;
		 }
	 }
     
	 Student()
	 {
		 rollNo = "";
		 cgpa = 0;
		 Courses=nullptr;
	 }
	 ~Student()
	 {
		 cout << "Destructor of Student Called" << endl;
		 delete[]Courses;
		 Courses = nullptr;
	 }


};
int main()
{
	cout << "ENter Student Data: " << endl;
	
	string name, rollno;
	int age;
	string* courses;
	int noOfCourses;
	double cgpa;
	Person* p;
	p = new Student;



	cout << "Enter the name of the Student" << endl;
	getline(cin, name);
	cout << "Enter the RollNo of the Student" << endl;
	getline(cin, rollno);
	p->setRollno(rollno);
	cout << "Enter the  of age  the Student" << endl;
	cin >> age;
	while (age<0 || age>150)
	{
		cout << "Enter valid Age" << endl;
		cin >> age;
	}
	p->setName(name);


	cout << "Enter the no Of COurses of Student" << endl;
	cin >> noOfCourses;
	while (noOfCourses < 0)
	{
		cout << "Enter Valid COurses..!" << endl;
		cin >> noOfCourses;
	}
	courses = new string[noOfCourses];
	for (int i = 0; i < noOfCourses; i++)
	{
		cout << "Enter the name of the course " << i + 1 << endl;
		cin >> courses[i];
	}

	cout << "Enter the cgpa of the Student" << endl;
	cin >> cgpa;
	while (cgpa < 0.0 || cgpa>4.00)
	{
		cout << "Enter Valid Cgpa" << endl;
		cin >> cgpa;
	}
	p->setCgpa(cgpa);
	p->SetCourses(courses, noOfCourses);
	p->displayStudent(noOfCourses);
	delete p;
	return 0;

}
