#include <iostream>
#include "String.h";

using namespace std;

void workString() {
	string str1 = "Hello ";
	string str2 = "world";
	
	cout << str1 + str2 << endl;;
	cout << str1.length() << endl;
	cout << str1.size() << endl;
	cout << str1.append(str2) << endl;
	cout << str1.size();
}