/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#include <iostream>
#include "Observer.h"
#include "ConcreteObserver.h"
#include "SensorInfo.h"

using namespace std;

//Concrete Observer_HomeOwner
HomeOwner::HomeOwner(HouseSecurity* home, string name, string email, string number){//allows creating a pointer to a HouseSecurity object
	house = home;
	myName = name;
	myPhoneNumber = number;
	myEmail = email;
}

void HomeOwner::Update()//Overrides IObserver Update
{
	currentSensorStatus = house->GetSensorStatus(); //retrieve current sensor status from mySensorStatus
	//Displays which Homeowner is being notified and current status of Sensors
	cout << "Homeowner " << myName<<". Sensors says that the status of the house is: " 
		<< currentSensorStatus.sensors.Window1 << currentSensorStatus.sensors.Window2
		<< currentSensorStatus.sensors.Door << endl;
}