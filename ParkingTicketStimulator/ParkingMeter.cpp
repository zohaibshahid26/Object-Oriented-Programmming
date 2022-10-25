#include"ParkingMeter.h"
#include<iostream>
using namespace std;

ParkingMeter::ParkingMeter(int minutesPurchased)
{
	this->minutesPurchased = minutesPurchased;
}
void ParkingMeter::setMinutesPurchased(int minutesPurchased)
{
	this->minutesPurchased = minutesPurchased;
}
int ParkingMeter::getMinutesPurchased() const
{
	return minutesPurchased;
}