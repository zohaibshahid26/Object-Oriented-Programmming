#pragma once
#include <string>
using namespace std;
class ParkedCar
{
	string model;
	string make;
	string color;
	string licenseNumber;
	int minutesParked;
public:
	ParkedCar();
	ParkedCar(string make, string model, string color, string licenseNumber, int minutesParked);
	string getModel();
	string getMake();
	string getColor();
	string getLicenseNo();
	int getNoOfMinutesParked();
	void setModel(int model);
	void setMake(string make);
	void setColor(string color);
	void setLicenseNo(int licenseNo);
	void setNoOfMinutesParked(int noOfMinutesParked);
};

	
