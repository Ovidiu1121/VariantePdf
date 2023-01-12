#include "citire_afisare.h"

/*a) Scrieþi doar antetul unui subprogram prim cu doi parametri, care primeºte prin
intermediul parametrului n un numãr natural cu cel mult patru cifre ºi returneazã prin
intermediului parametrului p valoarea 1 dacã n este prim ºi 0 în caz contrar. (2p.)
b) Scrieþi un program C/C++ care citeºte de la tastaturã un numãr natural n (3<n<10000)
ºi afiºeazã pe ecran, despãrþite prin câte un spaþiu, primele n numerele prime, folosind
apeluri utile ale subprogramului prim. (8p.)
Exemplu: pentru n=4 pe ecran vor fi afiºate numerele 2 3 5 7*/

void primeleNumerePrime(int n) {

	int k = 0;
	int i = 2;

	while (k < n) {
		if (prim(i) == true) {
			cout << i << " ";
			k++;
		}
		i++;
	}
	
}

void ex3Var78() {

	primeleNumerePrime(4);

}

/*Fiºierul text bac.in conþine pe prima sa linie un numãr natural n (0<n<10000), iar pe
urmãtoarea linie n numere naturale din intervalul [1,100]. Se cere sã se citescã din fiºier
toate numerele ºi sã se afiºeze pe ecran, în ordine descrescãtoare, toate numerele care
apar pe a doua linie a fiºierului ºi numãrul de apariþii ale fiecãruia. Dacã un numãr apare de
mai multe ori, el va fi afiºat o singurã datã. Fiecare pereche „valoare - numãr de apariþii” va
fi afiºatã pe câte o linie a ecranului, numerele fiind separate printr-un spaþiu, ca în exemplu.
Alegeþi un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
Exemplu: dacã fiºierul bac.in are urmãtorul conþinut:
12
1 2 2 3 2 2 3 3 2 3 2 1
pe ecran se vor afiºa, în aceastã ordine, perechile:
3 4
2 6
1 2*/

int frecventaNumar(int v[], int d, int n) {

	int f[1000]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void perechi(int v[], int d) {
	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (nrGasit(a, b, v[i]) == false) {
			a[b] = v[i];
			b++;
		}
	}

	for (int i = 0; i < b; i++) {
		cout << a[i] << " " << frecventaNumar(v, d, a[i]) << endl;
	}
}

void ex4Var78() {

	int v[100], d;

	citire(v, d);
	perechi(v, d);

}























