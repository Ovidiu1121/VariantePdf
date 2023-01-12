#include "citire_afisare.h"


/*Se generează în ordine crescătoare, toate numerele naturale de 5 cifre distincte, care se
pot forma cu cifrele 5,6,7,8 şi 9. Să se precizeze numărul generat imediat înaintea şi
numărul generat imediat după secvenţa următoare : 67589,67598,67859,67895*/

int s[100], n = 5, m = 9;

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

	for (int i = 5; i <= m; i++) {
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

void ex1Var67() {

	back(0);

}

/*Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
prin intermediul parametrului n un număr natural nenul (1≤n≤10000), iar prin intermediul
parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre
aceste valori având cel mult 9 cifre. Subprogramul returnează numărul de numere prime
din tablou. (10p.)
Exemplu: pentru n=5 şi tabloul unidimensional (12,37,43,6,71) în urma apelului se va
returna 3.*/

int contorPrime(int v[], int d) {

	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (prim(v[i])) {
			ct++;
		}
	}
	return ct;
}

void ex3Var67() {

	int v[100], d;
	citire(v, d);

	cout << contorPrime(v, d);

}

/*Fişierul text NUMERE.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie un şir crescător de n numere naturale, fiecare având cel mult 9 cifre. Numerele
de pe a doua linie sunt separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care, utilizând o metodă eficientă din punct de vedere al
timpului de executare şi al spaţiului de memorie, afişează pe ecran elementele distincte ale
şirului aflat pe a doua linie a fişierului. (6p.)
Exemplu: dacă fişierul NUMERE.TXT are
conţinutul alăturat
7
111 111 111 2111 4111 71111 71111
atunci programul va afişa pe ecran 111 2111 4111 71111.*/

void elementeDistincte(int v[], int d) {
	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (nrGasit(a, b, v[i])==false) {
			a[b] = v[i];
			b++;
		}
	}

	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}
}

void ex4Var67() {

	int v[100], d;
	citire(v, d);

	elementeDistincte(v, d);

}















