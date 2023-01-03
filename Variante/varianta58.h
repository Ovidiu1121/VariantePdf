#include "citire_afisare.h"


/*Fiºierul text BAC.TXT conþine, pe o singurã linie, cel puþin 3 ºi cel mult 100 de numere
naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin câte un
spaþiu. Scrieþi un program C/C++ care citeºte toate numerele din fiºierul BAC.TXT ºi scrie
pe ecran, în ordine descrescãtoare, cele mai mici 3 numere citite.
Exemplu: dacã fiºierul BAC.TXT conþine numerele 1017 48 310 5710 162, atunci se
va afiºa: 310 162 48*/

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

/*Se considerã subprogramul divizor, care:
– primeºte prin intermediul parametrului a un numãr natural strict mai mare decât 1, de cel
mult 4 cifre;
– furnizeazã prin intermediul parametrului d cel mai mare divizor al lui a strict mai mic decât
a.
a) Scrieþi numai antetul subprogramului divizor. (4p.)
b) Scrieþi declarãrile de date ºi programul principal C/C++ care citeºte de la tastaturã un
numãr natural nenul x, de cel mult 4 cifre ºi, prin apeluri utile ale subprogramului divizor,
verificã dacã x este numãr prim. Programul va afiºa pe ecran în caz afirmativ mesajul DA, iar
în caz contrar mesajul NU.*/

void ex4Var58() {

	cout << prim(13);

}


















