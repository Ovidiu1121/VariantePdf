#include "varianta2.h"


/*Fi�ierului text NR.TXT con�ine pe o singur� linie, separate prin c�te un singur spa�iu, cel
mult 100 de numere naturale, fiecare num�r av�nd cel mult 4 cifre. Scrie�i un program
C/C++ care cite�te toate numerele din fi�ierul NR.TXT �i afi�eaz� pe ecran, separate prin
c�te un spa�iu, �n ordine cresc�toare, toate numerele din fi�ier care au cel pu�in 3 cifre.
Dac� fi�ierul nu con�ine astfel de numere se va afi�a pe ecran mesajul NU EXISTA.*/

void minim3cifre(int v[], int d) {

	int ok = 0;

	for (int i = 0; i < d; i++) {
		if (contorCifre(v[i]) >= 3) {
			ok = 1;
		}
	}
	if (ok == 1) {
		for (int i = 0; i < d; i++) {
			if (contorCifre(v[i]) >= 3) {
				cout << v[i] << " ";
			}
		}
	}
	else {
		cout << "Nu exista";
	}

}

void solutie7() {

	int v[100], d;

	citire(v, d);
	minim3cifre(v, d);

}




















