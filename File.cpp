// ������ � �������

#include "File.h";

using namespace std;

// ��� ������ � ������� �����
// ���������� ���������� <fstream>
// ofstream - �������� � ������ �����

void createFile() {
	ofstream fout; // ������ ������ fout
	fout.open("Example.txt"); // ��������� ���� � ��������� ������������ ������
	if (!fout.is_open()) { // ��������, �������� �� ����
		cout << "���� �� ������!" << endl;
	}
	else {
		fout << "�������� ������, ��� ����?";
		cout << "������ ������ ������ �������!";
	}
	fout.close(); // ��������� ����
}

void appendSomething() {
	ofstream fout2; // ������ ������ ���� ofstream
	fout2.open("Example.txt", ofstream::app); // ��������� ���� � ����������� ������������ ������
	if (!fout2.is_open()) { // ��������, �������� �� ����
		cout << "���� �� ������!" << endl;
	}
	else {
		fout2 << " � ���� ������, � ����?";
		cout << "������ ������ ������ �������!";
	}
	fout2.close(); // ��������� ����
}

// ����� ifstream ������������ ��� ������ �����

void readFile() {
	ifstream fin; // ������� ������ ��� ������
	fin.open("Example.txt"); // ��������� ����
	if (!fin.is_open()) {
		cout << "���� �� ������ ��� ������!";
	}
	else {
	//	char ch;
	//	while (fin.get(ch)) {
	//		cout << ch;
	//	}
		// ��� ����� ������� ��� � ���� ������
		string str;
		while (!fin.eof()) { //���� �� ����� �����...
			getline(fin, str); //���������� ������ � ������� #include <string>
			cout << str << endl;
		}
	}
	fin.close();
}

