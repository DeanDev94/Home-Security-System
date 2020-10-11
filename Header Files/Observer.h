/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#pragma once

using namespace std;

class IObserver /*This class is an abstract class. Each homeowner / keyholder must update their
				sensor status information from using this method using the SecurityStatus pointer*/
{
public:
	virtual void Update(); //This method is a must override method
};