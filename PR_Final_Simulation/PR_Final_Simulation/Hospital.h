#include <iostream>
using std::cout;
using std::endl;
#ifndef HOSPITAL_H_
#define HOSPITAL_H_


class Hospital {

public:
	int patientsPerHour;
	int numDoctors;
	int numNurses;
	int waitingRoom;
	int treated;


private:

	Hospital(int P, int D, int N) {
		patientsPerHour = P;
		numDoctors = D;
		numNurses = N;
		waitingRoom = 0;
		treated = 0;
	}

	void RunDay() {
		int hp = patientsPerHour; //temporary variable, patients for this hour.

		for (int i = 0; i < 10080; i++) {
			

		}


	}

	void FinalReport() {
		cout << "Total number of patients treated: " << treated << endl;
		cout << "Total patients left in waiting room: " << waitingRoom << endl;
	}





};





#endif