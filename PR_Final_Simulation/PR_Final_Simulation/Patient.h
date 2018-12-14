/*
	Patient class file. Used to create patients with a random severity. 
*/

#include <cstdlib>
using std::rand;

#ifndef PATIENT_H_
#define PATIENT_H_

class Patient {
private:

public:

	int Severity; // Variable that stores the severity level used to decide who can treat the patient.

	// Constructor to create a patient with a random severity level.
	Patient() {
		Severity = doublerand();
	}

	// ID used to differentiate the Patients and keep track of which is which.
	unsigned int id;

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

	// Used to display the severity of the patient.
	int displaySeverity() {
		return Severity;
	}
};
#endif