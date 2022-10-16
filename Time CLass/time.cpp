#include<iostream>
using namespace std;
#include"time.h"

Time::Time()
{
	sec = 0;
	min = 0;
	hr = 0;

}
Time::Time(int s, int m, int h)
{
	sec = s;
	min = m;
	hr = h;
}
Time::Time(Time& t)
{
	this->sec = t.sec;
	this->min = t.min;
	this->hr = t.hr;
}
void Time::advance(int h, int m, int  s)
{
	this->sec += s;
	this->min += m;
	this->hr += h;
	if (sec > 59)
	{
		sec = sec - 60;
		min++;
	}
	if (min > 59)
	{
		min = min - 60;
		hr++;
	}
	if (hr > 23)
	{
		hr = hr % 24;
	}

}
void Time::reset(int h, int m, int  s)
{
	sec = s;
	min = m;
	hr = h;
}
void Time::setSec(int s)
{
	sec = s;
}
int Time::getSec()
{
	return sec;
}
void Time::setMin(int m)
{
	min = m;
}
int Time::getMin()
{
	return min;
}
void Time::setHr(int h)
{
	hr = h;
}
int Time::getHr()
{
	return hr;
}
void Time::print()
{
	cout << hr << ":" << min << ":" << sec;
}