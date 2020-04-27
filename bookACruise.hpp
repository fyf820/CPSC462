#pragma once
#include <iostream>
#include <string>

#include "DataBase.hpp"

using namespace std;

class Book_Cruise
{
public:
	Book_Cruise();

	void CruisesInfo();
	string selectCruise(int ship_num);
	string changeBalance();

	~Book_Cruise();

protected:
	DataBase db;
};