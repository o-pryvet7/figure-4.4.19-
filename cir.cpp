
#include "Fig.h"
#include "cir.h"


circle::circle()
{
	figure::figure();
	R = 1;
}


void circle::Inp() {
	figure::Inp();
	cout << "Input R\n"; cin >> R;
}

void circle::Prt() {
	figure::Prt();
	cout << " R : " << R << endl;
	cout << " Sqare : " << circle::Sqare() << endl;
}

double circle::Sqare() {
	return ((355 / 113)*R*R);
}