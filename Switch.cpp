// �������� Switch

#include "Switch.h";

using namespace std;

// ���������
//
//	switch (���������){
//	case (���������):
//		...
//		break;
//	default:
//		...
//		break;
//	}

void workSwitch(){
	int a;
	setlocale(LC_ALL, "Rus");
	cout << "������� ����� �����: ";
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� ����� 1";
		break;
	case 2:
		cout << "�� ����� 2";
		break;
	case 3:
		cout << "�� ����� 3";
		break;
	case 4:
		cout << "�� ����� 4";
		break;
	default:
		cout << "�� ����� �����, ������� 4";
		break;
	}
}