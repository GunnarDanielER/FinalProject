/*
	Hospital class file. Combines all other header files and contains the main loop for the simulation.
*/

#include "Nurse.h"
#include "Doctor.h"
#include "Patient.h"
#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::list;

#ifndef HOSPITAL_H_
#define HOSPITAL_H_

class Hospital : public Nurse, public Doctor, public Patient {

public:
	// Variable to set how many patients are added every hour.
	int patientsPerHour;

	// Temporary patients used to compare patients.
	Patient tempPatient;
	Patient tempPatient2;
	
	// Variables that store the treated and untreated patients. Used for output.
	int waitingRoom;
	int treated;

	void startLoop() {
		RunDay();
	}

	// Outputs the results of the simulation to the console.
	void FinalReport() {
		cout << "Total number of patients treated: " << treated << endl;
		cout << "Total patients left in waiting room: " << waitingRoom << endl;
	}

	// Constructor for the Hospital. Takes three variables.
	Hospital(int P, int D, int N) {

		// Variables used to initalize the hospital
		patientsPerHour = P;
		waitingRoom = 0;
		treated = 0;

		int Did = 0; // Doctor ID variable.
		int Nid = 0; // Nurse ID variable.

		// Takes the created Doctors and gives them an ID.
		while (Did < D) {
			list<Doctor> Doctors;
			Doctor Doc;
			Doc.id = Did;
			Doctors.push_back(Doc);
			Did++;
		}
		// Takes the created Nurses and gives them an ID.
		while (Nid < N) {
			list<Nurse> Nurses;
			Nurse n;
			n.id = Nid;
			Nurses.push_back(n);
			Nid++;
		}
	}

private:
	// Main loop for the hospital simulation. Runs for 1 week.
	void RunDay() {
		int pph; // temporary variable, patients for this hour. resets every hour.

		list<Patient> patients;

		// Sets the initial patient ID to 0.
		int patientID = 0;

		// Runs the loop for 10080 ticks(1 week).
		for (int i = 0; i < 10080; i++) {
			
			// Checks if the loop has reached 1 hour.
			if (i % 60 == 0) {
				pph = patientsPerHour; 
			}

			// Checks if patients need to be added.
			if (pph > 0) {

				// Creates a Patient assigns it an ID and adds it to the queue.
				Patient P;
				P.id = patientID;
				patients.push_back(P);

				++waitingRoom; // Adds 1 pateint to the waiting room.
				++patientID; // Increments the Patient ID.
				--pph; // Decrements the Patients that need to be added for this hour.
			}

			// Checks if there are any patients in the list then takes the most severe
			if (patients.size() > 0) {
				tempPatient = patients.front();
				patients.pop_front();
				// Temporary fix to run patients through the simulation
				--waitingRoom;
				if (tempPatient.Severity <= 10)
				{ //Treat with Nurse
					
					
					++treated;
				}
				else
				{ // Treat with Doctor


					++treated;
				}
				//remove patient from queue, add name to list of treated
			}

			// Treats the patients with either a Doctor or Nurse.
			
		}
	}
};
#endif