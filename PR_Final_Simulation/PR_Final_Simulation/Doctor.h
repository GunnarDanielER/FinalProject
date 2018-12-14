/*
Class that contains the variables for the doctor who will treat more severe patients or treat patients if all nurses are busy.
Contains a WorkTime and isAvailable variables.
*/

#include <cstdlib>
using std::rand;

#ifndef DOCTOR_H_
#define DOCTOR_H_

class Doctor {
private:
	int WorkTime; // Tells the program how long it will take to teat a patient and is randomly generated between a specific range for each patient.
	bool isAvailable; // Tells the program if the doctor is available to treat a patient.

public:
	
	// Constructor to create a doctor with a random WorkTime and initializes the isAvailable value to false.
	Doctor(int wTime, bool available) {
		wTime = doctorTimer();
		WorkTime = wTime;
		available = false;
		isAvailable = available;
	}
	
	// Random generator used in the constructor to decide the work time of the doctor.
	int doctorTimer() {
		int var = rand() % 20 + 1;
		return var;

	}
};


#endif