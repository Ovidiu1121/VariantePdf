#include "citire_afisare.h"

//s2

/*natural n (2<n<=15) şi construieşte în memorie o matrice A cu n linii
şi n coloane în care orice element aflat pe prima linie sau pe prima
coloană are valoarea 1 şi oricare alt element Aij din matrice este
egal cu suma a două elemente din matrice, primul aflat pe linia i şi pe
coloana j-1, iar cel de-al doilea pe coloana j şi pe linia i-1.
Matricea va fi afişată pe ecran, linie cu linie, numerele de pe
aceeaşi linie fiind separate prin câte un spaţiu.
Exemplu: pentru n=4 , se obţine matricea alăturată.
1 1 1 1
1 2 3 4
1 3 6 10
1 4 10 20 */

void matricee(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i][j - 1] + a[i - 1][j];
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

void ex5Var30() {

	matricee(4);

}

//s3

/*Pentru generarea numerelor cu n cifre formate cu elementele mulţimii {0,4,8} se
utilizează un algoritm backtracking care, pentru n=2, generează, în ordine, numerele
40,44,48,80,84,88.
Dacă n=4 şi se utilizează acelaşi algoritm, care este numărul generat imediat după numărul
4008 ?*/

int s[100], n = 3, m = 4;

int v[3] = { 0,4,8 };

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	if (s[0] == 0) {
		return 0;
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

void ex1Var30() {

	back(0);

}

/*Scrieţi definiţia completă a subprogramului suma, care primeşte prin cei 4 parametri,
v,n,i,j:
- v, un tablou unidimensional cu maximum 100 de elemente întregi din intervalul
[-1000,1000], numerotate de la 1 la n;
- n, un număr natural reprezentând numărul de elemente din tabloul v;
- i şi j, două valori naturale cu 1≤i≤j≤100
şi returnează suma elementelor v1,…vi-1, vj+1,…,…,vn din tabloul v.*/

void ex3Var30() {


}

/*Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n (1≤n≤100) şi pe
următoarea linie n numere reale pozitive ordonate crescător, separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte din fişierul NUMERE.IN numărul natural n, şi
determină, utilizând un algoritm eficient din punct de vedere al timpului de executare şi al
memoriei utilizate, numărul minim de intervale închise de forma [x,x+1], cu x număr
natural, a căror reuniune include toate numerele reale din fişier.
Exemplu: Dacă fişierul NUMERE.IN are conţinutul:
6
2.3 2.3 2.8 5.7 5.7 6.3
atunci se afişează 3 (intervalele [2,3], [5,6], [6,7] sunt cele 3 intervale de forma
cerută care conţin numere din şir).*/


void ex4Var30() {

	float v[6] = { 2.3,2.3,2.8,5.7,5.7,6.3 };


}


















