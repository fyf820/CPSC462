#include <iostream>
#include <string>
#include "bookACruise.hpp"
#include "ScheduleATruip.hpp"
using namespace std;

struct factory{
	static factory * newBookCruise() {
		return new Book_Cruise;
	}
	static factory* newScheduleatrip() {
		return new ScheduleATrip;
	}
};