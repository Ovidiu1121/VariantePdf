#include "citire_afisare.h"


/*Subprogramul par primeºte prin singurul sãu parametru, n, un numãr natural nenul cu cel
mult 8 cifre ºi returneazã valoarea 1 dacã n conþine cel puþin o cifrã parã, sau returneazã
valoarea 0 în caz contrar.
Exemplu: pentru n=723 subprogramul va returna valoarea 1.
a) Scrieþi numai antetul subprogramului par. (2p.)
b) Scrieþi un program C/C++ care citeºte de la tastaturã un numãr natural nenul n cu cel
mult trei cifre, apoi un ºir de n numere naturale, cu cel puþin douã ºi cel mult 8 cifre fiecare,
ºi afiºeazã pe ecran numãrul de valori din ºirul citit care au numai cifra unitãþilor parã,
celelalte cifre fiind impare. Se vor utiliza apeluri utile ale subprogramului par.
Exemplu: dacã n=4, iar ºirul citit este 7354, 123864, 51731, 570 se va afiºa 2 (numerele
7354 ºi 570 respectã condiþia cerutã). */

bool par(int n) {

	while (n) {
		if (n % 10 % 2 == 0) {
			return true;
		}
		n /= 10;
	}
	return false;
}

bool cifraUnitatilorPara(int n) {
	if (n % 10 % 2 == 0) {
		n = n / 10;
	}
	else {
		return false;
	}

	while (n) {
		if (n % 10 % 2 != 1) {
			return false;
		}
		n /= 10;
	}
	return true;
}

void inVector(int v[], int d) {
	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (cifraUnitatilorPara(v[i]) == true) {
			ct++;
		}
	}
	cout << ct;
}

void ex3Var91() {

	int v[100], d;

	citire(v, d);
	inVector(v, d);

}

/*Fiºierul numere.in conþine cel mult 5000 de numere reale, câte unul pe fiecare linie. Se
cere sã se scrie un program care sã citescã toate numerele din fiºier ºi sã afiºeze pe ecran
numãrul de ordine al primei, respectiv al ultimei linii pe care se aflã cel mai mare numãr din
fiºier. Cele douã numere vor fi separate printr-un spaþiu. Alegeþi o metodã de rezolvare
eficientã din punct de vedere al spaþiului de memorare ºi al timpului de executare.
Exemplu: dacã fiºierul are conþinutul alãturat, pe ecran se vor afiºa numerele 2 6.
a) Descrieþi succint, în limbaj natural, metoda de rezolvare aleasã, explicând în ce
constã eficienþa ei. (4p.)
b) Scrieþi programul C/C++ corespunzãtor metodei descrise. (6p.)
3.5
7
-4
7
2
7
6.3
5  */

void liniiMaxim(int a[100][100], int n, int m) {

	int maxim = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > maxim) {
				maxim = a[i][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == maxim) {
				cout << i + 1 << " ";
			}
		}
	}

}

void ex4Var91() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	liniiMaxim(a, n, m);
}


















