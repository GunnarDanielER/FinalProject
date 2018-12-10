/*
Holds the variables for the nurse who will treat less severe patients. Nurses are called before doctors if the severity
of the patient is below the nurses thresh hold. Contains a WorkTime and isAvailable variables.
*/

#include <cstdlib>
using std::rand;

#ifndef NURSE_H_
#define NURSE_H_

class Nurse {
private:
	int WorkTime; // Tells the program how long it will take to trat a patient and is randomly generated between a specific range for each patient.
	bool isAvailable; // Tells the program if the nurse is available to treat the patient.

public:

	// Constructor to create a nurse with a random WorkTime and initializes the isAvailable value to false.
	Nurse(int wTime, bool available) {
		wTime = nurseTimer();
		WorkTime = wTime;
		available = false;
		isAvailable = available;
	}

	// Random generator used in the constructor to decide the work time of the nurse.
	int nurseTimer() {
		int var = rand() % 10 + 1;
		return var;
	}

};


#endif
