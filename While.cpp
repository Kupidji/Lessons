// ����� while, do while

#include <iostream>
#include "While.h";
using namespace std;

void workWhile() {
	int a = 0;
	setlocale(LC_ALL, "Rus");
	while (a < 3) {
		cout << "� ��� � ���������" << endl;
		a++;
	}
	cout << "� ����� �� ��������� while" << endl;

	a = 0;
	do {
		a++;
		cout << "� ��� � ���������" << endl;
	} while (a < 3);
	cout << "� ����� �� ��������� do while" << endl;
}