#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane care să conţină primele n2
 numere
naturale pare. Prima linie a matricei va conţine, în ordine crescătoare, valorile 0, 2,.., 2n-2;
a doua linie va conţine, în ordine, valorile 2n, 2n+2,.., 4n-2; a treia linie va conţine, în
ordine, valorile 4n, 4n+2,.., 6n-2, iar ultima linie va conţine, în ordine, valorile 2n2
-2n,
2n2
-2n+2,.., 2n2
-2.
5.
Programul afişează pe ecran matricea construită, câte o linie a matricei
pe câte o linie a ecranului, elementele de pe aceeaşi linie fiind despărţite
prin câte un spaţiu.
Exemplu: pentru n=3 se va afişa matricea alăturată. (10p.)
0 2 4
6 8 10
12 14 16
*/

void matrice(int n) {

	int a[100][100];
	int k = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = k;
			k += 2;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var98() {

	matrice(3);

}

//s3

/*Scrieţi în limbajul C/C++ definiţia completă a subprogramului numar, cu exact doi parametri,
care primeşte prin intermediul parametrului x un număr natural nenul de cel mult 2 cifre, şi
prin intermediul parametrului y un număr natural nenul de cel mult 9 cifre. Subprogramul
returnează cel mai mare număr natural z pentru care există un număr natural k astfel încât
z=xk şi z≤y.
Exemplu: pentru y=18 şi x=2 subprogramul va returna valoarea 16(=24
<18)*/

int numar(int x, int y) {

	int z = 0, k = x;

	while (k <= y) {
		z = k;
		k *= x;
	}
	return z;

}

void ex3Var98() {

	cout << numar(2, 18);

}

/*Pe prima linie a fişierului text DATE.TXT se află două numere naturale nenule n şi m
(n≤3000, m≤3000), pe a doua linie un şir de n numere naturale, ordonate crescător, având
fiecare cel mult 9 cifre, iar pe linia a treia un şir de m numere naturale, ordonate
descrescător, având fiecare cel mult 9 cifre. Numerele sunt despărţite, în cadrul liniilor, prin
câte un spaţiu.
a) Scrieţi programul C/C++ care citeşte numerele din fişier şi afişează, pe ecran, doar
numerele pare din cele două şiruri, ordonate crescător. Programul nu va afişa nimic dacă nu
există numere pare în cele două şiruri. Alegeţi o metodă de rezolvare eficientă ca timp de
executare.
Exemplu: dacă fişierul are conţinutul alăturat
5 8
2 4 7 37 42
88 88 67 45 42 32 4 1, 
pe ecran se
va afişa: 2 4 4 32 42 42 88 88*/

void nrPare(int v[], int d, int a[], int b) {

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			cout << v[i] << " ";
		}
	}
	for (int i = 0; i < b; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}
}

void ex4Vra98() {
	int a[100], b = 0, v[100], d = 0;

	citire(v, d);
	citire(a, b);

	nrPare(v, d, a, b);

}













