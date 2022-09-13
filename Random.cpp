// Генератор случайных чисел

#include <iostream>
#include <ctime>
#include "Random.h";
using namespace std;

// Чтобы генерировать случайное число нужно:
// 1) #include <ctime>
// 2) srand(time(NULL));
// 3) a = rand();
// если нужен конкретный диапозон, то пишем a = rand() % число;

void workRandom() {
	srand(time(NULL));
	int a;
	a = rand();
	cout << a << endl;
	a = rand() % 10; // рандомное число от 0 - 9
	cout << a << endl;
}
