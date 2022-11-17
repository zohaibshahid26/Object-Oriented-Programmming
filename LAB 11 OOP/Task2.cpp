#include<iostream>
#include<string>
using namespace std;
class Ship  //Ship Class
{
	string name;
	string year;

public:
	Ship()
	{
		name = " ";
		year = " ";
	}
	Ship(string name, string year) : name(name), year(year)
	{
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setYear(string year)
	{
		this->year = year;
	}
	string getName() const
	{
		return name;
	}
	string getYear() const
	{
		return year;
	}
	virtual void print()
	{
		cout << "Ship's name: " << name;
		cout << "Ship's Built  Year: " << year;
	}
	virtual ~Ship()
	{

	}
};


class CruiseShip : public Ship  //Cruise Ship Class
{
	int maxPassengers;
public:
	CruiseShip() :maxPassengers(0)
	{

	}
	CruiseShip(int max) :maxPassengers(max) {}
	void setMaxPassengers(int max)
	{
		maxPassengers = max;
	}
	int getMaxPassengers() const
	{
		return maxPassengers;
	}
	virtual void print()
	{
		cout << "Ships's Name: " << getName() << endl;
		cout << "Max Number of Passengers: " << maxPassengers << endl;
	}
	~CruiseShip()
	{
	}


};


class CargoShip : public Ship //CargoShip Class
{
	int capacity;
public:
	CargoShip() :capacity(0)
	{

	}
	CargoShip(int max) :capacity(max) {}
	void setcapacity(int c)
	{
		capacity = c;
	}
	int getcapacity() const
	{
		return capacity;
	}
	 void print()
	{
		cout << "Ships's Name: " << getName() << endl;
		cout << "Cargo Capacity: " << capacity << endl;
	}
	~CargoShip()
	{	}

};


class BattleShip : public Ship //BattleShip Class
{
	int noOfmissiles;
public:
	BattleShip(): noOfmissiles(0)
	{

	}
	BattleShip(int m) :noOfmissiles(m) {}
	void setnoOfmissiles(int m)
	{
		noOfmissiles = m;
	}
	int getnoOfmissiles() const
	{
		return noOfmissiles;
	}
	virtual void print()
	{
		cout << "Ships's Name: " << getName() << endl;
		cout << "No Of missiles: " << noOfmissiles << endl;
	}
	~BattleShip()
	{	}

};
int main()
{
	Ship** ships = new Ship * [3];

	int missiles;
	int MaxPassengers;
	int capacity;
	string name;
	string year;
	cout << "Enter the Max Passengers in a CruiseShip" << endl;
	cin >> MaxPassengers;
	while (MaxPassengers <= 0)
	{
		cout << "Passengers must be greater than zero..!" << endl;
		cin >> MaxPassengers;
	}
	cout << "Enter the Capacity of a CargoShip in tons" << endl;
	cin >> capacity;
	while (capacity <= 0)
	{
		cout << "Capacity must be greater than zero..!" << endl;
		cin >> MaxPassengers;
	}
	cout << "Enter the No of Missilies in a BattleShip" << endl;
	cin >> missiles;
	while (missiles <= 0)
	{
		cout << "Missiles must be greater than zero..!" << endl;
		cin >> missiles;
	}


	ships[0] = new CruiseShip(MaxPassengers);
	ships[1] = new CargoShip(capacity);
	ships[2] = new BattleShip(missiles);

	cin.ignore();
	cout << "Enter the name of the CruiseShip: " << endl;
	getline(cin, name);
	ships[0]->setName(name);
	cout << "Enter the Manfacturing year of the CruiseShip: " << endl;
	cin >> year;
	ships[0]->setYear(year);

	cout << "Enter the name of the CargoShip: " << endl;
	cin.ignore();
	getline(cin, name);
	ships[1]->setName(name);
	cout << "Enter the Manfacturing year of the CruiseShip: " << endl;
	cin >> year;
	ships[1]->setYear(year);
	cin.ignore();


	cout << "Enter the name of the BattleShip: " << endl;
	getline(cin, name);
	ships[2]->setName(name);
	cout << "Enter the Manfacturing year of the CruiseShip: " << endl;
	cin >> year;
	ships[2]->setYear(year);
	cout << endl;
	ships[0]->print();
	cout << endl;
	ships[1]->print();
	cout << endl;
	ships[2]->print();
	for (int i = 0; i < 3; i++)
	{
		delete[]ships[i];
		ships[i] = nullptr;

  }
	return 0;
}