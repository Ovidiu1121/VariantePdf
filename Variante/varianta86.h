#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤10) apoi
construieşte în memorie o matrice cu 2*n linii şi 2*n coloane, numerotate de la 1 la 2*n,
astfel încât parcurgând doar liniile impare ale matricei de sus în jos şi fiecare linie impară de
la stânga la dreapta se obţin în ordine strict crescătoare toate numerele impare cuprinse în
intervalul [1,4*n2], iar parcurgând doar liniile pare ale matricei de sus în jos şi fiecare linie
pară de la dreapta la stânga se obţin în ordine strict crescătoare toate numerele pare
cuprinse în intervalul [1,4*n2], ca în exemplu.
Programul afişează pe ecran matricea obţinută, câte o linie a matricei
pe câte o linie a ecranului, elementele fiecărei linii fiind separate prin
câte un spaţiu.
Exemplu: pentru n=2 se obţine matricea alăturată. (10p.)
1 3 5 7
8 6 4 2
9 11 13 15
16 14 12 10*/

void matrice(int n) {

	int a[100][100];

	int k = 1;
	int f = 2;
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			if (i % 2 == 0) {
				a[i][j] = k;
				k += 2;
			}
			else {
				a[i][n - j +1] = f;
				f += 2;
			}
		}
	}

	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var86() {

	matrice(2);

}

//s3

/*Scrieţi definiţia completă a subprogramului numar, cu trei parametri, care primeşte prin
intermediul parametrului n un număr natural format din cel mult 9 cifre, iar prin intermediul
parametrilor c1 şi c2 câte o cifră nenulă; subprogramul retunează numărul obţinut prin
înlocuirea în numărul primit prin parametrul n a fiecărei apariţii a cifrei c1 cu cifra c2. Dacă
c1 nu apare în n, subprogramul returnează valoarea n.
Exemplu: pentru n=12445, c1=4 şi c2=7 valoarea returnată va fi 12775.*/

void inlocuire(int n, int c1, int c2) {
	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}
	int x = 0;
	for (int i = d - 1; i >= 0;i--) {
		if (v[i] == c1) {
			x = x * 10 + c2;
		}
		else {
			x = x * 10 + v[i];
		}
	}
	cout << x;
}

void ex3Var86() {

	inlocuire(12445, 4, 7);

}

/*Fişierul text bac.txt conţine cel puţin două şi cel mult 1000 de numere naturale distincte,
dintre care cel puţin două sunt pare. Numerele sunt separate prin câte un spaţiu şi fiecare
dintre ele are cel mult 9 cifre.
a) Scrieţi un program C/C++ care determină cele mai mari două numere pare din fişier,
utilizând un algoritm eficient din punct de vedere al timpului de executare şi al spaţiului de
memorie utilizat. Cele două numere vor fi afişate pe ecran, în ordine descrescătoare,
separate printr-un spaţiu.
Exemplu: dacă fişierul conţine numerele: 5123 8 6 12 3 se va afişa: 12 8*/

void nrMaxPare(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			if (v[i] > maxim) {
				maxim = v[i];
			}
		}
	}
	cout << maxim << " ";
	int k = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0 && v[i] != maxim ) {
			if (v[i] > k) {
				k = v[i];
			}
		}
	}
	cout << k;
}

void ex4Var86() {

	int v[100], d;

	citire(v, d);
	nrMaxPare(v, d);

}





















