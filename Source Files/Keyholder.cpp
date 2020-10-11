/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#include <iostream>
#include "Observer.h"
#include "ConcreteObserver.h"
#include "SensorInfo.h"

using namespace std;
// Concrete Observer_Keyholder Member Functions
Keyholder::Keyholder(HouseSecurity* home, string name, string email, string number)
{
	house = home;
	myName = name;
	myPhoneNumber = number;
	myEmail = email;
}
void Keyholder::Update()//Overrides IObserver Update
{
	currentSensorStatus = house->GetSensorStatus();//retrieve current sensor status from mySensorStatus
	//Displays which Keyholder is being notified
	cout << "Keyholder "<<myName<<". Sensors says that the status of the house is:"
		<< currentSensorStatus.sensors.Window1 << currentSensorStatus.sensors.Window2
		<< currentSensorStatus.sensors.Door << endl;  
}