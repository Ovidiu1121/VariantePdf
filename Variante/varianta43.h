#include "varianta42.h"


/*Scrieţi definiţia completă a unui subprogram P cu doi parametri, care primeşte prin
intermediul primului parametru, n, un număr natural nenul (1≤n≤100) şi prin intermediul
celui de-al doilea parametru, a, un tablou unidimensional cu elementele numerotate de la 1
la n, numere întregi de cel mult 4 cifre fiecare. Subprogramul returnează suma tuturor
numerelor impare aflate pe poziţii pare din tablou.
Exemplu: dacă n=6, iar şirul a este format din elementele (3,12,7,1,4,3), atunci la apel se
va returna 4.*/

void sumaPozitiiPare(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		if (i % 2 == 1) {
			if (v[i] % 2 == 0) {
				s += v[i];
			}
		}
	}
	cout << s;
}

void ex3Var43() {

	int v[100], d;

	citire(v, d);
	sumaPozitiiPare(v, d);
}

/*Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului
de executare, cel mai mare număr ce se poate forma cu toate cifrele conţinute de a doua
linie a fişierului numere.txt. Numărul determinat se va afişa pe ecran.
Exemplu: daca fişierul numere.txt are următorul conţinut:
7
2 5 3 1 5 8 9
atunci pe ecran se va afişa: 9855321.*/

void celMaiMareNrVec(int v[], int d) {

	sortareDescrescator(v, d);

	int x = 0;

	for (int i = 0; i < d; i++) {
		x = x * 10 + v[i];
	}
	cout << x;
}

void ex4Var43() {

	int v[100], d;

	citire(v, d);
	celMaiMareNrVec(v, d);
}













