/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"
#include "Observer.h"
#include "SensorInfo.h"
#include "Subject.h"

#include <iostream>
#include <vector>
#include <list>

using namespace std;

void main(){
	HouseSecurity mySecureHome, *myHome;	//Initialise HouseSecurity object
	myHome = &mySecureHome;					//Pointer for Object
	//Create few HomeOwners
	HomeOwner Mom(myHome, "Mum", "123456", "Mum@home.ie");
	HomeOwner Dad(myHome, "Dad", "2334567", "Dad@home.ie");
	HomeOwner Child(myHome, "Child", "0987654", "Child@home.ie");
	
	Keyholder Neighbour1(myHome, "Neighbour1", "567890", "n1@home.ie");
	Keyholder Neighbour2(myHome, "Neighbour2", "754321", "n2@home.ie");

	//Attach the observers to the house sensor net
	IObserver* observer;
	observer = &Mom;
	mySecureHome.AttachObserver(observer);
	observer = &Dad;
	mySecureHome.AttachObserver(observer);
	observer = &Child;
	mySecureHome.AttachObserver(observer);
	observer = &Neighbour1;
	mySecureHome.AttachObserver(observer);
	observer = &Neighbour2;
	mySecureHome.AttachObserver(observer);
	cout << "After attaching the observers..." << endl;

	//Update the status of the house.
	SensorInfo newinfo;	//Takes default values of sensors
	mySecureHome.SetSensorStatus(newinfo);//Set Status of sensors and notify homeowners/keyholders
	cout << "" << endl;

	//Remove some observers
	observer = &Mom;
	mySecureHome.DetachObserver(observer);
	observer = &Dad;
	mySecureHome.DetachObserver(observer);
	cout << "After detaching Mom and Dad..." << endl;

	//Update the status of the house.
	SensorInfo updateinfo(true, false, true);//If Sensor values changed(detected)
	mySecureHome.SetSensorStatus(updateinfo);//Set Status of sensors and notify homeowners/keyholders
}