#include<iostream>
#include<string>
using namespace std;
class Test
{
	int* p;
public:
	const Test& operator=(const Test& a)
	{
		if (this == &a)
		{
			return *this;
		}
		else
		{
			if (p != nullptr)
			{
				delete p;
				p = nullptr;
			}
			p = new int;
			*p = *(a.p);
			return *this;
		}
	}
};
class Point
{
	int x;

public:
	Point()
	{
		x = 0;
	}
	Point(int a)
	{
		x = a;
	}
	void display()
	{
		cout << x;
	}
	Point operator+(const Point& a) const
	{
		Point temp;
		temp.x = x + a.x;
		return temp;
	}
	Point& operator+=(const Point& a)
	{
		this->x += a.x;
		return *this;
	}
	Point operator-(const Point& a) const
	{
		Point sum;
		sum.x = x - a.x;
		return sum;
	}
	Point & operator-=(const Point& a)
	{
		x = x-a.x;
		return *this;
	}
	Point operator+(int val)
	{
		Point sum;
		sum.x += val;
		return sum;
	}
	Point& operator+=(int val)
	{
		this->x += val;
		return *this;
	}
	bool operator==(Point& rhs)
	{
		if (x == rhs.x)
		{
			return true;
		}
		else
			return false;
	}
	bool operator!=(Point& rhs)
	{
		if (*this== rhs)
		{
			return false;
		}
		else
			return true;
	}
	Point &operator++()
	{
		x++;
		return *this;

	}
	Point operator++(int)
	{
		Point temp = *this;
		x++;
		return temp;

	}
	Point &operator--()
	{
		x--;
		return *this;

	}
	Point operator--(int)
	{
		Point temp = *this;
		x--;
		return temp;

	}
	//Function-call operator adding integer to current object;the only operator for which you can provide m
	// multiple implemenaation
	//This is 
	Point & operator()(int a)
	{
		this->x += a;
		return *this;
		
	}
	friend Point operator+ (int val, const Point& a);
	friend ostream& operator<<(ostream& o, const Point& a);
	friend istream& operator>>(istream& i, Point& a);

    const Point & operator=(const Point& rhs)
	{
		x = rhs.x;
		return *this;
	}
	
	int& operator[](int a)
	{
		if (a == 'x')
		{
			return x;
		}
	}
	bool operator<(const Point rhs)
	{
		if (this->x < rhs.x)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//COnversion constructor that takes one parameter;
	//Conversion Operators from udt to pre dt;
	 operator int() const
	{
		 return x;
	}
	 operator string ()const
	 {
		 string str;
		 str = "(";
		 str += to_string(x);
		 str += ")";
		 return str;
	 }
	
	


};
//End of class
Point operator+ (int val, const Point & a)
{
	Point sum;
	sum.x = val + a.x;
	return sum;

}
ostream &operator<<(ostream& o, const Point& a)
{
	o << " (" << a.x << ")";
	return o;
}
 istream & operator>>(istream &i, Point& a)
{
	 i >> a.x;
	 return i;

}


int main()
{
	Point p1(5);
	Point p2(6);
	Point p3 = p1;
	p3.display();


	cout << endl;
	p1 += p3 += p2;
	p1 += 10;
	p1.display();
	p1 = 10 + p2;
	Point p4;
	p4 = p3 = p1;
	if (p1 == p2)
	{
		cout << "Both are same" << endl;
	}
	else
	{
		cout << "Not same" << endl;
	}
	
	Point p5, p6;
	cin >> p5 >> p6;
	cout << p5 << p6;
	if (p3 < p4)
	{
		cout << "P3 is greator" << endl;
	}
	else
	{
		cout << "P4 is greator" << endl;
	}
	p5['x'] = 10;
	Point p7 = p3(20);
	cout << p7;
	int val = p1;
	cout << val;
	cout << endl;
	string str = p2;
	cout << str;





}