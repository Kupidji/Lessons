//���� ������

#include "Cin.h";

using namespace std;

void workCin() {
	int firstValue, secondValue, thirdValue;
	int sum, mult;
	double mid_value;
	cout << "������� 3 �����" << endl;
	cout << "1) ";
	cin >> firstValue;
	cout << "2) ";
	cin >> secondValue;
	cout << "3) ";
	cin >> thirdValue;
	sum = firstValue + secondValue + thirdValue;
	mult = firstValue * secondValue * thirdValue;
	mid_value = (double) sum / 3;
	cout << "����� ���� ����� - " << sum << endl;
	cout << "������������ ���� ����� - " << mult << endl;
	cout << "������� �������������� - " << mid_value << endl;
}


