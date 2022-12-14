#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<16),
construieşte în memorie şi afişează pe ecran o matrice cu n linii şi n coloane în care
elementele de pe cele două diagonale sunt egale cu 0, elementele care se află deasupra
ambelor diagonale sunt egale cu 1, elementele care se află sub ambele diagonale sunt
egale cu 2, iar restul elementelor sunt egale cu 3.
5.
Elementele matricei vor fi afişate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
0 1 1 1 0
3 0 1 0 3
3 3 0 3 3
3 0 2 0 3
0 2 2 2 0*/

void matrice(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && (i + j) < n - 1) {
				a[i][j] = 1;
			}
			else if (i<j && (i + j)>(n - 1)) {
				a[i][j] = 3;
			}
			else if (i > j && i + j > n - 1) {
				a[i][j] = 2;
			}
			else if(i > j && i + j < n - 1) {
				a[i][j] = 3;
			}
			else {
				a[i][j] = 0;
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

void ex5Var16() {

	matrice(5);

}

/*Un algoritm generează în ordine crescătoare toate numerele de n cifre, folosind doar cifrele
3, 5 şi 7. Dacă pentru n=5, primele cinci soluţii generate sunt 33333, 33335, 33337,
33353, 33355, precizaţi care sunt ultimele trei soluţii generate, în ordinea generării*/

int s[100], m = 5;
int v[3] = { 3,5,7 };


void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] > s[k]) {
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

	for (int i = 0; i < 3; i++) {
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

void ex2Var16() {

	back(0);

}

/*Scrieţi definiţia completă a subprogramului multiplu care are 3 parametri: a, prin care
primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât
1000, n, numărul efectiv de elemente ale tabloului şi k, un număr natural (k≤9).
Subprogramul returnează numărul de elemente din tablou care sunt multipli ai numărului k
şi au ultima cifră egală cu k.
Exemplu: dacă n=6, a=(9,273,63,83,93,123), iar k=3, subprogramul va returna
valoarea 4.*/


void multiplii(int v[], int d, int k) {

	for (int i = 0; i < d; i++) {
		if (v[i] % k == 0 && v[i] % 10 == k) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var16() {

	int v[100], d;

	citire(v, d);
	multiplii(v, d, 3);

}

/*În fişierul numere.txt sunt memorate maximum 10000 de numere naturale cu cel mult 9
cifre fiecare. Fiecare linie a fişierului conţine câte un număr. Se cere afişarea pe ecran, în
ordine descrescătoare, a tuturor cifrelor care apar în numerele din fişier. Alegeţi un algoritm
de rezolvare eficient din punct de vedere al timpului de executare.
Exemplu: dacă fişierul numere.txt conţine:
267
39628
79
se va tipări 9987766322.*/

void sortareDescrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] < v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void descrescatorDupaCifre(int v[], int d) {

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		while (v[i]) {
			a[b] = v[i] % 10;
			b++;
			v[i] /= 10;
		}
	}

	sortareDescrescator(a, b);

	for (int i = 0; i < b; i++) {
		cout << a[i];
	}

}

void ex4Var16() {

	int v[100], d;

	citire(v, d);
	descrescatorDupaCifre(v, d);

}


















