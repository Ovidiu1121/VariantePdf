#include "citire_afisare.h"

//s2

/*Scrieþi un program C/C++ care citeºte de la tastaturã un numãr natural n (2<n<20),
construieºte în memorie ºi afiºeazã pe ecran o matrice cu n linii ºi n coloane, numerotate
de la 1 la n, în care fiecare element aflat pe o linie imparã este egal cu suma dintre indicii
liniei ºi coloanei pe care se aflã ºi fiecare element aflat pe o linie parã este egal cu cel mai
mic dintre elementele aflate pe linia anterioarã ºi pe aceeaºi coloanã cu el sau pe linia
anterioarã ºi pe una dintre coloanele vecine cu cea pe care se aflã el.
Elementele matricei vor fi afiºate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaþiu între elementele fiecãrei linii.
Exemplu: pentru n=5 se va afiºa matricea alãturatã. 
2 3 4 5 6
2 2 3 4 5
4 5 6 7 8
4 4 5 6 7
6 7 8 9 10*/

void matrice(int n) {

	int a[100][100];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i % 2 == 1) {
				a[i][j] = i + j;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var19() {

	matrice(5);

}

/*Un algoritm genereazã în ordine crescãtoare, toate numerele de n cifre (n<9), cu cifre
distincte, care nu au douã cifre pare alãturate. Dacã pentru n=5, primele cinci soluþii
generate sunt 10325, 10327, 10329, 10345, 10347, precizaþi care sunt urmãtoarele trei
soluþii generate, în ordinea obþinerii lor.*/

int s[100], n = 9, m = 5;

void tipar() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] == s[k]) {
			return 0;
		}
	}

	if (s[0] == 0) {
		return 0;
	}

	for (int i = 1; i <= k; i++) {
		if (s[i] % 2 == 0 && s[i - 1] % 2 == 0) {
			return 0;
		}
	}
	return 1;
}

int solutie(int k) {

	if (k == m - 1) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k) {

	for (int i = 0; i <= n; i++) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex2Var19() {

	back(0);

}

/*Subprogramul aranjare are doi parametri: a prin care primeºte un tablou unidimensional
cu maximum 100 de numere reale nenule ºi n, numãrul de elemente din tablou.
Subprogramul rearanjeazã elementele tabloului unidimensional astfel încât toate valorile
negative sã se afle pe primele poziþii, iar valorile pozitive în continuarea celor negative.
Ordinea în cadrul secvenþei de elemente pozitive, respectiv în cadrul secvenþei de elemente
negative, poate fi oricare. Tabloul modificat va fi furnizat tot prin intermediul parametrului a.
Exemplu: dacã tabloul are 6 elemente ºi este de forma (12, -7.5, 6.5, -3, -8,
7.5), dupã apel, acesta ar putea fi: (-7.5, -3, -8, 12, 6.5, 7.5).
Scrieþi definiþia completã a subprogramului aranjare*/

void ordonareNrNegative(int v[], int d) {

		for (int i = 1; i <= d; i++) {
			if (v[i] > 0) {
				int j = i;
				while (v[j] > 0 && j < d - 1) {
					j++;
				}
				if (j != d) {
					int aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}
			}
		}

}

void ex3Var19() {

	int v[100], d;

	citire(v, d);
	ordonareNrNegative(v, d);
	afisare(v, d);

}

/*În fiºierul nr1.txt este memoratã pe prima linie o valoare naturalã n de cel mult 8 cifre,
iar pe linia urmãtoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict crescãtor ºi separate prin câte un spaþiu. În fiºierul nr2.txt este memoratã
pe prima linie o valoare naturalã m de cel mult 8 cifre, iar pe linia urmãtoare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescãtor ºi separate prin
câte un spaþiu. Se cere afiºarea pe ecran, separate prin câte un spaþiu, în ordine strict
crescãtoare, a tuturor numerelor aflate pe a doua linie în cel puþin unul dintre cele douã
fiºiere. În cazul în care un numãr apare în ambele fiºiere, el va fi afiºat o singurã datã.
Alegeþi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate ºi al
timpului de executare.
Exemplu: pentru urmãtoarele fiºiere:
nr1.txt nr2.txt
5 6
3 6 8 9 12 2 3 5 7 9 13
se va afiºa 2 3 5 6 7 8 9 12 13.*/

void sortareCrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void sortareVectori(int v[], int d, int a[], int b) {
	int k = d;
	for (int i = 0; i < b; i++) {
		v[k] = a[i];
		k++;
	}
	d = k;
	sortareCrescator(v, d);

	for (int i = 0; i < k; i++) {
		cout << v[i] << " ";
	}

}

void ex4Var19() {

	int v[100], d;
	int a[6] = { 231,3,154,2,43,6 };

	citire(v, d);
	sortareVectori(v, d, a, 6);

}









