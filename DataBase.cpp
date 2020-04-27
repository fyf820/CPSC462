#include <memory> 
#include <string>
#include <iostream>
#include "DataBase.hpp"

DataBase::DataBase()
{}

void DataBase::ship_change(int ship_num, string details)
{
	ship_num -= 1; 
	ships[ship_num] = details;
}

bool DataBase::authorize_role(string name, string pass)
{
	bool autheticate = false;
	if (name == acc1_user && pass == acc1_pass)
		autheticate = true; 
	if (name == acc2_user && pass == acc2_pass)
		autheticate = true;
	return autheticate;
}

void DataBase::update_accountbal(int bill)
{
	acc1_balance += bill; 
}

void DataBase::update_rooms(int ship_num)
{
	if (ship_num == 1)
		rooms_1 -= 1;
	if (ship_num == 2)
		rooms_2 -= 1;
	if (ship_num == 3)
		rooms_3 -= 1;
}
string DataBase::get_role(string name)
{
	if (name == acc1_user)
		return acc1_role;
	if (name == acc2_user)
		return acc2_role;
	return NULL;
}

void DataBase::display_ships()
{
	for (int i = 0; i < 3; i++)
	{
		cout << ships[i] << "\n";
	}
}

void DataBase::display_spec_ship(int ship_num)
{
	cout << ships[ship_num - 1];
}

DataBase::~DataBase() 
{}

string DataBase::get_role(string name, string pass)
{
	string role;
	if (name == acc1_user && pass == acc1_pass)
		role = acc1_role;
	if (name == acc2_user && pass == acc2_pass)
		role = acc2_role;
	return role;
}