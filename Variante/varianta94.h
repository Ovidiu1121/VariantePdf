#include "citire_afisare.h"

/*Un elev realizează un program care citeşte o valoare naturală pentru o variabilă
n şi apoi afişează în fişierul permut.txt, pe prima linie, valoarea lui n, apoi
toate permutările mulţimii {1,2,...,n}, câte o permutare pe câte o linie a
fişierului. Rulând programul pentru n=3, fişierul va conţine cele 7 linii alăturate.
Dacă va rula din nou programul pentru n=5, ce va conţine a 8-a linie din fişier?
3
3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3*/

int s[100], n = 3;

void tipar() {
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] == s[k]) {
			return 0;
		}
	}
	return 1;
}

int solutie(int k) {

	if (k == (n - 1)) {
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

void ex1Var94() {

	back(0);

}

/*Scrieţi definiţia completă a funcţiei f, care primeşte prin intermediul parametrului n un număr
natural nenul (2≤n≤200), iar prin intermediul parametrului a un tablou unidimensional care
conţine n valori întregi, fiecare dintre aceste valori întregi având cel mult patru cifre. Funcţia
returnează valoarea 1 dacă elementele tabloului formează un şir crescător, valoarea 2 dacă
elementele tabloului formează un şir descrescător, valoarea 0 dacă elementele tabloului
formează un şir constant şi valoarea -1 în rest. */

bool sirCrescator(int v[], int d) {

	for (int i = 0; i < d-1; i++) {
		if (v[i] > v[i + 1]) {
			return 0;
		}
	}
	return 1;
}

bool sirDescrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		if (v[i] < v[i + 1]) {
			return 0;
		}
	}
	return 1;
}

void sir(int v[], int d) {

	if (sirCrescator(v, d) == 1) {
		cout << 1;
		return;
	}
	else if (sirDescrescator(v, d) == 1) {
		cout << 2;
		return;
	}
	else {
		cout << 0;
	}

}

void ex3Var94() {

	int v[100], d;

	citire(v, d);
	sir(v, d);

}

/*Fişierul text număr.txt conţine pe prima linie o valoare naturală n cu exact 9 cifre nenule
distincte. Scrieţi un program eficient din punctul de vedere al timpului de executare care
citeşte din fişier numărul n şi afişează pe ecran cea mai mică valoare m formată din exact
aceleaşi cifre ca şi n, astfel încât m>n. În cazul în care nu există o astfel de valoare,
programul va afişa pe ecran mesajul Nu exista.
Exemplu: Dacă fişierul număr.txt conţine numărul 257869431, se va afişa pe ecran
numărul 257891346. */


void ex4Var94() {



}







