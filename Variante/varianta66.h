#include "citire_afisare.h"


/*Se generează în ordine crescătoare, toate numerele naturale de 5 cifre distincte, care se
pot forma cu cifrele 2,3,4,5 şi 6. Să se precizeze numărul generat imediat înaintea şi
numărul generat imediat după secvenţa următoare : 34256, 34265, 34526, 34562*/

int s[100], n = 5, m = 6;

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

void ex1Var66() {

	back(0);

}

/*Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
prin intermediul parametrului n un număr natural nenul (1≤n≤10000), iar prin intermediul
parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre
aceste valori având cel mult 9 cifre. Subprogramul returnează cel mai mare divizor comun
al elementelor tabloului a. (10p.)
Exemplu: în urma apelului, pentru n=5 şi tabloul unidimensional (12,36,48,6,60) se va
returna 6.*/

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

int cmmdcVector(int v[], int d) {
	int a = cmmdc(v[0], v[1]);
	int b, c;

	for (int i = 2; i < d; i++) {
		b = cmmdc(a, v[i]);
		c = b;
		a = c;
	}
	return b;
}

void ex3Var66() {

	int v[100], d;

	citire(v, d);

	cout << cmmdcVector(v, d);

}

/*Fişierele text A.TXT şi B.TXT conţin cel mult 10000 de numere naturale cu cel mult 9
cifre fiecare, scrise fiecare pe câte o linie.
a) Scrieţi un program C/C++ care citeşte numerele din cele două fişiere şi, printr-o metodă
eficientă din punct de vedere al timpului de executare şi al spaţiului de memorie utilizat,
afişează pe ecran câte dintre numerele din fişierul A.TXT sunt strict mai mici decât toate
numerele memorate în fişierul B.TXT. (6p.)
Exemplu: dacă fişierul
A.TXT are conţinutul alăturat,
41111
81111
11111
91111
51111
111111
31111
431111
61111
201111
iar fişierul B.TXT are conţinutul
alăturat:
91111
91111
61111
91111
91111
81111
61111
91111
atunci programul va afişa valoarea 4, deoarece 41111, 11111, 51111, 31111 sunt mai
mici decât toate elementele din fişierul B.TXT.*/

bool nrMaiMic(int v[], int d, int n) {

	for (int i = 0; i < d; i++) {
		if (v[i] < n) {
			return false;
		}
	}
	return true;
}

int contorNrMaiMici(int v[], int d, int a[], int b) {
	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (nrMaiMic(a, b, v[i])) {
			ct++;
		}
	}
	return ct;
}

void ex4Var66() {

	int v[100], d;
	int a[4] = { 12,33,44,32 };

	citire(v, d);
	cout << contorNrMaiMici(v, d, a, 4);

}










