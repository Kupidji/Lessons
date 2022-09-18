//Ввод данных

#include "Cin.h";

using namespace std;

void workCin() {
	int firstValue, secondValue, thirdValue;
	int sum, mult;
	double mid_value;
	cout << "Введите 3 числа" << endl;
	cout << "1) ";
	cin >> firstValue;
	cout << "2) ";
	cin >> secondValue;
	cout << "3) ";
	cin >> thirdValue;
	sum = firstValue + secondValue + thirdValue;
	mult = firstValue * secondValue * thirdValue;
	mid_value = (double) sum / 3;
	cout << "Сумма всех чисел - " << sum << endl;
	cout << "Произведение всех чисел - " << mult << endl;
	cout << "Среднее арифмитическое - " << mid_value << endl;
}


