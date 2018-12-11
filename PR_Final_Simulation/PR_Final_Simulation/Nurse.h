/*
	Nurse class file. Used to create Nurses with a random work time and sets their availability to true.
*/

#include <cstdlib>
using std::rand;

#ifndef NURSE_H_
#define NURSE_H_

class Nurse {
private:
	// Variables that store the time it takes to operate and the Nurses availability.
	int WorkTime;
	bool isAvailable;

public:
	// Constructor that creates a nurse with a random work time and sets its availability to true.
	Nurse() {
		WorkTime = nurseTimer();
		isAvailable = true;
	}

	// ID used to differentiate the Nurses and keep track of which is which.
	unsigned int id;

	// Random number generator to set the nurses work time.
	int nurseTimer() {
		int var = rand() % 10 + 1;
		return var;
	}
};
#endif