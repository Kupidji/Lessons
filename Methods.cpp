// Создание методов(функций)

#include <iostream>
#include "Methods.h";
using namespace std;

// void - функция ничего не возвращает
// int, string, float, bool и т.д - типы, возвращаемые функцией
// Если есть, что возвращать, пишеи ключевое слово - return;

void sayMyName(string name) {
	cout << "Привет, меня зовут " << name << endl;
}

int sum(int a, int b) {
	int result = a + b;
	return result;
}

// Перегрузка методов
void sayInfo(string name) {
	cout << "Привет, меня зовут " << name << endl;
}
void sayInfo(string name, int age) {
	cout << "Привет, меня зовут " << name <<", мне "<< age << " лет" << endl;
}
void sayInfo(string name, int age, int weight) {
	cout << "Привет, меня зовут " << name << ", мне " << age << " лет," << " мой рост - " << weight << endl;
}

// Шаблонные методы
template <typename T> T sum2(T a, T b) { //метод работает с любым типом, но только одним. На вход нельзя дать int и double.
	return a + b;
}
template <typename T1, typename T2> T1 sum3(T1 a, T2 b) { //метод возвращает T1 (под T1 может быть int или double, результатом будет тип, который был принят первее)
	return a + b;
}
