// Массивы
#include <iostream>
#include "Array.h";

using namespace std;

//способы инициализации
// стандартный тип имя[кол-во ячеек], пример: int arr[5];
// с заполнением ячеек, пример: int arr[]{2, 54, 1...};
// с заполнением ячеек и указанием их кол-ва, пример: arr[3]{2, 54, 1};
// int arr[5]{}; ячейки будут заполнены нулями

void workWithArray() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		arr[i] = i;
		cout << arr[i] << endl;
	}
}

// Работа с массивами
// Чтобы узнать длину массива нужно использовать метод: size(array);
// или sizeof(имя массива) / sizeof(имя массива[0]);

void workWithArray2() {
	int arr[]{ 5,2,4};
	for (int i = 0; i < size(arr); i++) {
		cout << arr[i] << endl;

	}
}

//двумерный массив
// int arr[2][5];
// заполнение int arr[2][5]{{2,4,5,1,5},{1,6,2,5,7}}

void workWithArray3(){
	int arr[2][3]{ {1,2,3}, {4,5,6} };
	for (int i = 0; i < 2; i++)	{
		for (int j = 0; j < 3; j++)	{
			cout << arr[i][j] << " ";
		}
	}
}

