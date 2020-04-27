#pragma once
#include <iostream>
#include <string>
#include <sstream>

#include "DataBase.hpp"
#include "bookACruise.hpp"
#include "ScheduleATrip.hpp"

using namespace std;

class Session
{
public:
	Session();

	string* getCommands(string role);
	string executeCommand(string command, string inputs[], int size);

	

	~Session();

protected:
	DataBase db;
	Book_Cruise bc;
	ScheduleATrip st; 
};