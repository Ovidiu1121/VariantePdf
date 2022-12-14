#include "citire_afisare.h"

//s2

/*Scrie�i un program C/C++ care cite�te de la tastatur� un num�r natural n (2<n<20),
construie�te �n memorie �i afi�eaz� pe ecran o matrice cu n linii �i n coloane, numerotate
de la 1 la n, �n care fiecare element aflat pe o linie impar� este egal cu suma dintre indicii
liniei �i coloanei pe care se afl� �i fiecare element aflat pe o linie par� este egal cu cel mai
mic dintre elementele aflate pe linia anterioar� �i pe aceea�i coloan� cu el sau pe linia
anterioar� �i pe una dintre coloanele vecine cu cea pe care se afl� el.
Elementele matricei vor fi afi�ate pe ecran, c�te o linie a matricei pe
c�te o linie a ecranului cu c�te un spa�iu �ntre elementele fiec�rei linii.
Exemplu: pentru n=5 se va afi�a matricea al�turat�. 
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

/*Un algoritm genereaz� �n ordine cresc�toare, toate numerele de n cifre (n<9), cu cifre
distincte, care nu au dou� cifre pare al�turate. Dac� pentru n=5, primele cinci solu�ii
generate sunt 10325, 10327, 10329, 10345, 10347, preciza�i care sunt urm�toarele trei
solu�ii generate, �n ordinea ob�inerii lor.*/

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

/*Subprogramul aranjare are doi parametri: a prin care prime�te un tablou unidimensional
cu maximum 100 de numere reale nenule �i n, num�rul de elemente din tablou.
Subprogramul rearanjeaz� elementele tabloului unidimensional astfel �nc�t toate valorile
negative s� se afle pe primele pozi�ii, iar valorile pozitive �n continuarea celor negative.
Ordinea �n cadrul secven�ei de elemente pozitive, respectiv �n cadrul secven�ei de elemente
negative, poate fi oricare. Tabloul modificat va fi furnizat tot prin intermediul parametrului a.
Exemplu: dac� tabloul are 6 elemente �i este de forma (12, -7.5, 6.5, -3, -8,
7.5), dup� apel, acesta ar putea fi: (-7.5, -3, -8, 12, 6.5, 7.5).
Scrie�i defini�ia complet� a subprogramului aranjare*/

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

/*�n fi�ierul nr1.txt este memorat� pe prima linie o valoare natural� n de cel mult 8 cifre,
iar pe linia urm�toare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict cresc�tor �i separate prin c�te un spa�iu. �n fi�ierul nr2.txt este memorat�
pe prima linie o valoare natural� m de cel mult 8 cifre, iar pe linia urm�toare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict cresc�tor �i separate prin
c�te un spa�iu. Se cere afi�area pe ecran, separate prin c�te un spa�iu, �n ordine strict
cresc�toare, a tuturor numerelor aflate pe a doua linie �n cel pu�in unul dintre cele dou�
fi�iere. �n cazul �n care un num�r apare �n ambele fi�iere, el va fi afi�at o singur� dat�.
Alege�i un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate �i al
timpului de executare.
Exemplu: pentru urm�toarele fi�iere:
nr1.txt nr2.txt
5 6
3 6 8 9 12 2 3 5 7 9 13
se va afi�a 2 3 5 6 7 8 9 12 13.*/

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









