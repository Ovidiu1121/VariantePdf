#include "varianta33.h"



/*Subprogramul max primeşte ca parametru un tablou unidimensional x cu cel mult 100 de
elemente numere întregi, care sunt, în ordine, termenii unei progresii aritmetice şi un număr
natural n, care reprezintă dimensiunea tabloului. Scrieţi definiţia completă a subprogramului
max care returnează cel mai mare termen al progresiei aritmetice. Alegeţi un algoritm de
rezolvare eficient din punct de vedere al timpului de executare.*/

void maximMedieAritmetica(int v[], int d) {
	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] < maxim) {
			maxim = v[i];
		}
	}
	cout << maxim;
}

void ex3aVar34() {

	int v[100], d;

	citire(v, d);
	maximMedieAritmetica(v, d);

}

/*Pe prima linie a fişierului numere.txt se află un număr natural n (n≤100), iar pe
următoarele n linii, câte n numere întregi cu cel mult 4 cifre fiecare. Scrieţi programul C/C++
care citeşte din fişier datele existente, determină liniile din fişier pe care s-au memorat în
ordine termenii unei progresii aritmetice şi afişează pe ecran, folosind apeluri ale
subprogramului max cel mai mare număr (diferit de cel situat pe prima linie) din fişier, care în
plus este termenul unei progresii aritmetice.
Exemplu: dacă fişierul numere.txt are conţinutul
alăturat
5
5 7 3 1 9
-9 -7 -5 -3 -1
2 5 8 14 11
50 40 30 20 10
18 17 16 15 14,
se va afişa 50, deoarece progresiile aritmetice sunt:
(-9 -7 -5 -3 -1),
(50 40 30 20 10) şi
(18 17 16 15 14)
*/

bool progremieAritmeticaLinie(int a[100][100], int n,int m, int l) {

	int k = abs(a[l][0] - a[l][1]);

	for (int i = 1; i < m-1; i++) {
		if (abs(a[l][i] - a[l][i + 1]) != k) {
			return false;
		}
	}
	return true;
}

void maximLinieMA(int a[100][100], int n, int m) {
	int maxim = 0;
	for (int i = 0; i < n; i++) {
		if (progremieAritmeticaLinie(a, n, m, i) == 1) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] > maxim) {
					maxim = a[i][j];
				}
			}
		}
	}
	cout << maxim;
}

void ex3cVar34() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	maximLinieMA(a, n, m);

}


















