//������������ ������

#include <iostream>
#include "DinamicArray.h";


using namespace std;

void workDinamicArray() {
	int size;
	cout << "������� ������ �������" << endl;
	cin >> size;
	int* arr = new int[size];
	fillArray(arr, size);
	showArray(arr, size);
	delete[] arr;
}

// ��������� ������������ ������

void workDinamicArray2() {
	int size1, size2;	
	cout << "������� 2 ������� ������� " << endl;
	cin >> size1 >> size2;
	int** arr = new int* [size1];
	for (int i = 0; i < size1; i++) { // �������� ���������� �������
		arr[i] = new int[size2];
	}

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << "   ";
		}
	}

	for (int i = 0; i < size1; i++) { //�������� ��������� ������� �� ������
		delete[] arr[i];
	}
	delete[] arr; // �������� ������� �������� �� ������
}

// ����������� ������������� �������

void workDinamicArray3() {
	int size = 10;
	int *arr1 = new int[size];
	int* arr2 = new int[size];
	fillArray(arr1, size);
	fillArray(arr2, size);
	cout << "������ ������ " << endl;
	showArray(arr1, size);
	cout << "������ ������ " << endl;
	showArray(arr2, size);
	for (int i = 0; i < size; i++) {
		arr1[i] = arr2[i];
	}
	cout << "������ ������ ����� �����������" << endl;
	showArray(arr1, size);
	cout << "������ ������ ����� �����������" << endl;
	showArray(arr2, size);
}