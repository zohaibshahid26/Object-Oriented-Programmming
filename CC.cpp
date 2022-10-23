#include<iostream>
using namespace std;

class Widget
{
private:
	int a;
public:
	Widget()
	{
		a = 0;
		cout << "Default Constructor Called..." << this << endl;
	}
	Widget(int a)
	{
		this->a = a;
	}
	Widget(const Widget& x)
	{
		cout << "Copy Constructor called...." << this << endl;
		this->a = x.a;
	}
	~Widget()
	{
		cout << "Destructor Called" << this << endl;
	}
};

Widget f(Widget  u)
{
	
	Widget v(u);
	Widget w = v;
	return w;
}
int main()
{
	Widget x;
	Widget y=f(f(x));
}