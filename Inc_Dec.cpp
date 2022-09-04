//Инкремент и декремент

#include <iostream>
#include "Inc_Dec.h";
using namespace std;

void workInc_Dec() {
	int a = 2;
	a++;
	cout << a << endl;
	a--;
	cout << a << endl;
	++a;
	cout << a << endl;
	--a;
	cout << a << endl;
	a += 20;
	cout << a << endl;
	a -= 20;
	cout << a << endl;
	a /= 2; // Делит на 2 a         == a = a / 2;
	cout << a << endl;
	a *= 2; // Умножает на 2 a      == a = a * 2;
	cout << a << endl;
}
