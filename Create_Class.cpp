// Создание класса

#include <iostream>
#include <string>
#include "Create_class.h";

using namespace std;

class Animal {
private:
	int age;
	string name;

public:
	//конструкторы
	Animal() {
		cout << "Нельзя создать пустой объект, введите имя" << endl;
		cin >> name;
		cout << "Введите возраст" << endl;
		cin >> age;
	}

	Animal(string name, int age) {
		this->name = name;
		this->age = age;
	}
	// сетеры и гетеры
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

	//методы
	void showInfo() {
		cout << "Привет, меня зовут " << name << ", мне " << age << endl;
	}
};
