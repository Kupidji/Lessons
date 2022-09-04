// �������� �������(�������)

#include <iostream>
#include "Methods.h";
using namespace std;

// void - ������� ������ �� ����������
// int, string, float, bool � �.� - ����, ������������ ��������
// ���� ����, ��� ����������, ����� �������� ����� - return;

void sayMyName(string name) {
	cout << "������, ���� ����� " << name << endl;
}

int sum(int a, int b) {
	int result = a + b;
	return result;
}

// ���������� �������
void sayInfo(string name) {
	cout << "������, ���� ����� " << name << endl;
}
void sayInfo(string name, int age) {
	cout << "������, ���� ����� " << name <<", ��� "<< age << " ���" << endl;
}
void sayInfo(string name, int age, int weight) {
	cout << "������, ���� ����� " << name << ", ��� " << age << " ���," << " ��� ���� - " << weight << endl;
}

// ��������� ������
template <typename T> T sum2(T a, T b) { //����� �������� � ����� �����, �� ������ �����. �� ���� ������ ���� int � double.
	return a + b;
}
template <typename T1, typename T2> T1 sum3(T1 a, T2 b) { //����� ���������� T1 (��� T1 ����� ���� int ��� double, ����������� ����� ���, ������� ��� ������ ������)
	return a + b;
}
