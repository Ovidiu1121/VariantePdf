#include "citire_afisare.h"


/*Folosind cifrele {3,4,5} se generează, în ordinea crescătoare a valorii, toate numerele
impare formate din trei cifre distincte. Astfel se obţin, în ordine, numerele: 345, 435, 453,
543. Folosind aceeaşi metodă, se generează numerele impare formate din patru cifre
distincte din mulţimea {2,3,4,5}. Care va fi al 5-lea număr generat?*/

int s[100]{}, n = 4, m = 5;

void tipar() {

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	cout << endl;
}

int valid(int k) {


	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 0;
		}
	}

	return 1;
}

int solutie(int k) {

	if (k == n - 1) {
		return 1;
	}
	return 0;
}

void back(int k) {

	for (int i = 2; i <= m; i++) {
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

void ex1Var84() {

	back(0);

}

/*Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100), apoi
un şir de n numere întregi, cu cel mult 2 cifre fiecare, notat a1,a2,a3,…an, apoi un al doilea
şir de n numere întregi, cu cel mult 2 cifre fiecare, notat b1,b2,b3,…bn. Fiecare şir conţine
atât valori pare, cât şi impare. Programul afişează pe ecran suma acelor numere impare din
şirul b care sunt mai mici decât suma tuturor numerelor pare din şirul a.
Exemplu: pentru n=4 şi numerele 2,3,7,8 respectiv 44,3,1,8 se afişează valoarea 4
pentru că numerele 3 şi 1 sunt mai mici decât suma numerelor pare din şirul a, care este
10.*/

void functie(int v[], int d, int a[], int b) {
	int s = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			s += v[i];
		}
	}
	int suma = 0;

	for (int i = 0; i < b; i++) {
		if (a[i] % 2 == 1) {
			if (a[i] < s) {
				suma += a[i];
			}
		}
	}
	cout << suma;
}

void ex3Var84() {

	int v[4] = { 2,3,7,8 };
	int a[4] = { 44,3,1,8 };

	functie(v, 4, a, 4);

}


/*Se consideră subprogramul CMMMC care primeşte prin cei doi parametri, x şi y, două
numere naturale (1≤x≤10000, 1≤y≤10000) şi returnează cel mai mic multiplu comun al lor.
a) Scrieţi numai antetul subprogramului CMMMC. (4p.)
b) Fişierul text NUMERE.IN conţine, pe fiecare linie, câte două numere naturale nenule mai
mici sau egale decât 10000, despărţite printr-un spaţiu. Scrieţi un program C/C++ care,
pentru fiecare linie k din fişierul NUMERE.IN, citeşte cele două numere de pe această linie
şi scrie în fişierul text NUMERE.OUT , tot pe linia k, cel mai mic multiplu comun al acestora,
ca în exemplu.
Se vor utiliza apeluri utile ale subprogramului CMMMC. (6p.)
Exemplu: dacă fişierul
NUMERE.IN are conţinutul
alăturat:
12 14
11 12
4 8
atunci fişierul
NUMERE.OUT va avea
următorul conţinut:
84
132
8*/

int cmmdc(int a, int b) {

	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return b;
}

int cmmmc(int a, int b) {

	return (a * b) / cmmdc(a, b);

}

void ex4Var84() {

	cout << cmmmc(18,12);

}













