// Ключевое слово continue

#include "Continue.h";
using namespace std;

void workContinue() {
	for (int i = 0; i < 5; i++) {
		if (i == 2 || i == 4) {
			continue;
		}
		cout << "i = " << i << endl;
	}
}
