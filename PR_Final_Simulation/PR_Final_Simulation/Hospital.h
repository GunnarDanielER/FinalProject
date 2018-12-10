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
	int patientsPerHour;
	int waitingRoom;
	int treated;


private:

	Hospital(int P, int D, int N) {
		
		patientsPerHour = P;
		waitingRoom = 0;
		treated = 0;

		int Did = 0;
		int Nid = 0;
		while (Did < D) {
			list<Doctor> Doctors;
			Doctor Doc;
			Doc.id = Did;
			Doctors.push_back(Doc);
		}
		while (Nid < N) {
			list<Nurse> Nurses;
			Nurse n;
			n.id = Nid;
			Nurses.push_back(n);
		}


	}

	void RunDay() {
		int pph;
		list<Patient> patients;
		int patientID = 0;
		for (int i = 0; i < 10080; i++) {
			
			if (i % 60 == 0) {
				pph = patientsPerHour; //temporary variable, patients for this hour. resets every hour.
			}
			if (pph > 0) {
				Patient P;
				P.id = patientID;
				patients.push_back(P);

				++waitingRoom;
				++patientID;
				--pph;
			}

		}


	}

	void FinalReport() {
		cout << "Total number of patients treated: " << treated << endl;
		cout << "Total patients left in waiting room: " << waitingRoom << endl;
	}





};





#endif