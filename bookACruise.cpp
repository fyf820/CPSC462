#include <iostream>
#include <string>

#include "DataBase.hpp"
#include "bookACruise.hpp"
using namespace std;

Book_Cruise::Book_Cruise()
{}

void Book_Cruise::CruisesInfo()
{
	db.display_ships();
}

string Book_Cruise::selectCruise(int ship_num)
{
	db.update_rooms(ship_num);
	string authorized;
	authorized = "You have booked one room on the Cruise.";
	return authorized;
}

string Book_Cruise::changeBalance()
{
	db.update_accountbal(5000);
	string authorized;
	authorized = "Your account Balance has been updated";
	return authorized;
}

Book_Cruise::~Book_Cruise()
{}