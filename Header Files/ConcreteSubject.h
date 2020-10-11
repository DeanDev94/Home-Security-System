/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#pragma once
#include "SensorInfo.h" 

using namespace std;

class HouseSecurity:public SecurityStatus
{
	SensorInfo mySensorStatus;			//Status of the house sensors

public:
	SensorInfo GetSensorStatus();		//called by observers to get current Status of the sensors
	void SetSensorStatus(SensorInfo defaultStatus);//external client will call this to set the sensor's position
};