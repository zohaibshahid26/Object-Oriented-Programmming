#pragma once
class Time
{
private:
	int sec;
	int min;
	int hr;
public:
	Time();
	Time(int, int, int);
	Time(Time&);
	void advance(int s,int m,int  h);
	void reset(int s, int m, int  h);
	void setSec(int);
	int getSec();
	void setMin(int);
	int getMin();
	void setHr(int);
	int getHr();
	void print();
};