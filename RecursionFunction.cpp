// Рекурсия

#include "RecursionFunction.h";

using namespace std;

int fuctorial(int a) { // Факториал
	if (a == 0) {
		return 0;
	}
	else if (a == 1) {
		return 1;
	}
	else {
		return a * fuctorial(a - 1);
	}
	
}
