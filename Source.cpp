#include "Fig.h"
#include "cir.h"
#include "Sqr.h"


void main() {
	figure *F; int n_F; int n_f;
	circle *C; int n_C; int n_c;
	square *S; int n_S; int n_s;
	int dop;
	n_F = 1; n_C = 1; n_S = 1;

	while (true)
	{
		n_f = n_F; n_c = n_C; n_s = n_S;
		cout << endl << " inp 1 to add 1 element of Figures : ";
		cout << endl << " inp 2 to add 1 element of Circles : ";
		cout << endl << " inp 3 to add 1 element of Squares : ";
		cout << endl << " inp 0 to exit: " << endl;
		cin >> dop;

		switch (dop)
		{
		case 1: n_F += 1; break;
		case 2: n_C += 1; break;
		case 3: n_S += 1; break;
		case 0: goto the_end; break;
		default:
			break;
		}
		{
			F = new figure[n_F];
			C = new circle[n_C];
			S = new square[n_S];
		}

		for (int i = n_f; i < n_F; i++) {
			F[i].Inp(); F[i].Prt();
		}
		for (int i = n_c; i < n_C; i++) {
			C[i].Inp(); C[i].Prt();
		}
		for (int i = n_s; i < n_S; i++) {
			S[i].Inp(); S[i].Prt();
		}

	}
the_end:
	cout << "Dyakuyu tomu y******u compilyatoru z VS2017\n\n\n" ;
	system("pause");
}