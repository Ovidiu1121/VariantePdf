#include "varianta40.h"


/*Scrieþi un subprogram DIST, cu doi parametri, care primeºte prin intermediul parametrului a
un tablou unidimensional cu cel mult 100 de elemente, numere naturale de cel mult 4 cifre
fiecare, ºi prin intermediul parametrului n un numãr natural nenul, n<100, ce reprezintã
numãrul de elemente din tablou. Subprogramul returneazã valoarea 1 dacã toate
elementele tabloului a sunt distincte ºi dacã diferenþa absolutã a oricãror douã elemente
vecine din tablou este diferitã de 1, altfel returnând valoarea 0.*/

bool diferentaAbsoluta(int v[], int d) {

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (j != i) {
				if (v[i] == v[j]) {
					return false;
				}
			}
		}
	}

	for (int i = 0; i < d - 1; i++) {
		if (abs(v[i] - v[i + 1]) == 1) {
			return false;
		}
	}
	return true;
}

void ex3Var41() {
	
	int v[100], d;

	citire(v, d);
	cout << diferentaAbsoluta(v, d);

}

/*Scrieþi un program C/C++ care determinã în mod eficient din punct de vedere al
timpului de executare, cea mai mare cifrã dintre cele situate pe a doua linie a fiºierului,
precum ºi numãrul de apariþii ale acesteia. Cele douã numere vor fi afiºate pe o singurã
linie a ecranului, separate printr-un spaþiu.
Exemplu: daca fiºierul numere.txt are urmãtorul conþinut:
7
3 5 2 1 5 3 1
atunci pe ecran se va afiºa: 5 2.*/

void ceaMaiMareCifra(int v[], int d) {

	int ct = 0;
	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] > maxim) {
			maxim = v[i];
		}
	}

	for (int i = 0; i < d; i++) {
		if (v[i] == maxim) {
			ct++;
		}
	}
	cout << maxim << " " << ct;
}

void ex4Var41() {

	int v[100], d;

	citire(v, d);
	ceaMaiMareCifra(v, d);

}




















