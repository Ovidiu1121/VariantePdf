#include "citire_afisare.h"


/*Subprogramul ranguri are un singur parametru, n, prin care primeşte un număr natural
(n∈[0,109]). Subprogramul returnează numărul de cifre ale lui n care sunt egale cu
pozițiile pe care le ocupă în scrierea acestuia. Pozițiile sunt numerotate de la dreapta la
stânga, iar cifra unităților ocupă poziția 0.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=6594270, subprogramul returnează numărul 4. */

void pozitii(int n) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}
	int ct = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] == i) {
			ct++;
		}
	}
	cout << ct;
}

void ex3Var2() {

	pozitii(6594270);

}

/*Fișierul bac.in conține pe prima linie două numere naturale din intervalul [2,104], m și
n, iar pe fiecare dintre următoarele două linii câte un șir de m, respectiv n numere naturale
din intervalul [0,109], ordonate strict crescător. Numerele aflate pe aceeași linie a
fișierului sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran, în ordine strict descrescătoare, numerele pare care apar
în cel puțin unul dintre cele două șiruri. Numerele afișate sunt separate prin câte un spațiu,
iar dacă nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista.
Pentru determinarea numerelor cerute se va utiliza un algoritm eficient din punctul de
vedere al timpului de executare.
Exemplu: dacă fișierul conține numerele
5 6
1 4 8 9 10
2 4 10 12 15 18
se afișează pe ecran
18 12 10 8 4 2*/

void vectori(int a[], int b, int v[], int d) {
	int x[100], y = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			if (nrGasit(x, y, v[i]) == false) {
				x[y] = v[i];
				y++;
			}
		}
	}
	for (int i = 0; i < b; i++) {
		if (a[i] % 2 == 0) {
			if (nrGasit(x, y, a[i]) == false) {
				x[y] = a[i];
				y++;
			}
		}
	}
	sortareDescrescator(x, y);

	for (int i = 0; i < y; i++) {
		cout << x[i] << " ";
	}
}

void ex4Var2() {

	int v[5] = { 1, 4, 8, 9, 10 };
	int a[6] = { 2, 4, 10, 12, 15, 18 };

	vectori(a, 6, v, 5);


}















