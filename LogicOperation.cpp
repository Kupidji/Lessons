// ���������� ��������

#include <iostream>
#include "LogicOperation.h";
using namespace std;


// && - �
// || -
// ! = ��


void workLogicOperation(){
	bool b1 = true, b2 = false;
	setlocale(LC_ALL, "Rus");
	cout << "&&)";
	if (b1 && b2) {
		cout << "������ ��������" << endl;
	}
	else {
		cout << "�� ������ ��������" << endl;
	}
	cout << "||)";
	if (b1 || b2) {
		cout << "������ ��������" << endl;
	}
	else {
		cout << " �� ������ ��������" << endl;
	}
	cout << "&&, !)";
	if (b1 && !b2) {
		cout << "������ ��������" << endl;
	}
	else {
		cout << " �� ������ ��������" << endl;
	}
}