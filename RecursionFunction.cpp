// Рекурсия

/*
#include <iostream>
using namespace std;

string req(int a) {
	if (a < 1) {
		return "Я гуль";
	}
	else if (a > 1) {
		a -= 7;
		cout << a << endl;
		return req(a);
	}
}

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

void main() {
	setlocale(LC_ALL, "Rus");
	cout << fuctorial(5);
}
*/