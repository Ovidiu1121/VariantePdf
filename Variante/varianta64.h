#include "citire_afisare.h"


/*Se generează, prin metoda backtracking, toate modalităţile de aşezare a numerelor
naturale de la 1 la 5, astfel încât oricare 2 numere consecutive să nu se afle pe poziţii
alăturate. Dacă primele două soluţii sunt: (1,3,5,2,4) şi (1,4,2,5,3), care este prima
soluţie generată în care primul număr este 4?*/

int s[100], n = 5, m = 5;


void tipar() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 0;
		}
	}


	for (int i = 0; i < k-1; i++) {
		if (s[i] == s[i + 1]+1) {
			return 0;
		}
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

	for (int i = 1; i <= n; i++) {
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

void ex1Var64() {

	back(0);

}

/*Subprogramul diviz primeşte prin intermediul parametrului n un număr natural nenul
(2≤n≤200), iar prin intermediul parametrului a, un tablou unidimensional care conţine n
valori naturale nenule, fiecare dintre acestea având cel mult patru cifre. Elementele tabloului
sunt numerotate de la 1 la n.
Subprogramul returnează o valoare egală cu numărul de perechi (ai,aj), 1≤i<j≤n, în
care ai este divizor al lui aj , sau aj este divizor al lui ai.
Scrieţi definiţia completă a subprogramului diviz, în limbajul C/C++.
Exemplu: pentru n=5 şi a=(4,8,3,9,4) subprogramul returnează valoarea 4.*/

int divizor(int v[], int d) {
	int ct = 0;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (j != i) {
				if (v[i] % v[j] == 0) {
					ct++;
				}
			}
		}
	}
	return ct;
}

void ex3Var64() {

	int v[100], d;

	citire(v, d);
	cout << divizor(v, d);

}

/*Fişierul text date.in conţine pe prima linie , separate prin câte un spaţiu, cel mult 1000 de
numere naturale, fiecare dintre ele având maximum 9 cifre.
a) Scrieţi un program C/C++ care citeşte numerele din fişierul date.txt şi determină cea
mai lungă secvenţă ordonată strict descrescător, formată din valori citite consecutiv din
fişier. Numerele din secvenţa găsită vor fi afişate pe ecran, pe o linie, separate prin câte un
spaţiu. Dacă sunt mai multe secvenţe care respectă condiţia impusă, se va afişa doar prima
dintre acestea. Alegeţi o metodă de rezolvare eficientă din punctul de vedere al timpului de
executare.
Exemplu: dacă fişierul date.in conţine
5 2 19 4 3 6 3 2 1 0 8
(6p.)
pe ecran se afişează:
6 3 2 1 0*/

void secventa(int v[], int d) {

	int smax = 1, dmax = 0;

	for (int i = 0; i < d; i++) {
		int j = i;
		while (j < d - 1 && v[j + 1] < v[j]) {
			j++;
			if (j - i + 1 > dmax - smax + 1) {
				smax = i;
				dmax = j;
			}
		}
		i = j;
	}

	for (int i = smax; i < dmax; i++) {
		cout << v[i] << " ";
	}

}

void ex4Var64() {

	int v[100], d;
	citire(v, d);
	secventa(v,d);

}







