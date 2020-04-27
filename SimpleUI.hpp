#pragma once
#include <iostream>
#include <string>

#include "DataBase.hpp"
#include "bookACruise.hpp"
#include "ScheduleATrip.hpp"
#include "Session.hpp"

using namespace std;

class SimpleUI
{
public:
	SimpleUI();

	void launch();

	~SimpleUI();

protected:
	DataBase db;
	Book_Cruise bc;
	ScheduleATrip st;
	Session ses;
};