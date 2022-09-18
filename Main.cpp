
#include <iostream>
#include "Main.h"; //Библиотека #include`ов


using namespace std;

class coffeMachine {
	
private:
	bool botton;

	bool checkStatus() {
		if (botton)	return true;
			else return false;
	}

public: 
	void setBotton(bool botton) {
		this->botton = botton;
	}

	void status() {
		if (checkStatus()) {
			cout << "doing Coffee" << endl;
		}
		else {
			cout << "Nothing" << endl;
		}
	}
};

void main() {
	setlocale(LC_ALL, "Rus");
	coffeMachine cf1;
	
}
