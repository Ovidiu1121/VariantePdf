#include "citire_afisare.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură numerele naturale m şi n din intervalul
[1,24], apoi construieşte în memorie şi afişează pe ecran un tablou bidimensional cu m
linii şi n coloane astfel încât prin parcurgerea acestuia linie cu linie de sus în jos şi fiecare
linie de la stânga la dreapta, se obţin în ordine descrescătoare toate numerele naturale de
la 1 la m*n, ca în exemplu.
5.
Fiecare linie a tabloului este afişată pe câte o linie a ecranului, elementele
aceleiaşi linii fiind separate prin câte un spaţiu.
Exemplu: pentru m=4 şi n=3 se va construi şi afişa tabloul alăturat. (10p.)
12 11 10
9 8 7
6 5 4
3 2 1*/

void matrice(int n, int m) {

	int a[100][100];

	int k = m * n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = k;
			k--;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var22() {

	matrice(4,3);

}

/*Scrieţi definiţia completă a unui subprogram, nz, cu un parametru întreg n (0<n≤32000),
care returnează numărul zerourilor de la sfârşitul numărului n!.*/

void contorZero(int n) {
	int p = 1;
	int ct = 0;
	for (int i = 1; i <= n; i++) {
		p *= i;
	}
	while (p) {
		if (p%10 != 0) {
			cout << ct;
			return;
		}
		else {
			ct++;
		}
		p /= 10;
	}
}

void ex3aVar22() {

	 contorZero(12);

}

/*Scrieţi programul C/C++ care citeşte din fişierul text BAC.TXT numărul întreg n
(1≤n≤10000) şi un şir de n perechi de numere întregi a b (1≤a≤b≤32000), fiecare pereche
fiind scrisă pe o linie nouă a fişierului, cu un spaţiu între cele două numere. Programul
afişează pe ecran pentru fiecare pereche a,b cel mai mare număr natural din intervalul
închis [a,b]care este o putere a lui 2 sau numărul 0 dacă nu există nicio putere a lui 2 în
intervalul respectiv. Numerele afișate pe ecran se scriu în linie, separate prin câte un
spașiu. Un număr p este putere a lui 2 dacă există un număr natural k astfel încât p=2k.
Exemplu: dacă fişierul BAC.TXT conţine numerele
3
2 69
10 20
19 25
se va afişa: 64 16 0.*/

bool putereLui2(int n) {

	while (n % 2 == 0) {
		n /= 2;
	}
	
	if (n == 1) {
		return true;
	}
	else {
		return false;
	}
}

int maximLinie(int a[100][100], int m, int l) {

	int x = a[l][0], y = a[l][1];
	int maxim = 0;

	if (x > y) {
		for (int i = y; i <= x; i++) {
			if (putereLui2(i) == true) {
				if (i > maxim) {
					maxim = i;
				}
			}
		}
	}
	else {
		for (int i = x; i <= y; i++) {
			if (putereLui2(i) == true) {
				if (i > maxim) {
					maxim = i;
				}
			}
		}
	}
	return maxim;
}

void maximeMatrice(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		cout << maximLinie(a, n, i) << " ";
	}

}

void ex4Var22() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	maximeMatrice(a, n, m);

}


















