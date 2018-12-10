/*
test for commits
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
//#include "Hopsital.h" this include line is not working, at least on my computer - Daniel
using std::cout;
using std::endl;
using std::cin;
using std::rand;
using std::srand;
using std::time;


int main() {
	srand(time(NULL));

	int patientsPerHour;
	int numDoctors;
	int numNurses;
	int runtime;
	cout << "Enter the numer of patients per hour (cannot be greater than 60 or less than 0), " << endl << "the number of total doctors, then the number of total nurses: ";
	cin >> patientsPerHour >> numDoctors >> numNurses;
	if (patientsPerHour > 60 || patientsPerHour < 0) {
		cout << "Invalid number of patients. Restart program and enter correct amount." << endl;
		return 0;
	}
	else {
		
		//RunDay();

	}
	return 0;




}




