#include "citire_afisare.h"



/*Folosind un algoritm de generare putem obţine numere naturale de k cifre care au suma
cifrelor egală cu un număr natural s. Astfel, pentru valorile k=2 şi s=6 se generează, în
ordine, numerele: 15, 24, 33, 42, 51, 60. Care va fi al treilea număr generat pentru k=4 şi
s=5?*/

int s[100], n = 6, m = 2, suma = 6;

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	if (s[0] == 0) {
		return 0;
	}

	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum += s[i];
	}
	if (sum != suma) {
		return 0;
	}
	return 1;
}

int solutie(int k) {

	if (k == m - 1) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k) {

	for (int i = 0; i <= n; i++) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex1Var33() {

	back(0);

}

/*Subprogramul sum3 primeşte prin parametrul x un tablou unidimensional, cu cel mult 100
de elemente, numere întregi cu cel mult 4 cifre fiecare, iar prin parametrul n un număr
natural ce reprezintă numărul efectiv de elemente ale tabloului x (n≤100). Scrieţi definiţia
completă a subprogramului sum3 care returnează suma elementelor tabloului care sunt
divizibile cu 3. Dacă tabloul nu conţine nicio valoare divizibilă cu 3, subprogramul va returna
0.*/

void sumaNumereDivizibile(int v[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 3 == 0) {
			s += v[i];
		}
	}
	cout << s;
}

void ex3Var33() {

	int v[100], d;

	citire(v, d);
    sumaNumereDivizibile(v, d);

}

/*Pe prima linie a fişierului numere.txt se află un număr natural n (n≤100), iar pe
următoarele n linii, câte n numere naturale despărţite prin câte un spaţiu, fiecare având cel
mult 9 cifre. Printre aceste numere se află cel puţin unul cu 3 cifre şi cel puţin unul cu 4 cifre.
a) Scrieţi în limbajul C/C++, un algoritm eficient din punct de vedere al gestionării memoriei
care citeşte din fişier datele existente şi determină şi afişează pe ecran, separate printr-un
spaţiu, două numere din fişier, x şi y, unde x este cel mai mare număr de trei cifre, iar y
este acel număr pentru care |x-y| are valoare minimă. Dacă sunt mai multe valori pentru y
care respectă condiţia impusă se va afişa numai una dintre ele.
Explicaţi în limbaj natural metoda utilizată justificând eficienţa acesteia
Exemplu: dacă fişierul numere.txt are
conţinutul alăturat
5
112 333 1 500 1100
1 95 7 97 12
45 800 0 7 89
1 5 17 197 102
45 86 0 7 9, se va afişa: 800 1100*/

bool nrDe3Cifre(int n) {

	int ct = 0;

	while (n) {
		ct++;
		n /= 10;
	}
	if (ct == 3) {
		return true;
	}
	return false;
}

int maximDe3Cifre(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (nrDe3Cifre(v[i]) == 1) {
			if (v[i] > maxim) {
				maxim = v[i];
			}
		}
	}
	return maxim;
}

void modulMaxim(int v[], int d) {

	int m = maximDe3Cifre(v, d);
	int maxim = 0;
	int f = 0;
	for (int i = 0; i < d; i++) {
		int k = abs(m - v[i]);
		if (k < maxim) {
			maxim = k;
			f = v[i];
		}
	}
	cout << f;
}

void ex4Var33() {

	int v[100], d;

	citire(v, d);
	modulMaxim(v, d);

}
















