// ��������� ��������� �����

#include <iostream>
#include <ctime>
#include "Random.h";
using namespace std;

// ����� ������������ ��������� ����� �����:
// 1) #include <ctime>
// 2) srand(time(NULL));
// 3) a = rand();
// ���� ����� ���������� ��������, �� ����� a = rand() % �����;

void workRandom() {
	srand(time(NULL));
	int a;
	a = rand();
	cout << a << endl;
	a = rand() % 10; // ��������� ����� �� 0 - 9
	cout << a << endl;
}
