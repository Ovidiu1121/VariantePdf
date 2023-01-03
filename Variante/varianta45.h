#include "citire_afisare.h"


/*Scrieþi programul C/C++ care citeºte de la tastaturã numãrul natural n (0<n<100) ºi un ºir
format din n numere reale. Aceste numere au atât partea întreagã cât ºi partea fracþionarã
formate din cel mult trei cifre. Programul determinã ºi afiºeazã pe ecran toate numerele din
ºir care apar o singurã datã în acesta.
Exemplu: dacã n=7, iar ºirul este format din elementele (3.4, -151, 0.291, 3.4,
4.09, 3.4, 0.291), atunci pe ecran se va afiºa -151 4.09.*/

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void singuraAparitie(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (frecventaNumar(v, d, v[i]) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var45() {

	int v[100], d;

	citire(v, d);
	singuraAparitie(v, d);

}

/*Fiºierul text numere.txt conþine pe prima linie un numãr natural n (0<n<100000), iar pe a
doua linie n numere naturale, formate din cel mult douã cifre, separate prin câte un spaþiu.
a) Scrieþi un program C/C++, eficient atât din punct de vedere al timpului de executare, care
afiºeazã pe ecran toate numerele situate pe a doua linie a fiºierului, în ordinea crescãtoare
a valorilor lor, separate prin câte un spaþiu.
Exemplu: dacã fiºierul numere.txt are urmãtorul conþinut:
7
12 21 22 11 9 12 3
atunci pe ecran se va afiºa: 3 9 11 12 12 21 22*/

void ex4Var45() {

	int v[100], d;

	citire(v, d);
	sortareCrescator(v, d);
	afisare(v, d);

}




















