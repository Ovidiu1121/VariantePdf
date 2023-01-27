#include "citire_afisare.h"


//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură numerele întregi m şi n (1≤m≤24,
1≤n≤24) şi elementele unui tablou bidimensional cu m linii şi n coloane, numere întregi
distincte de cel mult 4 cifre fiecare, şi elimină din tablou, la nivelul memoriei, linia şi coloana
corespunzătoare elementului de valoare minimă. Programul va afişa tabloul obţinut pe ecran
pe m-1 linii, elementele fiecărei linii fiind separate prin câte un spaţiu. (10p.)
5.
Exemplu: pentru m=3 şi n=4 şi tabloul de mai jos
2 7 1 4
14 6 12 3
9 22 8 5
 Pe ecran se va afişa:
 14 6 3
 9 22 5 */

void eliminareLinie(int a[100][100], int&n,int m, int l) {

	for (int i = l; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = a[i + 1][j];
		}
	}
	n--;
}

void eliminareColoana(int a[100][100], int n, int& m, int c) {

	for (int i = 0; i < n; i++) {
		for (int j = c; j < m; j++) {
			a[i][j] = a[i][j + 1];
		}
	}
	m--;

}

void minim(int a[100][100], int& n, int &m) {

	int minim = INT_MAX;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j<m; j++) {
			if (a[i][j] < minim) {
				minim = a[i][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == minim) {
				eliminareLinie(a, n, m, i);
				eliminareColoana(a, n, m, j);
			}
		}
	}

}

void ex5Var92() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	minim(a, n, m);
	afisareMatrice(a, n, m);
}

//s3

/*Având la dispoziţie cifrele 0, 1 şi 2 se pot genera, în ordine crescătoare, numere care au
suma cifrelor egală cu 2. Astfel, primele 6 soluţii sunt 2, 11, 20, 101, 110, 200. Folosind
acelaşi algoritm, se generează numere cu cifrele 0, 1, 2 şi 3 care au suma cifrelor egală
cu 4. Care va fi al 7-lea număr din această generare? */

int s[100], n = 3, m = 2;

void tipar() {

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	cout << endl;
}

int valid(int k) {

	if (s[0] == 0) {
		return 0;
	}

	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 0;
		}
	}

	int suma = 0;

	for (int i = 0; i < k; i++) {
		suma += s[i];
	}

	if (suma != 2) {
		return 0;	
	}

	return 1;
}

int solutie(int k) {

	if (k <= n - 1) {
		return 1;
	}
	return 0;
}

void back(int k) {

	for (int i = 0; i <= m; i++) {
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

void ex1Var92() {

	back(0);

}

/*Subprogramul ordonare primeşte prin parametrul x un tablou unidimensional cu cel mult
100 de elemente numere reale, iar prin parametrul n un număr întreg ce reprezintă numărul
efectiv de elemente ale tabloului x. Subprogramul ordonează crescător elementele tabloului
şi furnizează, tot prin intermediul parametrului x, tabloul ordonat.
a) Scrieţi numai antetul acestui subprogram. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale, n şi m
(1≤n≤100 şi m≤n), şi apoi un şir de n numere reale distincte. Folosind apeluri utile ale
subprogramului ordonare, programul afişează pe prima linie a ecranului, cele mai mari m
elemente din şirul citit (în ordine crescătoare a valorilor lor), iar pe a doua linie de ecran,
cele mai mici m elemente din şir (în ordine descrescătoare a valorilor lor). Numerele afişate
pe aceeaşi linie vor fi separate prin câte un spaţiu. (10p.)
Exemplu : dacă n=9, m=3, iar şirul este (14.2, 60, -7.5, -22, 33.8, 80, 4, 10, 3) se va
afişa pe ecran:
33.8 60 80
3 -7.5 -22*/

void nrMaxSiMin(int v[], int d) {

	sortareCrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (i >= d - 3) {
			cout << v[i] << " ";
		}
	}

	sortareDescrescator(v, d);
	cout << endl;
	for (int i = 0; i < d; i++) {
		if (i >= d - 3) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var92() {

	int v[100], d;

	citire(v, d);
	nrMaxSiMin(v, d);
}











