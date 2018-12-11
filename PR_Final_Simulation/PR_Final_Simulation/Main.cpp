/*
	Main file. Used to take inputs for the Hospital loop, initiates the loop, and outputs the results.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include "Hospital.h"
using std::cout;
using std::endl;
using std::cin;
using std::rand;
using std::srand;
using std::time;


int main() {
	srand(time(NULL));

	// Variables used to initailize the hospital loop.
	int patientsPerHour;
	int numDoctors;
	int numNurses;
	int runtime;

	// Asks the user to input the patients per hour as well as the total number of doctors and nurses.
	cout << "Enter the numer of patients per hour (cannot be greater than 60 or less than 0), " 
		<< endl << "the number of total doctors, then the number of total nurses: ";

	// Takes the users input.
	cin >> patientsPerHour >> numDoctors >> numNurses;

	// Checks that a valid number of pateints per hour was entered by the user. If invalid it outputs an error
	if (patientsPerHour > 60 || patientsPerHour < 0) {
		cout << "Invalid number of patients. Restart program and enter correct amount." << endl;
		return 0;
	}
	else {
		Hospital ER(patientsPerHour, numDoctors, numNurses);
	}
	return 0;
}