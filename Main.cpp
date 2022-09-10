
#include <iostream>

//#include "Array.h";
//#include "Cin.h";
//#include "Continue.h";
//#include "File.h";
//#include "For.h";
//#include "HelloWorld.h";
//#include "Inc_Dec.h";
//#include "LogicOperation.h";
//#include "Methods.h";
//#include "Random.h";
//#include "RecursionFunction.h";
//#include "Switch.h";
//#include "While.h";
#include "Pointers.h";

using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");
	int a = 20, b = 7;
	cout << a << "\t" << b << endl;
	workPointers4(&a, &b);
	cout << a << "\t" << b << endl;
}
