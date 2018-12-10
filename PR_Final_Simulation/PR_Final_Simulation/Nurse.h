#include <cstdlib>
using std::rand;

#ifndef NURSE_H_
#define NURSE_H_

class Nurse {
private:
	int WorkTime;
	bool isAvailable;

public:

	Nurse(int wTime, bool available) {
		wTime = nurseTimer();
		WorkTime = wTime;
		available = false;
		isAvailable = available;
	}


	int nurseTimer() {
		int var = rand() % 10 + 1;
		return var;
	}

};



#endif
