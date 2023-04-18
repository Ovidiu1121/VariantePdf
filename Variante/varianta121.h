#include "citire_afisare.h"

/*Subprogramul divX are doi parametri, n și x, prin care primește câte un număr natural din intervalul
[2,50]. Subprogramul afișează pe ecran, în ordine descrescătoare, separate prin câte un spațiu,
primele n numere naturale nenule divizibile cu x.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=4 și x=15 în urma apelului se afișează numerele 60 45 30 15 */

void primeleNrDivizibile(int n, int x) {

	while (x) {
		cout << x * n << " ";
		x--;
	}

}

void ex1Var1() {

	primeleNrDivizibile(15, 4);


}

/*Scrieți un program C/C++ care citește de la tastatură numărul natural n (n[2,102]) și elementele unui
tablou bidimensional cu n linii și n coloane, numere naturale din intervalul [0,109].
Programul afișează pe ecran, separate prin câte un spațiu, elementele primului pătrat
concentric, parcurs în sens invers al acelor de ceasornic, începând din colțul său stângasus, ca în exemplu. Primul pătrat concentric este format din prima și ultima linie, prima și
ultima coloană a tabloului.
Exemplu: pentru n=5 și tabloul alăturat
1 3 1 8 6
2 9 2 7 4
3 5 8 5 2
4 1 6 3 0
5 6 7 8 9
, se afișează pe ecran numerele
1 2 3 4 5 6 7 8 9 0 2 4 6 8 1 3 
*/

void chenarExterior(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		cout << a[i][0] << " ";
	}
	for (int i = 1; i < m; i++) {
		cout << a[m - 1][i] << " ";
	}
	for (int i = n - 2; i >= 0; i--) {
		cout << a[i][n - 1] << " ";
	}
	for (int i = m - 2; i > 0; i--) {
		cout << a[0][i] << " ";
	}

}

void ex2Var1() {

    int a[100][100], n, m;

    citireMatrice(a, n, m);
    chenarExterior(a, n, m);

}

/*Fișierul bac.in conține cel mult 106 numere naturale din intervalul [0,109], separate prin câte un
spațiu. Se cere să se afișeze pe ecran, în ordine descrescătoare, cele mai mari două numere de două
cifre distincte care NU se află în fișier. Numerele afișate sunt separate printr-un spațiu, iar dacă nu
există două astfel de numere, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient
din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul bac.in conține numerele 12 235 123 67 98 6 96 94 123 67 98 100
se afișează pe ecran, în această ordine, numerele 97 95.
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. */

void nrMax(int v[], int d) {

	int k = 2, m = 99;

	while (k) {
		if (nrGasit(v, d, m) == false) {
			cout << m << " ";
			m--;
			k--;
		}
		else {
			m--;
		}
	}

}

void ex3Var1() {

	int v[100], d;
	citire(v, d);
	nrMax(v, d);


}















