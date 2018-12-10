#include <cstdlib>
using std::rand;

#ifndef PATIENT_H_
#define PATIENT_H_

class Patient {
private:
	int Severity;


public:
	Patient() {
		Severity = doublerand();
	}

	unsigned int id;



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