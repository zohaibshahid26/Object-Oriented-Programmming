#include<iostream>
using namespace std;

class MobilePhone   //class Mobile Phone
{
private:
	int mfgID;
	string mfgDate;
	string mfgName;
	bool State;
public:
	
	MobilePhone()
	{
		cout << "Phone is manufatured....!" << endl;
		mfgID = 0;
		mfgDate = "";
		State = false;
	}
	MobilePhone(int id, string date,string name)
	{
		cout << "Phone is manufacture....!" << endl;
		mfgID = id;
		mfgDate = date;
		State = false;
		mfgName = name;
	}
	void set_mfgID(int id)
	{
		mfgID = id;
	}
	
	void set_mfgName(string name)
	{
		mfgName = name;
	}
	void set_mfgDate(string date)
	{
		mfgDate = date;
	}
	int get_mfgID() const
	{
		return mfgID;
	}
	string get_mfgDate() const
	{
		return mfgDate;
	}
	string get_mfgname() const
	{
		return mfgName;
	}
	
	bool turnOn() 
	{
		State = true;
		cout << "Phone is turned on:" << endl;
		return State;
	}
	bool turnOff()
	{
		cout << "Phone is turned off" << endl;
		State = false;
		return State;
	}
	void setState(bool state)
	{
		State = state;
	}
	bool getState()
	{
		return State;
	}
		
	void makeVoiceCall(int num)
	{
		if (State == true)
		{
			cout << "Voice Call is being made to +92-" <<num<< endl;
		}
		else
		{
			cout << "Phone is off so cannot record call" << endl;
		}
	}
	void recordAudio()
	{
		if (State == true)
		{
			cout << "Start Speaking..! Audio is being recorded" << endl;
		}
		else
		{
			cout << "Phone is off so cannot record audio" << endl;
		}
	}
	void sendSMS(string msg, int num)
	{
		if (State == true)
		{
			cout << "Message: " << msg << " is being sent to +92-" << num << endl;
		}
		else
		{
			cout << "Phone is off so cannot send messages:" << endl;
		}
		
	}
	
	~MobilePhone()
	{
		cout << "Mobile Phone is being destroyed" << endl;
	}
	
};


class ApplePhone :public MobilePhone   //Apple Phone publically inherited from MobilePhone
{
private:
	string iosVersion;

public:
	ApplePhone()
	{
		cout << "Hello, Apple!" << endl;
	}
	ApplePhone(int id, string date, string name, string version) :MobilePhone(id, date, name)
	{
		iosVersion = version;
	}
	void set_iosVersion(string version)
	{
		iosVersion = version;
	}
	void launchSiri()
	{
		cout << "Talking to Siri: " << endl;
	}
	void launchPaper()
	{
		cout << "USing Paper App: " << endl;
	}
	string get_iosVersion() const
	{
		return iosVersion;
	}
	void  setApplePhone(int id, string date, string name)
	{
		set_mfgID(id);
		set_mfgDate(date);
		set_mfgName(name);
	}
	int get_mfgID() const
	{
		return get_mfgID();
	}
	string get_mfgDate() const
	{
		return  get_mfgDate();
	}
	string get_mfgname() const
	{
		return  get_mfgname();
	}

	~ApplePhone()
	{
		cout << "Apple Phone is being destroyed" << endl;
	}

};

class AndroidPhone : protected MobilePhone  //AndriodPhone protectedilly inherited from MobilePhone
{
private:
	string androidVersion;
	string kernelVersion;
public:
	AndroidPhone()
	{
		cout << "Hello, Android ! " << endl;
	}
	AndroidPhone(int id, string date, string name, string version, string kernel) :MobilePhone(id, date, name)
	{
		androidVersion = version;
		kernelVersion = kernel;
	}
	void set_androidVersion(string version)
	{
		androidVersion = version;
	}
	void set_kernelVersion(string kernel)
	{
		kernelVersion = kernel;
	}
	void launchSubwaySurfer()
	{
		if (getState() == true)
		{
			cout << "Playing Subway Surfer:   " << endl;
		}
		else
		{
			cout << "Phone is off so cannot play games" << endl;
		}
	}
	void launchFlynx()
	{
		if (getState() == true)
		{
			cout << "Using Flynx App:   " << endl;
		}
		else
		{
			cout << "Phone is off so cannot use apps" << endl;
		}
	}
	string get_androidVersion() const
	{
		return androidVersion;
	}
	string get_kernelVersion() const
	{
		return kernelVersion;
	}
	~AndroidPhone()
	{
		cout << "Android Phone is being destroyed" << endl;
	}
	void  setAndroidPhone(int id, string date, string name)
	{
		set_mfgID(id);
		set_mfgDate(date);
		set_mfgName(name);
	}
	int get_mfgID() const
	{
		return get_mfgID();
	}
	string get_mfgDate() const
	{
		return  get_mfgDate();
	}
	string get_mfgname() const
	{
		return  get_mfgname();
	}

	bool turnOn()
	{
		cout << "Phone is turned on:" << endl;
		setState(true);
		return getState();
	}
	bool turnOff()
	{
		cout << "Phone is turned off:" << endl;
		setState(false);
		return getState();
	}

	void makeVoiceCall(int num)
	{
		if ( getState() == true)
		{
			cout << "Voice Call is being made to +92-" << num << endl;
		}
		else
		{
			cout << "Phone is off so cannot record call" << endl;
		}
	}
	void recordAudio()
	{
		if (getState() == true)
		{
			cout << "Start Speaking..! Audio is being recorded" << endl;
		}
		else
		{
			cout << "Phone is off so cannot record audio" << endl;
		}
	}
	void sendSMS(string msg, int num)
	{
		if (getState() == true)
		{
			cout << "Message: " << msg << " is being sent to +92-" << num << endl;
		}
		else
		{
			cout << "Phone is off so cannot send messages:" << endl;
		}

	}
};


class WindowsPhone : private MobilePhone    //Windows protectedilly inherited from MobilePhone
{
private:
	string productName;
	string buildNumber;
public:
	WindowsPhone()
	{
		cout << "Hello, Windows ! " << endl;
	}
	WindowsPhone(int id, string date, string name, string product, string build) :MobilePhone(id, date, name)
	{
		productName = product;
		buildNumber = build;
	}
	void set_productName(string product)
	{
		productName = product;
	}
	void set_buildNumber(string build)
	{
		buildNumber = build;
	}
	string get_productName() const
	{
		return productName;
	}
	string get_buildNumber() const
	{
		return buildNumber;
	}
	
	void launchFoundBite()
	{
		if (getState() == true)
		{
			cout << "CHecking FoundBite NewsFeed:   " << endl;
		}
		else
		{
			cout << "Phone is off so cannot use FoundBite:" << endl;
		}
	}
	void launchXbox()
	{
		if (getState() == true)
		{
			cout << "Playing Xbox:   " << endl;
		}
		else
		{
			cout << "Phone is off so cannot play xbox:" << endl;
		}
	}
	void  setWindowsPhone(int id, string date, string name)
	{
		set_mfgID(id);
		set_mfgDate(date);
		set_mfgName(name);
	}
	int get_mfgID() const
	{
		return get_mfgID();
	}
	string get_mfgDate() const
	{
		return  get_mfgDate();
	}
	string get_mfgname() const
	{
		return  get_mfgname();
	}

	bool turnOn()
	{
		cout << "Phone is turned on:" << endl;
		setState(true);
		return getState();
	}
	bool turnOff()
	{
		cout << "Phone is turned off:" << endl;
		setState(false);
		return getState();
	}

	void makeVoiceCall(int num)
	{
		if (getState() == true)
		{
			cout << "Voice Call is being made to +92-" << num << endl;
		}
		else
		{
			cout << "Phone is off so cannot record call" << endl;
		}
	}
	void recordAudio()
	{
		if (getState() == true)
		{
			cout << "Start Speaking..! Audio is being recorded" << endl;
		}
		else
		{
			cout << "Phone is off so cannot record audio" << endl;
		}
	}
	void sendSMS(string msg, int num)
	{
		if (getState() == true)
		{
			cout << "Message: " << msg << " is being sent to +92-" << num << endl;
		}
		else
		{
			cout << "Phone is off so cannot send messages:" << endl;
		}

	}
	~WindowsPhone()
	{
		cout << "Windows Phone is being destroyed" << endl;
	}


};



int main()
{

	{
	ApplePhone iphone;
	iphone.set_mfgID(1);
	iphone.set_mfgDate("11/3/2022");
	iphone.set_mfgName("Apple");
	iphone.set_iosVersion("iOS 14");
	iphone.turnOn();
	iphone.launchSiri();
	iphone.launchPaper();
	iphone.makeVoiceCall(3057);
	iphone.recordAudio();
	iphone.turnOff();
	iphone.sendSMS("Hello, World?", 305);
	iphone.turnOn();
	iphone.makeVoiceCall(384);

	}
	cout << endl;
	cout << endl;
	
	{
	AndroidPhone samsung;
	samsung.setAndroidPhone(2, "11/3/2022", "Samsung");
	samsung.set_androidVersion("Android 10");
	samsung.set_kernelVersion("44");
	samsung.turnOn();
	samsung.turnOff();
	samsung.launchSubwaySurfer();
	samsung.launchFlynx();
	samsung.turnOn();
	samsung.makeVoiceCall(384);
	samsung.recordAudio();
	}

	cout << endl;
	cout << endl;
	
	WindowsPhone wp;
	wp.setWindowsPhone(3, "11/3/2022", "Microsoft");
	wp.set_productName("Windows Phone");
	wp.set_buildNumber("105860");
	wp.turnOn();
	wp.launchXbox();
	wp.sendSMS("Message not allowed in lab", 02323);
	wp.turnOff();
	wp.launchFoundBite();
	wp.turnOn();

}