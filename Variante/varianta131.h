#include "citire_afisare.h"


/*Două numere se numesc oglindite dacă fiecare se obține din celălalt, prin parcurgerea cifrelor acestuia
de la dreapta la stânga. Două numere se numesc impar-oglindite dacă numerele obținute din acestea,
prin îndepărtarea tuturor cifrelor lor pare, sunt oglindite.
Subprogramul imog are trei parametri:
• x și y, prin care primește câte un număr natural din intervalul [0,109];
• rez, prin care furnizează valoarea 1 dacă x și y sunt impar-oglindite sau valoarea 0 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=523 și y=84356, după apel rez=1,
iar dacă x=523 și y=84536 sau x=523 și y=84576 sau x=40 și y=86, după apel rez=0*/

int eliminareCifrePare(int n) {

	int aux = 0;

	while (n) {
		if (n % 10 % 2 == 1) {
			aux = aux * 10 + n % 10;
		}
		n /= 10;
	}
	int k = 0;
	while (aux) {
		k = k * 10 + aux % 10;
		aux /= 10;
	}
	return k;
}

void nrImparOglindite(int a, int b) {

	int x = eliminareCifrePare(a);
	int y = eliminareCifrePare(b);

	int k = 0;

	while (x) {
		k = k * 10 + x % 10;
	    x /= 10;
	}

	if (k == y) {
		cout << 1;
	}
	else cout << 0;

}

void ex1Var11() {

	nrImparOglindite(523, 84356);

}


/*Scrieți un program C/C++ care citește de la tastatură numere naturale: n (n[2,20]), k (k[2,n]) și n∙n
numere din intervalul [0,109], elemente ale unui tablou bidimensional cu n linii și n coloane. Programul
transformă tabloul în memorie, interschimbând șirul elementelor situate pe linia a k-a, în stânga diagonalei
principale, parcurse de la stânga la dreapta, cu șirul elementelor situate pe coloana a k-a, deasupra
diagonalei principale, parcurse de sus în jos, ca în exemplu. Elementele tabloului obținut sunt afișate pe
ecran, fiecare linie pe câte o linie a ecranului, cu elementele fiecărei linii separate prin câte un spațiu.
Exemplu: pentru n=5,
k=4 și tabloul
2 4 3 5 6
8 0 9 8 7
2 6 9 0 5
6 1 3 6 9
7 3 9 4 2
se obține tabloul 2 4 3 6 6
8 0 9 1 7
2 6 9 3 5
5 8 0 6 9
7 3 9 4 2*/

void interschimbare(int a[100][100], int n, int m, int k) {

	int v[100], d = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == k && j < k) {
				v[d] = a[i][j];
				d++;
			}
		}
		
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == k && j < k) {
				a[k][j] = a[j][k];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (j == k && i < k) {
				a[i][k] = v[i];
			}
		}
	}

}

void ex2Var11() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	interschimbare(a, n, m, 3);
	afisareMatrice(a, n, m);

}


/*Se consideră șirul 1, 3, 7, 13, 21, 31, 43 ... definit astfel: f0=1, iar fn=fn-1+2n, dacă n≥1 (unde n
este un număr natural).
Se citesc de la tastatură două numere naturale din intervalul [1,109], x și y (x<y), reprezentând doi
termeni aflați pe poziții consecutive în șirul dat, și se cere să se scrie în fișierul text bac.out, separați
prin câte un spațiu, toți termenii șirului mai mici sau egali cu y, în ordine inversă a apariției lor în șir.
Proiectați un algoritm eficient din punctul de vedere al spațiului de memorie și al timpului de executare.
Exemplu: dacă x=21 și y=31, fişierul conţine valorile
31 21 13 7 3 1*/

void f(int n, int y) {
	
	int f1 = n + 2;
	int fi=0;

	cout << n << " " << f1 << " ";
	int i = 2;
	while (fi < y) {
		fi = f1 + 2 * i;
		cout << fi << " ";
		f1 = fi;
		i++;
	}

}

void ex3Var11() {

	f(1,31);

}









