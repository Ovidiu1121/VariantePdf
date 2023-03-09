#include "citire_afisare.h"


//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100)şi apoi
elementele unui tablou bidimensional cu n linii şi n coloane, care memorează numere
naturale cu cel mult 9 cifre fiecare; programul afişează pe ecran acele valori din tablou care
sunt strict mai mici decât toate elementele cu care se învecinează direct (aflate pe aceeaşi
linie dar pe o coloană alăturată sau pe aceeaşi coloană dar pe o linie alăturată), ca în
exemplu. Numerele afişate vor fi separate prin câte un spaţiu.
Exemplu: pentru n=4 şi tabloul alăturat se afişează numerele: 2 0 (2 se
învecinează direct cu 4, 3, 6 şi 9, şi este mai mic decât acestea, iar 0 se
învecinează direct cu 6, 9 şi 1 şi este mai mic decât acestea). (10p.)
5 4 7 9
6 2 3 4
0 9 8 5
1 3 8 6*/

void nrMaiMici(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0) {
				if (a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j]) {
					cout << a[i][j] << " ";
				}
			}
			else if (i == n - 1) {
				if (a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1] && a[i][j] < a[i - 1][j]) {
					cout << a[i][j] << " ";
				}
			}
			else if (j == 0) {
				if (a[i][j] < a[i][j + 1] && a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j]) {
					cout << a[i][j] << " ";
				}
			}
			else if (j == n - 1) {
				if (a[i][j] < a[i][j - 1] && a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j]) {
					cout << a[i][j] << " ";
				}
			}
			else if (a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1] && a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j]) {
				cout << a[i][j] << " ";
			}
		}
	}

}

void ex5Var100() {

	int a[100][100], n;

	citireMatrice(a, n, n);
	nrMaiMici(a, n);

}


//s3

/*Scrieţi definiţia completă a subprogramului divizor, cu trei parametri, prin care primeşte 3
numere naturale nenule cu cel mult 9 cifre fiecare şi returnează numărul divizorilor comuni
tuturor celor 3 numere.
Exemplu: dacă numerele primite ca parametri sunt 24, 20 şi 12, subprogramul returnează
valoarea 3 (divizorii comuni sunt 1, 2 şi 4). */

void divizoriComuni(int a, int b, int c) {

	int d;

	if (a < b < c) {
		d = a;
	}
	else if (b < a < c) {
		d = b;
	}
	else if (c < a < b) {
		d = c;
	}

	for (int i = 1; i < d; i++) {
		if (a % i == 0 && b % i == 0 && c % i == 0) {
			cout << i << " ";
		}
	}

}

void ex3Var100() {

	divizoriComuni(24, 20, 12);

}

/*Se consideră un şir s format după regula alăturată, unde
s-a notat cu aӨb numărul obţinut prin concatenarea
cifrelor lui a şi b, în această ordine.
Exemplu: pentru x=2 se obţine şirul:
2, 3, 32, 323, 32332,....
Fişierul text SIR.TXT conţine pe prima linie două numere, x (1≤x≤20) şi k (1≤k≤5000),
separate printr-un spaţiu, iar pe a doua linie un număr format din exact k cifre, reprezentând
un termen al şirului s (diferit de x). Cifrele numărului nu sunt separate prin spaţii.
a) Scrieţi un program C/C++ care, utilizând un algoritm eficient din punct de vedere al
timpului de executare şi al memoriei utilizate, afişează pe ecran acel termen din şir care îl
precede pe cel citit din fişier.
Exemplu: dacă fişierul conţine valorile alăturate, se va afişa pe ecran
numărul 323. 
2 5
32332*/


void ex4Var100() {



}





















