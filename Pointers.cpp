// ���������

#include <iostream>
using namespace std;
#include "Pointers.h";

void workPointers() {
	int arr[5]{ 2, 20, 1, 4, 5 };
	for (int i = 0; i < size(arr); i++) {
		cout << arr[i] << endl;
	}
}

void workPointers2() {
	int arr[5]{ 2, 20, 1, 4, 5 };
	for (int i = 0; i < size(arr); i++) {
		cout << (arr + i) << endl; // ��������� ������
	}
	cout << "----------------------" << endl;
	for (int i = 0; i < size(arr); i++) {
		cout << *(arr + i) << endl; // ��������� ��������
	}
}

void workPointers3(int *pa) { //�� �������� � ������� ����� ���������, ������� ���������� ������ ��������, � �� ��� �����.
	(*pa)++;
}

/*
void main() {
	int a = 0;
	cout << a << endl;
	workPointers3(&a);
	cout << a << endl;
}
*/