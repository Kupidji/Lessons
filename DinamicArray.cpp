//ƒинамический массив

#include <iostream>
#include "DinamicArray.h";


using namespace std;

void workDinamicArray() {
	int size;
	cout << "¬ведите размер массива" << endl;
	cin >> size;
	int* arr = new int[size];
	fillArray(arr, size);
	showArray(arr, size);
	delete[] arr;
}

// двумерный динамический массив

void workDinamicArray2() {
	int size1, size2;	
	cout << "¬ведите 2 размера массива " << endl;
	cin >> size1 >> size2;
	int** arr = new int* [size1];
	for (int i = 0; i < size1; i++) { // создание двумерного массива
		arr[i] = new int[size2];
	}

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << "   ";
		}
	}

	for (int i = 0; i < size1; i++) { //удаление вложеного массива из пам€ти
		delete[] arr[i];
	}
	delete[] arr; // удаление массива массивов из пам€ти
}

// копирование динамического массива

void workDinamicArray3() {
	int size = 10;
	int *arr1 = new int[size];
	int* arr2 = new int[size];
	fillArray(arr1, size);
	fillArray(arr2, size);
	cout << "ѕервый массив " << endl;
	showArray(arr1, size);
	cout << "¬торой массив " << endl;
	showArray(arr2, size);
	for (int i = 0; i < size; i++) {
		arr1[i] = arr2[i];
	}
	cout << "ѕервый массив после копировани€" << endl;
	showArray(arr1, size);
	cout << "¬торой массив после копировани€" << endl;
	showArray(arr2, size);
}