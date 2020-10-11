/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include "Subject.h"
#include "Observer.h"
#include "SensorInfo.h"
#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

using namespace std;
//Subject Member Functions
void SecurityStatus::AttachObserver(IObserver *Homeowner){observers.push_back(Homeowner);}//attach an observer to list

void SecurityStatus::DetachObserver(IObserver *Homeowner){observers.erase(remove(observers.begin(),observers.end(),Homeowner),observers.end());}//Removes observer from list

void SecurityStatus::NotifyObservers(){ //Notify each observer in list by calling Update function within Observer
	for (unsigned i = 0; i < observers.size(); i++)//Goes through list of observers
	{
		IObserver *Homeowner = observers.at(i);	//Pointer for Observers
		Homeowner->Update();		//Update Observers on Sensor Status, Point observer info towards Update Func
	}
}
//Concrete Subject Member Functions
SensorInfo HouseSecurity::GetSensorStatus(){return mySensorStatus;}//called by observers to get current Status of the sensors

void HouseSecurity::SetSensorStatus(SensorInfo defaultStatus){		//external client will call this to set the sensor's position
	mySensorStatus = defaultStatus;	//Default Status of Sensors
	NotifyObservers();				//Once the sensor status is updated, we have to notify observers
}
