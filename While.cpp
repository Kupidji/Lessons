// Циклы while, do while

#include <iostream>
#include "While.h";
using namespace std;

void workWhile() {
	int a = 0;
	setlocale(LC_ALL, "Rus");
	while (a < 3) {
		cout << "Я еще в программе" << endl;
		a++;
	}
	cout << "Я вышел из программы while" << endl;

	a = 0;
	do {
		a++;
		cout << "Я еще в программе" << endl;
	} while (a < 3);
	cout << "Я вышел из программы do while" << endl;
}