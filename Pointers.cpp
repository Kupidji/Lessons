// ���������


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
		cout << (arr + i) << endl; // ��������� ������
	}
	cout << "----------------------" << endl;
	for (int i = 0; i < size(arr); i++) {
		cout << *(arr + i) << endl; // ��������� ��������
	}
}

void workPointers3(int *pa) { //�� �������� � ������� ����� ���������, ������� ���������� ������ ��������, � �� ��� �����.
	(*pa)++;
}

void workPointers4(int *pa, int *pb) { //� ������� ���������� ��������� �����, ������� ���������� ��� ����������
	int c = (*pa);
	(*pa) = (*pb);
	(*pb) = c;

}
/*
void main() {
	setlocale(LC_ALL, "Rus");
	int a = 0;
	cout << a << endl;
	workPointers3(&a);
	cout << a << endl;
}
*/

//��������� �� ������
/*
1 ������

void main() {
	setlocale(LC_ALL, "Rus");
	void (*test)();
	test = workPointers2;
	test();
}

2 ������ 

string getDataFromPC() {
	return "PC info";
}

string getDataFromPhone() {
	return "Phone info";
}

void showInfo(string (*func)()) {
	cout << func() << endl;
}

void main() {
	setlocale(LC_ALL, "Rus");
	showInfo(getDataFromPC);
}
*/