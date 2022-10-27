#include "varianta10.h"


/*Fiºierul text numere.txt conþine pe prima linie un numãr natural n (n<30000), iar pe a
doua linie n numere întregi având maximum 4 cifre fiecare. Se cere sã se afiºeze pe ecran
un ºir de n numere întregi, cu proprietatea cã valoarea termenului de pe poziþia i
(i=1,2,…,n) din acest ºir este egalã cu cea mai mare dintre primele i valori de pe a doua
linie a fiºierului numere.txt.
Exemplu: dacã fiºierul numere.txt are conþinutul
alãturat,
12
4 6 3 7 8 1 6 2 7 9 10 8
se afiºeazã pe ecran numerele
4 6 6 7 8 8 8 8 8 9 10 10 */

void inlocuire(int v[], int d) {

	for (int i = 1; i <= d; i++) {
		int k = v[i-1];
		while (v[i - 1] > v[i] && i <= d - 1) {
			v[i] = k;
			i++;
		}
	}

}

void solutie29() {

	int v[100], d;

	citire(v, d);
	inlocuire(v, d);
	afisare(v, d);

}

/*Scrieþi doar antetul funcþiei sum care primeºte ca parametru un numãr natural nenul x cu
maximum 9 cifre ºi returneazã suma divizorilor numãrului x.
Exemplu: sum(6) are valoarea 12 (=1+2+3+6).*/

int sumaDiv(int n) {

	int s = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}

void solutie30() {

	cout << sumaDiv(6);

}

/*Sã se scrie un program C/C++ care citeºte de la tastaturã un numãr natural n (0<n<25) ºi
apoi n numere naturale nenule cu maximum 9 cifre fiecare. Programul calculeazã, folosind
apeluri ale funcþiei sum, ºi afiºeazã pe ecran câte numere prime conþine ºirul citit.
Exemplu: pentru n=5 ºi valorile 12 3 9 7 1 se va afiºa pe ecran valoarea 2 (în ºirul dat
existã douã numere prime ºi anume 3 ºi 7).*/

int contorPrime(int v[], int d) {

	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (prim(i) == true) {
			ct++;
		}
	}
	return ct;
}

void solutie31() {

	int v[100], d;

	citire(v, d);
	cout <<contorPrime(v, d);

}


















