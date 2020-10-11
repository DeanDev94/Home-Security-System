/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#pragma once
#include "Subject.h"
#include "Observer.h"
#include "ConcreteSubject.h"
#include "SensorInfo.h"
#include <string>

using namespace std;

class HomeOwner:public IObserver	//Inherits from IObserver
{
	SensorInfo currentSensorStatus;	//holds the current state of the sensors
	string myName,myEmail,myPhoneNumber;//holds the personal information of the Homeowner
	HouseSecurity *house;				//pointer to the HouseSecurity in the system
public:
	void Update();	//Override IObserver Update. Called from Notify function, in the HouseSecurity class
	HomeOwner(HouseSecurity *obj, string name,string email, string number);//Calls HomeOwner Constructor.
};																			//Allows creating a pointer to a HouseSecurity object

class Keyholder :public IObserver
{
	SensorInfo currentSensorStatus;	//holds the current state of the sensors
	string myName, myEmail, myPhoneNumber;	//holds the personal information of the Homeowner
	HouseSecurity* house;	//pointer to the HouseSecurity in the system
public:
	void Update();	//Override IObserver Update. Called from Notify function, in the HouseSecurity class
	Keyholder(HouseSecurity* obj, string name, string email, string number);//allows creating a pointer to a HouseSecurity object
};