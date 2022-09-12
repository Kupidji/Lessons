//ƒинамический массив

#include <iostream>
#include "DinamicArray.h";
#include <string>

using namespace std;

void workDinamicArray() {
	int size;
	cout << "¬ведите размер массива" << endl;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
		cout << i + 1 << ") " << & arr[i] << "\t" << arr[i] << endl;
	}
	delete[] arr;
}
