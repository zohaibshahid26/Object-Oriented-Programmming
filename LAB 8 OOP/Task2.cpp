#include<iostream>
using namespace std;

class Location //Location CLass
{
	int x;
	int y;


public:
	Location()
	{
		x = 0; y = 0;
	}
	Location(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	int getX() const
	{
		return x;
	}
	int getY() const
	{
		return y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	~Location()
	{}
};



class Player   //Player Class
{
private:
	string name;
	int id;
	Location l;

public:
	Player() :l()
	{
		name = "";
		id = 0;
	}
	Player(string name, int id, int x, int y)
	{
		setLocation(x, y);
		this->name = name;
		this->id = id;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setId(int id)
	{
		this->id = id;
	}
	void setLocation(int x, int y)
	{
		l.setX(x);
		l.setY(y);

	}
	string getName() const
	{
		return name;
	}
	int getId() const
	{
		return id;
	}
	int getLoctionX() const
	{
		return l.getX();
	}
	int getLocationY() const
	{
		return l.getY();
	}

};

int main()
{
	Player p("Ali", 145, 2, 3);
	cout << "Name: "<< p.getName() << endl;
	cout << "Id: " <<  p.getId() << endl; 
	cout << "Location :"<< endl;
	cout << "X-Cordinate: "<<p.getLoctionX() << endl;
	cout << "Y-Cordinate: "<<p.getLocationY() << endl;
	return 0;
}