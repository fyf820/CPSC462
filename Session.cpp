#include <iostream>                                                                     
#include <string>
#include <sstream>

#include "Session.hpp"

Session::Session()
{}

string* Session::getCommands(string role)
{
	static string commands[3];
	//if user role customer, commands displayed are book a cruise and quit
	cout << "I AM IN GET COMMANDS" << endl;
	cout << role << endl;
	if (role == "customer")
	{
		commands[0] = "Blank";
		commands[1] = "Book a Cruise";
		commands[2] = "Quit";
	}
	//if user role manager, schedule a trip and quit are the options
	if (role == "manager")
	{
		commands[0] = "Blank";
		commands[1] = "Schedule a Trip";
		commands[2] = "Quit";
	}

	//return list of options
	return commands;
}

string Session::executeCommand(string command, string inputs[], int size)
{
	if (command == "Book a Cruise")
	{
		stringstream ship(inputs[0]);
		int shipnum = 0;
		ship >> shipnum;
		return bc.selectCruise(shipnum);
	}

	if (command == "Schedule a Trip")
	{
		stringstream ship(inputs[0]);
		int shipnum = 0;
		ship >> shipnum;
		string info = inputs[1];
		return st.changeCruise(shipnum, info);
	}
}

Session::~Session()
{}