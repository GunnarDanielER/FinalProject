#include <cstdlib>
using std::rand;

#ifndef DOCTOR_H_
#define DOCTOR_H_

class Doctor {
private:
	int WorkTime;
	bool isAvailable;

public:

	Doctor() {
		WorkTime = doctorTimer();
		isAvailable = true;
	}
	
	unsigned int id;
	
	int doctorTimer() {
		int var = rand() % 20 + 1;
		return var;

	}
};


#endif