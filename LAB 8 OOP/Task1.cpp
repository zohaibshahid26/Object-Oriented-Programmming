#include<iostream>
using namespace std;

//FEET INCHES CLASS
class FeetInches
{
	int feet;
	int inches;

public:
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
	}
	FeetInches(const FeetInches& obj)
	{
		feet = obj.feet;
		inches = obj.inches;
	}
	void setFeet(int val);
	void setInches(int);
	int getFeet() const;
	int getInches() const;
	FeetInches operator*(const FeetInches& a);

};
void FeetInches::setFeet(int val)
{
	feet = val;
}
void FeetInches::setInches(int val)
{
	inches = val;
}
int FeetInches::getFeet() const
{
	return feet;
}
int FeetInches::getInches() const
{
	return inches;
}
FeetInches FeetInches::operator*(const FeetInches& a)
{
	FeetInches temp(*this);
	temp.setFeet(this->getFeet() * a.getFeet());
	temp.setInches(this->getInches() * a.getInches());
	return temp;
}






//ROOM DIMENSION CLASS
class RoomDimension
{
	FeetInches length;
	FeetInches width;

public:

	RoomDimension()
	{
		length.setFeet(0);
		length.setInches(0);
		width.setFeet(0);
		width.setInches(0);
	}
	RoomDimension(const RoomDimension& a)
	{
		length.setFeet(a.length.getFeet());
		length.setInches(a.length.getInches());
		width.setFeet(a.width.getFeet());
		width.setInches(a.width.getInches());
	}

	RoomDimension(FeetInches l, FeetInches w) : length(l), width(w) {}
	void setRoom(FeetInches l, FeetInches w)
	{
		length = l;
		width = w;
	}

	FeetInches getArea();


};
FeetInches RoomDimension::getArea()
{
	FeetInches temp;
	temp = length * width;
	return temp;
}




//ROOM CARPET CLASS

class RoomCarpet
{
	RoomDimension room;
	float  cost_per_sqft;

public:

	RoomCarpet()
	{
		cost_per_sqft = 0;
	}
	RoomCarpet(const RoomCarpet& r)
	{
		cost_per_sqft = r.cost_per_sqft;
		room = r.room;
			
	}
	RoomCarpet(RoomDimension r, float c) : room(r), cost_per_sqft(c) {}
	void setRoomCarpet(RoomDimension r, float c)
	{
		room = r;
		cost_per_sqft = c;
	}

	float getTotalCost();
};
float RoomCarpet::getTotalCost()
{
	return room.getArea().getFeet() * cost_per_sqft;

}







int main()
{

	char choice;
	cout << "Enter A to see the carpeting cost of single room" << endl;
	cout << "Enter B to see the carpeting cost of full house" << endl;
	cin >> choice;
	while (choice != 'A' && choice != 'B')
	{
		cout << "Enter valid choice" << endl;
		cin >> choice;
	}
	if (choice == 'A')
	{
		int f, i;
		FeetInches length;
		FeetInches width;
		cout << "Enter the length of the room in feet and inches" << endl;
		cin >> f;
		cin.ignore();
		cin >> i;
		if (i >= 12)
		{
			f += i / 12;
			i = i % 12;
		}
		length.setFeet(f);
		length.setInches(i);
		cout << "Enter the width of the room in feet and inches " << endl;
		cin >> f;
		cin.ignore();
		cin >> i;
		if (f >= 12)
		{
			f += i / 12;
			i = i % 12;
		}
		width.setFeet(f);
		width.setInches(i);
		RoomDimension rd(length, width);
		float cost;
		cout << "Enter the carpeting Cost" << endl;
		cin >> cost;
		RoomCarpet room(rd, cost);
		cout << "The total cost of room: " << room.getTotalCost();
	}


	
		float sum = 0;
	if (choice == 'B')
	{
		int rooms;
		cout << "Enter rooms" << endl;
		cin >> rooms;
		RoomCarpet* room = new RoomCarpet[rooms];
		RoomDimension* rd = new RoomDimension[rooms];
		FeetInches* length = new FeetInches[rooms];
		FeetInches* width = new FeetInches[rooms];
		float* cost = new float[rooms];
		for (int i = 0; i < rooms; i++)
		{
			
			int f = 0, in = 0;
			cout << "Enter the length of the room  " << i + 1<< " in feet and inches" << endl;
			cin >> f;
			cin.ignore();
			cin >> in;
			length[i].setFeet(f);
			length[i].setInches(in);
			cout << "Enter the width of the room " << i + 1 << "in feet and inche s " << endl;
			cin >> f;
			cin.ignore();
			cin >> in;
			width[i].setFeet(f);
			width[i].setInches(in);
			rd[i].setRoom(length[i], width[i]);
			
			cout << "Enter the carpeting Cost of room :" << i + 1 << endl;
			cin >> cost[i];
			room[i].setRoomCarpet(rd[i], cost[i]);
			sum += room[i].getTotalCost();


		}
		cout << "The total Cost of All rooms are: ";
		cout << sum;
		delete[]cost;
		delete[]width;
		delete[]length;
		delete[]rd;
		delete[]room;
		

	}

}