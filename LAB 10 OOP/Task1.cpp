#include<iostream>
using namespace std;
class Date
{
	int day;
	int month;
	int year;
public:
	Date(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
		if (year < 0 || month < 0 || year < 0)
		{
			cout << "Invalid date" << endl;
			exit(1);
		}
	}
	void print()
	{
		cout << day << "/" << month << "/" << year << " ";
	}
	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
	}
	int getDay()
	{
		return day;
	}
	



};
class Time
{
	int hour;
	int minute;
	int second;
public:
	Time(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
		if (s >= 59)
		{
			minute++;
			second = 0;
		}
		if (m >= 59)
		{
			hour++;
			minute = 0;
		}
		if (h >= 23)
		{
			hour = hour%24;
		}
		
	}
	void print()
	{
		cout << hour << ":" << minute << ":" << second << endl;
	}
	int getHour()
	{
		return hour;
	}
	int getMinute()
	{
		return minute;
	}
	int getSecond()
	{
		return second;
	}
};

class DateTime : public Date, public Time
{
public:
	DateTime(int d, int m, int y, int h, int min, int s) : Date(d, m, y), Time(h, min, s)
	{
	}
	void printDateTime()
	{
		Date::print();
		Time::print();
	}
};

int main()
{
	DateTime dt(12, 12, 2012, 12, 12, 12);
	dt.printDateTime();
	return 0;
}