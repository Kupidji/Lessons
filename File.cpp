// Работа с файлами

/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Для работы с файлами нужно
// Подключить библиотеку <fstream>
// ofstream - создание и запись файла

void createFile() {
	ofstream fout; // создал объект fout
	fout.open("Example.txt"); // открываем файл с удалением существующих данных
	if (!fout.is_open()) { // проверяю, открылся ли файл
		cout << "Файл не открыт!" << endl;
	}
	else {
		fout << "Вписываю данные, как дела?";
		cout << "Запись данных прошла успешно!";
	}
	fout.close(); // закрываем файл
}

void appendSomething() {
	ofstream fout2; // создал объект типа ofstream
	fout2.open("Example.txt", ofstream::app); // открываем файл с сохранением существующих данных
	if (!fout2.is_open()) { // проверяю, открылся ли файл
		cout << "Файл не открыт!" << endl;
	}
	else {
		fout2 << " У меня хорошо, у тебя?";
		cout << "Запись данных прошла успешно!";
	}
	fout2.close(); // закрываем файл
}

// метод ifstream используется для чтения файла

void readFile() {
	ifstream fin; // создаем объект для чтения
	fin.open("Example.txt"); // открываем файл
	if (!fin.is_open()) {
		cout << "Файл не открыт для чтения!";
	}
	else {
	//	char ch;
	//	while (fin.get(ch)) {
	//		cout << ch;
	//	}
		// или можно собрать все в одну строку
		string str;
		while (!fin.eof()) { //пока не конец файла...
			getline(fin, str); //зыаисываем данные в строчку
			cout << str << endl;
		}
	}
	fin.close();
}

void main() {
	setlocale(LC_ALL, "Rus");
	//createFile();
	//appendSomething();
	readFile();
}
*/