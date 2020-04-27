#include <iostream>
#include <string>

#include "DataBase.hpp"
#include "ScheduleATrip.hpp"
using namespace std;

ScheduleATrip::ScheduleATrip()
{}

void ScheduleATrip::CruisesInfo()
{
	db.display_ships();
}

string ScheduleATrip::changeCruise(int ship_num, string info)
{
	db.ship_change(ship_num, info);
	string authorized;
	authorized = "You have changed the ship details";
	return authorized;
}

void ScheduleATrip::displayChangedCruise(int ship_num)
{
	db.display_spec_ship(ship_num);
}

ScheduleATrip::~ScheduleATrip()
{}