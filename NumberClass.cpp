#include<iostream>
using namespace std;
class Numbers
{
private:
	float* num;
public:
	Numbers()
	{
		num = new int;
		num = nullptr;
	};
	Numbers(int size)
	{
		num = new float[size];
	}
	~Numbers()
	{
		delete[]num;
		num = nullptr;
	}
	float getHighest(int size)
	{
		float highest = num[0];
		for (int i = 0;i < size;i++)
		{
			if (highest < num[i])
			{
				highest = num[i];
			}
		}
		return highest;

	}
	float getAverage(int size)
	{ 
		float average = 0;
		for (int i = 0;i < size;i++)
		{
			average += num[i];
		}

		return average / size;

	}

     float getLowest(int size)
	 {
			float lowest = num[0];
			for (int i = 0;i < size;i++)
			{
				if (lowest > num[i])
				{
					lowest = num[i];
				}
			}
			return lowest;
     }
      void setNumber(float a,int index)
      {
		  num[index] = a;

	  }
	  float getNumber(int index) const
	  {
		  return num[index];
	  }
};
int main()
{
	int size;
	cout << "Enter the size of the array of numbers" << endl;
	cin >> size;
	Numbers n1(size);
	float temp1;

	cout << "Enter the numbers in array" << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> temp1;
		n1.setNumber(temp1, i);
		
	}
	cout << "You have enteed the following array" << endl;
	for (int i = 0;i < size;i++)
	{
		cout << n1.getNumber(i) << " ";
	}
	cout << endl;
	cout << "The Highest Value in Array :" << n1.getHighest(size) << endl;
	cout << "The Lowest value in Array :" << n1.getLowest(size) << endl;
	cout << "The average of all the numbers stored in array" << n1.getAverage(size) << endl;

	return 0;

}