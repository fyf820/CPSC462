#pragma once
#include <iostream>
#include <string>

#include "DataBase.hpp"

using namespace std;

class ScheduleATrip
{
public:
	ScheduleATrip();

	void CruisesInfo();
	string changeCruise(int ship_num, string info);
	void displayChangedCruise(int ship_num);

	~ScheduleATrip();

protected:
	DataBase db;
};