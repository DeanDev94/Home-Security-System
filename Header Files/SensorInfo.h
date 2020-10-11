/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#pragma once
using namespace std;

class SensorInfo{
public:
struct Sensors{bool Window1, Window2, Door;};	//This is a data structure to hold the status of the house sensors
Sensors sensors;								//Initialise struct
SensorInfo(bool window1=false,bool window2=false,bool door=false);//default value for sensors
};

