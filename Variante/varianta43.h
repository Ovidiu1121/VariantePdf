#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤23) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane astfel încât elementele situate pe
diagonala principală să fie egale cu 2, cele situate deasupra diagonalei principale să fie
egale cu 1, iar cele situate sub diagonala principală să fie egale 3.
Programul va afişa matricea pe ecran, câte o linie a matricei pe o linie a
ecranului, cu câte un spaţiu între elementele fiecărei linii.
Exemplu: dacă n este 4 atunci programul va construi şi va afişa
matricea alăturată. (10p.)
2 1 1 1
3 2 1 1
3 3 2 1
3 3 3 2*/

void matrice(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				a[i][j] = 2;
			}
			else if (i < j) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = 3;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var43() {

	matrice(4);

}

//s3

/*Utilizând metoda backtracking se generează numerele formate din câte 3 cifre distincte din
mulţimea {1,3,5,7}. Dacă primele trei numere generate sunt, în acestă ordine: 135,
137, 153 care este cel de-al patrulea număr generat?*/

int s[100], n = 4, m = 3;
int v[4] = { 1,3,5,7 };

void tipar() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
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

	for (int i = 0; i < n; i++) {
		s[k] = v[i];
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

void ex1Var43() {

	back(0);

}

/*Scrieţi definiţia completă a unui subprogram P cu doi parametri, care primeşte prin
intermediul primului parametru, n, un număr natural nenul (1≤n≤100) şi prin intermediul
celui de-al doilea parametru, a, un tablou unidimensional cu elementele numerotate de la 1
la n, numere întregi de cel mult 4 cifre fiecare. Subprogramul returnează suma tuturor
numerelor impare aflate pe poziţii pare din tablou.
Exemplu: dacă n=6, iar şirul a este format din elementele (3,12,7,1,4,3), atunci la apel se
va returna 4.*/

void sumaPozitiiPare(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		if (i % 2 == 1) {
			if (v[i] % 2 == 0) {
				s += v[i];
			}
		}
	}
	cout << s;
}

void ex3Var43() {

	int v[100], d;

	citire(v, d);
	sumaPozitiiPare(v, d);
}

/*Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului
de executare, cel mai mare număr ce se poate forma cu toate cifrele conţinute de a doua
linie a fişierului numere.txt. Numărul determinat se va afişa pe ecran.
Exemplu: daca fişierul numere.txt are următorul conţinut:
7
2 5 3 1 5 8 9
atunci pe ecran se va afişa: 9855321.*/

void celMaiMareNrVec(int v[], int d) {

	sortareDescrescator(v, d);

	int x = 0;

	for (int i = 0; i < d; i++) {
		x = x * 10 + v[i];
	}
	cout << x;
}

void ex4Var43() {

	int v[100], d;

	citire(v, d);
	celMaiMareNrVec(v, d);
}













