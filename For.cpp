// Цикл for, фишки

#include "For.h";

using namespace std;

void workFor() {
	setlocale(LC_ALL, "Rus");

	//Обычный цикл
	for (int i = 0; i < 10; i++) {
		cout << "Привет, я программа\n";
	}

	// Случай, когда надо запоминать инератор i
	int i = 0;
	cout << i << endl;
	cout << "Первый цикл"<< endl;
	for (; i < 5; i++) {
		cout << "i = " << i << endl;
	}
	cout << "Второй цикл" << endl;
	for (; i < 10; i++) {
		cout << "i = " << i << endl;
	}
	cout<<i << endl;

	// Две переменные
	for (int i = 0, j = 5; i <= 5; i++, j--) { // Можно добавить (int i = 0, j = 5; i <= 5 && j != 5; i++, j--)
		cout << "Переменная i = " << i << endl;
		cout << "Переменная j = " << j << endl;
	}
}
