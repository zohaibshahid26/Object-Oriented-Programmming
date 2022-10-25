#pragma once
class ParkingMeter
{
	int minutesPurchased;
public:
	ParkingMeter(int minutesPurchased);
	int getMinutesPurchased() const;
	void setMinutesPurchased(int minutesPurchased);

};