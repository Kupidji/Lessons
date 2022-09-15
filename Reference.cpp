// Ссылки

#include "Reference.h";

using namespace std;



void workReference() {
	int a = 20;
	int* pa = &a;
	int& ra = a;
	cout <<"pa \t" << pa << endl; // сравнение между указателем и ссылкой
	cout << "*pa \t" << *pa << endl;
	cout << "ra \t" << ra << endl;
}

void workReference2(int& a, int& b) { 
	int temp;
	temp = a;
	a = b;
	b = temp;
}

template <class T> void workReference3(T& ra, T& rb) { // Добавь в main, чтобы работало.
	T temp;
	temp = ra;
	ra = rb;
	rb = temp;
}
