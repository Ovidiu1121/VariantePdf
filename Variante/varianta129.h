#include "citire_afisare.h"


/*Subprogramul divizor are patru parametri:
• a, b și k, prin care primește câte un număr natural (a[0,109], b[a,109], k[1,9]);
• nr, prin care furnizează numărul de valori naturale din intervalul [a,b] care sunt divizibile cu k și au
ultima cifră egală cu k. Scrieți definiția completă a subprogramului.
Exemplu: dacă a=3, b=50 și k=4, în urma apelului, nr=3 (pentru numerele 4, 24, 44).*/

void nrDivizibile(int a, int b, int k) {
	int ct = 0;
	for (int i = a; i <= b; i++) {
		if (i % k == 0 && i % 10 == k) {
			ct++;
		}
	}
	cout << ct;
}

void ex1Var9() {

	nrDivizibile(3, 50, 4);

}

/*Fișierul numere.txt conține cel mult 105 numere naturale din intervalul [1,109], câte unul pe fiecare
linie. Se cere să se afișeze pe ecran cel mai mare număr care se poate forma cu toate cifrele care apar
în numerele din fișier, ca în exemplu.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul are conținutul alăturat, se afișează
9988887766333220*/

void nrMax(int v[], int d) {

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

void ex3Var9() {

	int v[100], d;

	citire(v, d);
	nrMax(v, d);

}



















