/*
	Class that contains variables for the patient class. pateints have a severity level that will decide if a nurse can treat them or 
	if it must be a doctor who treats them. 
*/

#include <cstdlib>
using std::rand;

#ifndef PATIENT_H_
#define PATIENT_H_

class Patient {
private:

	int Severity; // Variable that stores the severity level used to decide who can treat the patient.


public:

	// Constructor to create a patient with a random severity level.
	Patient() {
		Severity = doublerand();
	}


	// Random number generator used to set the severity level in the constructor.
	int doublerand() {


		int var1;
		int var2;
		var1 = rand() % 10 + 1;

		if (var1 < 8) {
			var2 = rand() % 10 + 1;
			return var2;
		}
		else if (var1 > 7 && var1 < 10) {
			var2 = rand() % 5 + 11;
			return var2;
		}
		else {
			var2 = rand() % 5 + 16;
			return var2;
		}
	}

	int displaySeverity() {
		return Severity;
	}

};


#endif