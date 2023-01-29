#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	char s[] = "-114";
	double number;

	cout << "Number in String = " << s << endl;

	number = atol(s);
	cout << "Number in Long Int = " << number;

	_getch();
	return 0;
}