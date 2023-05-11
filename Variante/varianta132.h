#include "citire_afisare.h"


/*Un număr y este numit frate mai mare al unui număr x dacă x și y au același număr de cifre și fiecare cifră
a lui y se poate obține din cifra aflată pe aceeași poziție în x adunând la aceasta valoarea 1.
Subprogramul frate are doi parametri:
• x, prin care primește un număr natural (x[0,109]);
• y, prin care furnizează fratele mai mare al lui x, sau -1, dacă nu se poate obține un astfel de număr.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=1027, după apel y=2138, iar dacă x=9027, după apel y=-1.*/

void frateMaiMare(int n) {

	int x=0,c,aux=n;

	while (aux) {
		c = aux % 10;
		aux /= 10;
	}

	if (c == 9) {
		return;
	}

	while (n) {
		x = x * 10 + n % 10 + 1;
		n /= 10;
	}
	int k=0;
	while (x) {
		k = k * 10 + x % 10;;
		x /= 10;
	}
	cout << k;
}

void ex1Var12() {

	frateMaiMare(8345);

}

/*Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n[2,20]), k (k[1,n]) și n∙n
numere din intervalul [0,109], elemente ale unui tablou bidimensional cu n linii și n coloane. Programul
transformă tabloul în memorie, deplasând circular spre dreapta, cu câte o poziție, toate elementele situate pe
linia a k-a, în stânga diagonalei secundare, ca în exemplu. Elementele tabloului obținut sunt afișate pe ecran,
fiecare linie pe câte o linie a ecranului, cu elementele fiecărei linii separate prin câte un spațiu.
Exemplu: pentru n=5, k=2 și tabloul 
2 3 4 5 6
2 4 6 8 0
7 8 9 0 1
3 5 7 9 1
7 3 8 5 6
se obține tabloul
2 3 4 5 6
6 2 4 8 0
7 8 9 0 1
3 5 7 9 1
7 3 8 5 6 */

void matrice(int a[100][100], int n, int k) {

	for (int i = 0; i < n; i++) {
		if (i == k) {
			int aux = a[i][n - k - 2];
			for (int j = n - k - 3; j >=0; j--) {
				if (i + j < n - 1) {
					a[i][j + 1] = a[i][j];
				}
			}
			a[i][0] = aux;
		}
	}

}

void ex2Var12() {

	int a[100][100], n;

	citireMatrice(a, n, n);
	matrice(a, n, 2);
	afisareMatrice(a, n, n);

}


/*Fișierul bac.txt conține un șir de cel mult 105 numere naturale din intervalul [1,109], separate prin
câte un spațiu. Se cere să se afișeze pe ecran cea mai mare poziție pe care ar putea-o ocupa primul
termen al șirului aflat în fișier în șirul format cu aceleași valori, ordonat descrescător. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține numerele 15 7 15 17 6 4 21
se afișează pe ecran 4 (15 se află pe a treia și pe a patra poziție în șirul 21, 17, 15, 15, 7, 6, 4)*/

int pozitiePrimul(int v[], int d) {

	int k = v[0];

	sortareCrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (v[i] == k) {
			return i;
		}
	}
	return - 1;
}

void ex3Var12() {

	int v[100], d;

	citire(v, d);
	cout << pozitiePrimul(v, d);

}











