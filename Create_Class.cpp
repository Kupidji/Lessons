// �������� ������

#include <iostream>
#include <string>
#include "Create_class.h";

using namespace std;

class Animal {
private:
	int age;
	string name;

public:
	//������������
	Animal() {
		cout << "������ ������� ������ ������, ������� ���" << endl;
		cin >> name;
		cout << "������� �������" << endl;
		cin >> age;
	}

	Animal(string name, int age) {
		this->name = name;
		this->age = age;
	}
	// ������ � ������
	void setName(string name) {
		this->name = name;
	}

	void getName() {
		cout << name << endl;
	}

	void setAge(int age) {
		this->age = age;
	}

	void getAge() {
		cout << age << endl;
	}

	//������
	void showInfo() {
		cout << "������, ���� ����� " << name << ", ��� " << age << endl;
	}
};
