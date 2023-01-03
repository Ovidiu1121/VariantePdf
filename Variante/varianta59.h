#include "citire_afisare.h"


/*Fiºierul text bac.txt conþine, pe o singurã linie, cel puþin 3 ºi cel mult 100 de numere
naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin câte un
spaþiu. Scrieþi un program C/C++ care citeºte numerele din fiºier ºi scrie pe ecran ultima
cifrã a produsului celor mai mari 3 numere citite.
Exemplu: dacã fiºierul bac.txt conþine numerele:
1017 48 312 5742 162
atunci se va afiºa: 8 (ultima cifrã a produsului numerelor 1017, 5742, 312)*/

int ultimaCifra(int v[], int d) {

	sortareDescrescator(v, d);
	int p = 1;

	for (int i = 0; i < 3; i++) {
		p *= v[i] % 10;
	}
	return p % 10;
}

void ex3Var59() {

	int v[100], d;

	citire(v, d);
	cout << ultimaCifra(v, d);
}

/*Se considerã subprogramul divizor, care:
– primeºte prin intermediul parametrului, a, un numãr natural nenul de cel mult 4 cifre,
strict mai mare ca 1;
– furnizeazã prin intermediul parametrului d, cel mai mic divizor al lui a strict mai mare
decât 1.
a) Scrieþi numai antetul subprogramului divizor. (4p.)
b) Scrieþi declarãrile de date ºi programul principal C/C++ care citeºte de la tastaturã un
numãr natural x (x>1), ºi, prin apeluri utile ale subprogramului divizor, verificã dacã x
este numãr prim. Programul va afiºa pe ecran, în caz afirmativ, mesajul DA, iar în caz
contrar mesajul NU.*/

int divizor(int a) {

	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return i;
		}
	}
	return 0;
}

void ex4Var59() {

	cout << divizor(14);


}

















