#include<iostream>
#include<string>
using namespace std;
class shippingContainer
{
protected:
	int ID;
public:
	shippingContainer()
	{
		ID = 0;
	}
	shippingContainer(int id)
	{
		ID = id;
	}
	void print()
	{
		cout << "ID: " << ID << endl;
	}
	int getID()
	{
		return ID;
	}
	void setID(int id)
	{
		ID = id;
	}
};
class ManualShippingContainer : public shippingContainer

{
private:
	string manifest;
public:
	ManualShippingContainer()
	{
		manifest = "";
	}
	ManualShippingContainer(int id, string m) : shippingContainer(id)
	{
		manifest = m;
	}
	void print()
	{
		shippingContainer::print();
		cout << "Manifest: " << manifest << endl;
	}
	string getManifest()
	{
		return manifest;
	}
	void setManifest(string m)
	{
		manifest = m;
	}
};

class RFIDshippingcontainer : public shippingContainer
{
	string *RFID;
	int size;
	int *quantity;
	string manifest;
	void resizeRFID()
	{
		size++;
		string* temp = new string[size];
			for (int i = 0; i < size - 1; i++)
			{
				temp[i] = RFID[i];
			}
		delete[] RFID;
		RFID = temp;
	}
	void resizeQuantity()
	{
		int* temp = new int[size];
		for (int i = 0; i < size - 1; i++)
		{
			temp[i] = quantity[i];
		}
		delete[] quantity;
		quantity = temp;
	}
public:

 RFIDshippingcontainer()
 {
	 quantity = NULL;
	 RFID = NULL;
	 size = 0;
 }
  RFIDshippingcontainer(int id, string* r, int s) : shippingContainer(id)
  {
	 size = s;
	 RFID = new string[size];
	 for (int i = 0; i < size; i++)
	 {
		 RFID[i] = r[i];
	 }
  }

  void add(string r)
  {   
	  for (int i = 0; i < size; i++)
	  {
		  if (RFID[i] == r)
		  {
			  quantity[i]++;
			  return;
		  }
	  }
	
	  resizeRFID();
	  resizeQuantity();
	  RFID[size-1] = r;
	  quantity[size-1] = 1;
  }

  string getManifest()
  {
	  string m = " ";
	  for (int i = 0; i < size; i++)
	  {
		   m=m + to_string(quantity[i]) +" " + RFID[i] + ". ";
	  }
	  return m;
	
  }

};

int main()
{
	cout << "Manual Shipping Container" << endl;
	ManualShippingContainer manual[3];
	manual[0].setID(234);
	manual[0].setManifest("Two crates of Apple");
	manual[1].setID(345);
	manual[1].setManifest("Two crates of Orange");
	manual[2].setID(957);
	manual[2].setManifest("Two crates of Mango");
	manual[0].print();
	manual[1].print();
	manual[2].print();
	cout << endl;

	cout << "RFID Shipping Container" << endl;
	RFIDshippingcontainer rfid;
	rfid.add("crate of pear");
	rfid.add("crate of mango");
	rfid.add("crate of mango");
	rfid.add("crate of pear");
	rfid.add("crate of apple");
	rfid.add("crate of peach");
	rfid.add("crate of apple");
	rfid.add("crate of apple");
	rfid.add("crate of orange");
	cout<<rfid.getManifest();
s


}
