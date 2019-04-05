
#include "Sqr.h"
#include "Fig.h"


square::square()
{
	figure::figure();
	a = 1;
}


void square::Inp() {
	figure::Inp();
	cout << "Input a\n"; cin >> a;
}

void square::Prt() {
	figure::Prt();
	cout << " a : " << a << endl;
	cout << " Sqare : " << square::Sqare() << endl;
}

double square::Sqare() {
	return (a*a);
}