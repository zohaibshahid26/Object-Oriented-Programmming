#include<iostream>
#include"time.h"
using namespace std;
int main()
{
	Time t1;
	int second, min, hr;
	cout << "Enter the hour" << endl;
	cin >> hr;
	while (hr < 0)
	{
		cout << "Enter valid hour" << endl;
		cin >> hr;
	}
	t1.setHr(hr);
	cout << "Enter the min" << endl;
	cin >> min;
	while (min > 60 && min < 0)
	{
		cout << "Enter valid min" << endl;
		cin >> min;
	}
	t1.setMin(min);

	cout << "Enter the second" << endl;
	cin >> second;
	while (second > 60 || second < 0)
	{
		cout << "Enter valid seconds" << endl;
		cin >> second;
	}
	t1.setSec(second);

	t1.advance(2,20,10);
	t1.print();
	cout<<endl;
	t1.reset(2,20,10);
	t1.print();

}
