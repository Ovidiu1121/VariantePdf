#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n
(1≤n≤23) şi apoi construieşte în memorie o matrice cu n linii şi n coloane,
numerotate de la 1 la n, astfel încât fiecare element situat pe o linie i
(1≤i≤n) şi pe o coloană j (1≤j≤n) va fi egal cu suma dintre i şi j.
Programul va afişa matricea pe ecran, câte o linie a matricei pe o linie a
ecranului, elementele de pe aceeaşi linie fiind separate prin câte un spaţiu.
Exemplu: dacă n=4, se va afişa matricea alăturată. (10p.)
2 3 4 5
3 4 5 6
4 5 6 7
5 6 7 8*/

void matrice(int n) {

	int a[100][100];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] = i + j;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var41() {

	matrice(4);

}

//s3

/*Scrieţi un subprogram DIST, cu doi parametri, care primeşte prin intermediul parametrului a
un tablou unidimensional cu cel mult 100 de elemente, numere naturale de cel mult 4 cifre
fiecare, şi prin intermediul parametrului n un număr natural nenul, n<100, ce reprezintă
numărul de elemente din tablou. Subprogramul returnează valoarea 1 dacă toate
elementele tabloului a sunt distincte şi dacă diferenţa absolută a oricăror două elemente
vecine din tablou este diferită de 1, altfel returnând valoarea 0.*/

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

/*Scrieţi un program C/C++ care determină în mod eficient din punct de vedere al
timpului de executare, cea mai mare cifră dintre cele situate pe a doua linie a fişierului,
precum şi numărul de apariţii ale acesteia. Cele două numere vor fi afişate pe o singură
linie a ecranului, separate printr-un spaţiu.
Exemplu: daca fişierul numere.txt are următorul conţinut:
7
3 5 2 1 5 3 1
atunci pe ecran se va afişa: 5 2.*/

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




















