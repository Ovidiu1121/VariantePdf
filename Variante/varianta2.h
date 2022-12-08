#include "citire_afisare.h"

/*Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un spaţiu, cel mult 100 de
numere întregi, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++ care citeşte
numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine
crescătoare, toate numerele naturale nenule din fişier. Dacă nu există astfel de numere se
va afişa pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul NR.TXT conţine numerele: -3 -10 0 7 -5 7 51 -800 6 3798,
atunci pe ecran se va afişa: 6 7 7 51 3798*/

void numereNatNenule(int v[], int d) {
	int ok = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] > 0) {
			ok = 1;
		}
	}
	if (ok == 1) {
		for (int i = 0; i < d; i++) {
			if (v[i] > 0) {
				cout << v[i] << " ";
			}
		}
	}
	else {
		cout << "Nu exista";
	}

}

void ex3Var2() {

	int v[100], d;

	citire(v, d);
	numereNatNenule(v, d);

}

/*Un număr n se numeşte extraprim dacă atât el, cât şi orice număr obţinut prin permutarea
cifrelor lui n, sunt numere prime. De exemplu, numărul 113 este un număr extraprim
deoarece 113, 311, 131 sunt numere prime.
a) Scrieţi definiţia completă a unui subprogram f, cu un parametru, subprogram care:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 3 cifre (a>1)
- returnează suma tuturor exponenţilor din descompunerea în factori primi a valorii
parametrului a.
Exemplu: pentru a=90 subprogramul va returna valoarea 4, deoarece a=2*32*5 şi
1+2+1=4.*/


void ex4aVar2() {

	int v[100], d;

	citire(v, d);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n, 2≤n≤999 şi,
folosind apeluri utile ale subprogramului f, verifică dacă n este un număr extraprim. În caz
afirmativ, programul afişează pe ecran mesajul DA, în caz contrar afişând mesajul NU.*/

bool prim(int n) {

	if (n == 0 || n == 1) {
		return false;
	}

	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void permutare(int v[], int d) {

	int aux = v[0];

	for (int i = 0; i < d-1; i++) {
		v[i] = v[i + 1];
	}
	v[d - 1] = aux;
}

int contorCifre(int n) {

	int ct = 0;

	while (n) {
		ct++;
		n /= 10;
	}
	return ct;
}

bool numarExtraPrim(int n) {
	int k = contorCifre(n);
	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}
	int ct = 0;
	
	do {
		int aux = 0;
		permutare(v, d);
		for (int i = 0; i < d; i++) {
			aux = aux * 10 + v[i];
		}
		if (prim(aux) == 0) {
			return false;
		}
		ct++;
	} while (ct <= k);

	return true;
}

void ex4bVar2() {

	cout << numarExtraPrim(1132);

}
















