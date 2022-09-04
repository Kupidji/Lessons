// Логические операции

#include <iostream>
#include "LogicOperation.h";
using namespace std;


// && - и
// || -
// ! = не


void workLogicOperation(){
	bool b1 = true, b2 = false;
	setlocale(LC_ALL, "Rus");
	cout << "&&)";
	if (b1 && b2) {
		cout << "Прошел проверку" << endl;
	}
	else {
		cout << "Не прошел проверку" << endl;
	}
	cout << "||)";
	if (b1 || b2) {
		cout << "Прошел проверку" << endl;
	}
	else {
		cout << " Не прошел проверку" << endl;
	}
	cout << "&&, !)";
	if (b1 && !b2) {
		cout << "Прошел проверку" << endl;
	}
	else {
		cout << " Не прошел проверку" << endl;
	}
}