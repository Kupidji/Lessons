// ���� for, �����

#include "For.h";

using namespace std;

void workFor() {
	setlocale(LC_ALL, "Rus");

	//������� ����
	for (int i = 0; i < 10; i++) {
		cout << "������, � ���������\n";
	}

	// ������, ����� ���� ���������� �������� i
	int i = 0;
	cout << i << endl;
	cout << "������ ����"<< endl;
	for (; i < 5; i++) {
		cout << "i = " << i << endl;
	}
	cout << "������ ����" << endl;
	for (; i < 10; i++) {
		cout << "i = " << i << endl;
	}
	cout<<i << endl;

	// ��� ����������
	for (int i = 0, j = 5; i <= 5; i++, j--) { // ����� �������� (int i = 0, j = 5; i <= 5 && j != 5; i++, j--)
		cout << "���������� i = " << i << endl;
		cout << "���������� j = " << j << endl;
	}
}
