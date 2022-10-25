#include"ParkedCar.h"
#include<string>
using namespace std;

ParkedCar::ParkedCar(string make, string model, string color, string licenseNumber, int minutesParked)
{
	this->make = make;
	this->model = model;
	this->color = color;
	this->licenseNumber = licenseNumber;
	this->minutesParked = minutesParked;
}
ParkedCar::ParkedCar()
{
	make = "";
	model = "";
	color = "";
	licenseNumber = "";
	minutesParked = 0;
}
string ParkedCar::getModel()
{
	return model;
}
string ParkedCar::getMake()
{
	return make;
}
string ParkedCar::getColor()
{
	return color;
}
string ParkedCar::getLicenseNo()
{
	return licenseNumber;
}
int ParkedCar::getNoOfMinutesParked()
{
	return minutesParked;
}
void ParkedCar::setModel(int model)
{
	this->model = model;
}
void ParkedCar::setMake(string make)
{
	this->make = make;
}
void ParkedCar::setColor(string color)
{
	this->color = color;
}
void ParkedCar::setLicenseNo(int licenseNo)
{
	this->licenseNumber = licenseNo;
}
void ParkedCar::setNoOfMinutesParked(int noOfMinutesParked)
{
	this->minutesParked = noOfMinutesParked;
}