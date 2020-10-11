/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#include <iostream>
#include "SensorInfo.h"
using namespace std;

SensorInfo::SensorInfo(bool window1,bool window2,bool door){
	//Place Sensors status into sensors struct data to be used for notification
	this->sensors.Window1 = window1; 
	this->sensors.Window2 = window2;
	this->sensors.Door = door;
}
