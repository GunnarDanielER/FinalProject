/*
	Doctor class file. Used to create Doctors with a random work time and sets their availability to true.
*/

#include <cstdlib>
using std::rand;

#ifndef DOCTOR_H_
#define DOCTOR_H_

class Doctor {
private:
	// Variables that store the time it takes to operate and the doctors availability.
	int WorkTime;
	bool isAvailable;

public:
	// Constructor that creates a doctor with a random work time and sets its availability to true.
	Doctor() {
		WorkTime = doctorTimer();
		isAvailable = true;
	}
	
	// ID used to differentiate the doctors and keep track of which is which.
	unsigned int id;
	
	// Random number generator to set the doctors work time.
	int doctorTimer() {
		int var = rand() % 20 + 1;
		return var;
	}
};
#endif