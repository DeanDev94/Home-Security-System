/*ELX4_R00116198_DD_Assign#2_ObProg_2017*/
#pragma once
#include "Observer.h"
#include <vector>

using namespace std;

class SecurityStatus{				//This class deals with organising and notifying observers
	vector<IObserver*> observers;	//List of observers
public:
	void AttachObserver(IObserver*);//attach an observer to list
	void DetachObserver(IObserver*);//Removes observer from list
	void NotifyObservers();			//Notify each observer in list by calling Update function within Observer
};