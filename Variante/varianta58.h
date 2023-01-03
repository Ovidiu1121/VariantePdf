#include "citire_afisare.h"


/*Fi�ierul text BAC.TXT con�ine, pe o singur� linie, cel pu�in 3 �i cel mult 100 de numere
naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin c�te un
spa�iu. Scrie�i un program C/C++ care cite�te toate numerele din fi�ierul BAC.TXT �i scrie
pe ecran, �n ordine descresc�toare, cele mai mici 3 numere citite.
Exemplu: dac� fi�ierul BAC.TXT con�ine numerele 1017 48 310 5710 162, atunci se
va afi�a: 310 162 48*/

void nrMinime(int v[], int d) {

	sortareDescrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (i >= d - 3) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var58() {

	int v[100], d;

	citire(v, d);
	nrMinime(v, d);

}

/*Se consider� subprogramul divizor, care:
� prime�te prin intermediul parametrului a un num�r natural strict mai mare dec�t 1, de cel
mult 4 cifre;
� furnizeaz� prin intermediul parametrului d cel mai mare divizor al lui a strict mai mic dec�t
a.
a) Scrie�i numai antetul subprogramului divizor. (4p.)
b) Scrie�i declar�rile de date �i programul principal C/C++ care cite�te de la tastatur� un
num�r natural nenul x, de cel mult 4 cifre �i, prin apeluri utile ale subprogramului divizor,
verific� dac� x este num�r prim. Programul va afi�a pe ecran �n caz afirmativ mesajul DA, iar
�n caz contrar mesajul NU.*/

void ex4Var58() {

	cout << prim(13);

}


















