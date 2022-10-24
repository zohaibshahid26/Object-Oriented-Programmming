#include<iostream>
using namespace std;
class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date();
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	void displayDate1()
	{
		cout << month << "/" << day << "/" << year;
	}
	void displayDate2()
	{
		if (month == 1)
		{
			cout << "January " << day << ", " << year;
		}

		else if (month == 2)
		{
			cout << "Feburary " << day << ", " << year;
		}
		else if (month == 3)
		{
			cout << "March" << day << ", " << year;

		}
		else if (month == 4)
		{
			cout << "April" << day << ", " << year;

		}
		else if (month == 5)
		{
			cout << "May" << day << ", " << year;

		}
		else if (month == 6)
		{
			cout << "June " << day << ", " << year;

		}
		else if (month == 7)
		{
			cout << "July " << day << ", " << year;
		}
		else if (month == 8)
		{
			cout << "August " << day << ", " << year;
		}
		else if (month == 9)
		{
			cout << "september " << day << ", " << year;
		}
		else if (month == 10)
		{
			cout << "October " << day << ", " << year;

		}
		else if (month == 11)
		{
			cout << "November " << day << ", " << year;

		}
		else if (month == 12)
		{
			cout << "December" << day << ", " << year;

		}

	}
	void displayDate3()
	{
		if (month == 1)
		{
			cout << day << " January " << year;
		}

		else if (month == 2)
		{
			cout << day << " Feburary " << year;
		}
		else if (month == 3)
		{
			cout << day << " March " << year;

		}
		else if (month == 4)
		{
			cout << day << " April " << year;

		}
		else if (month == 5)
		{
			cout << day << " May " << year;

		}
		else if (month == 6)
		{
			cout << day << " June " << year;

		}
		else if (month == 7)
		{
			cout << day << " July " << year;
		}
		else if (month == 8)
		{
			cout << day << " August " << year;
		}
		else if (month == 9)
		{
			cout << day << " September " << year;
		}
		else if (month == 10)
		{
			cout << day << " October " << year;

		}
		else if (month == 11)
		{
			cout << day << " November " << year;

		}
		else if (month == 12)
		{
			cout << day << " December " << year;

		}

	}
};
Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}
void Date::setMonth(int m)
{
	month = m;
}
void Date::setDay(int d)
{
	day = d;
}
void Date::setYear(int y)
{
	year = y;
}


int main()
{
	Date d1;
	int day, month, year;
	cout << "Enter the day" << endl;
	cin >> day;
	while (day < 1 || day>31)
	{
		cout << "Enter the valid date....." << endl;
		cin >> day;
	}
	cout << "Enter the month" << endl;
	cin >> month;
	while (month > 12 || month < 1)
	{
		cout << "Enter the Valid month" << endl;
		cin >> month;
	}
	cout << "Enter the year" << endl;
	cin >> year;
	d1.setDay(day);
	d1.setMonth(month);
	d1.setYear(year);
	cout << "The different formats of date are" << endl;

	d1.displayDate1();
	cout << endl;
	d1.displayDate2();
	cout << endl;
	d1.displayDate3();



}