#include <iostream>                                                                     
#include <string>

#include "SimpleUI.hpp"

SimpleUI::SimpleUI()
{}


void SimpleUI::launch()
{
	//log in function
	string userName_;
	string passWord_;
	cout << "\nEnter username: ";
	getline(cin, userName_);
	cout << "\nEnter password: ";
	getline(cin, passWord_);

	bool authorized = db.authorize_role(userName_, passWord_);
	if (authorized == true)
	{
		cout << "\nAccount Authorized\n";
		string role_ = db.get_role(userName_, passWord_);
		//display commands based on role
		string* commands = ses.getCommands(role_);
		int menuSelection;
		string selectedCommand;

		cout << "Enter the number that corresponds with the selection you want.\n";
		for (int i = 1; i < sizeof(commands)-1; i++)
		{
			cout << i << " - " << commands[i] << "\n";
		}
		
		//let user select command
		cin >> menuSelection;
		selectedCommand = commands[menuSelection];

		//if selected command == Book Cruise
		if (selectedCommand == "Book a Cruise")
		{
			bc.CruisesInfo();
			string cruise[2];
			string  shipnum;
			cout << "Enter cruise ship number: ";
			cin >> shipnum;
			cruise[0] = shipnum;
			string confirm = ses.executeCommand(selectedCommand, cruise, sizeof(cruise));
			cout << confirm << "\n";
		}

		//if selected command == Schedule Trip
		else if (selectedCommand == "Schedule a Trip")
		{
			bc.CruisesInfo();
			string cruise[2];
			string shipnum;
			string ship_det;
			cout << "Enter cruise ship nuber you want to change: ";
			cin >> shipnum;
			cruise[0] = shipnum;
			cout << "Enter new trip details (ex. 1. place (LA), date (01 - May - 2020), price (5000 is price of room): ";
			cin >> ship_det;
			cruise[1] = ship_det;
			string confirm = ses.executeCommand(selectedCommand, cruise, sizeof(cruise));
			cout << confirm << "\n";
		}

		//if selected command == Quit
		else if (selectedCommand == "Quit")
		{
			cout << "\nThank you for using the CruiseAider System\n";
			system("Pause");
			exit(0);
		}
	}
	if (authorized == false)
		cout << "\nAccount not Authorized, closing system\n" << endl;
	cout << "System closing, Thank You for using CruiseAider\n";
	system("Pause");
	exit(0);
}


SimpleUI::~SimpleUI()
{}