/*
Class that holds the main loop of the simulation. This is where all different classes are brought together.
Main loop will run for one weeks time.
*/

#include <iostream>
using std::cout;
using std::endl;
#ifndef HOSPITAL_H_
#define HOSPITAL_H_


class Hospital {

public:
	int patientsPerHour; // Variable that will be set at the beginning of the simulation to decide how many patients are added every hour.
	int numDoctors; // Variable that will be set at the beginning of the simulation to decide the number of doctors in the hospital.
	int numNurses; // Variable that will be set at the beginning of the simulation to decide the number of nurses in the hospital.
	int waitingRoom; // Variable to store the number of patients in the waiting room.
	int treated; // Variable that will store the number of patients treated. this will be used for output at the end of the simulation.


private:

	// Constructor to create a hospital with the number of patients per hour and the max number of doctors and nurses available. 
	Hospital(int P, int D, int N) {
		patientsPerHour = P;
		numDoctors = D;
		numNurses = N;
		waitingRoom = 0;
		treated = 0;
	}

	// Main loop that ticks for the set amount of time.
	void RunDay() {
		int hp = patientsPerHour; //temporary variable, patients for this hour.
		int count = 0; //counter variable
		for (int i = 0; i < 10080; i++) {
			
			if (count <= hp)
			{
				count++;
				//create a Patient()
				
			}
			else
			{
				count = 60 - hp;
			}
			cout << count;
		}

		FinalReport();
	}

	// Runs at the end of simulation and outputs the number of patients treated and untreated.
	void FinalReport() {
		cout << "Total number of patients treated: " << treated << endl;
		cout << "Total patients left in waiting room: " << waitingRoom << endl;
	}





};





#endif