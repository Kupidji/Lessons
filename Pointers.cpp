// Указатели

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
		cout << (arr + i) << endl; // выведется ссылка
	}
	cout << "----------------------" << endl;
	for (int i = 0; i < size(arr); i++) {
		cout << *(arr + i) << endl; // выведутся значения
	}
}

void workPointers3(int *pa) { //Мы передаем в функцию адрес параметра, поэтому изменяется именно параметр, а не его копия.
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