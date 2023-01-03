#include "citire_afisare.h"


/*Fi�ierul text bac.txt con�ine, pe o singur� linie, cel pu�in 3 �i cel mult 100 de numere
naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin c�te un
spa�iu. Scrie�i un program C/C++ care cite�te numerele din fi�ier �i scrie pe ecran ultima
cifr� a produsului celor mai mari 3 numere citite.
Exemplu: dac� fi�ierul bac.txt con�ine numerele:
1017 48 312 5742 162
atunci se va afi�a: 8 (ultima cifr� a produsului numerelor 1017, 5742, 312)*/

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

/*Se consider� subprogramul divizor, care:
� prime�te prin intermediul parametrului, a, un num�r natural nenul de cel mult 4 cifre,
strict mai mare ca 1;
� furnizeaz� prin intermediul parametrului d, cel mai mic divizor al lui a strict mai mare
dec�t 1.
a) Scrie�i numai antetul subprogramului divizor. (4p.)
b) Scrie�i declar�rile de date �i programul principal C/C++ care cite�te de la tastatur� un
num�r natural x (x>1), �i, prin apeluri utile ale subprogramului divizor, verific� dac� x
este num�r prim. Programul va afi�a pe ecran, �n caz afirmativ, mesajul DA, iar �n caz
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

















