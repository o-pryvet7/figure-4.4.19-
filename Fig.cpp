#include "Fig.h"


figure::figure()
{
	name = "NoName";
}


void figure::Inp() {
	cout << "Input name \n"; cin >> name;
}

void figure::Prt() {
	cout << "Sqare : " << figure::Sqare() << endl;
	cout << "Name : " << name << endl;
}

double figure::Sqare() { return ((int)'$'); }
