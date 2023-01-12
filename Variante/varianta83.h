#include "citire_afisare.h"


/*Folosind cifrele {1,2,3} se generează, în ordinea crescătoare a valorii, toate numerele
formate din exact trei cifre, în care cifrele alăturate au valori consecutive. Astfel se obţin în
ordine, numerele: 121, 123, 212, 232, 321 şi 323. Folosind aceeaşi metodă se
generează numere de patru cifre din mulţimea {1,2,3,4} care îndeplinesc aceeaşi
condiţie. Care va fi al 5-lea număr generat ?*/

int s[100]{}, n = 4, m = 4;

void tipar() {

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	cout << endl;
}

int valid(int k) {


	for (int i = 0; i < k; i++) {
		if (abs(s[i]- s[i + 1]) != 1) {
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

	for (int i = 1; i <= m; i++) {
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

void ex1Var83() {

	back(0);

}

/*Scrieţi în C/C++ definiţia completă a subprogramului suma care are doi parametri:
- n, prin care primeşte un număr natural (1≤n≤100);
- v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi, fiecare
având exact trei cifre.
Funcţia returnează suma elementelor din tablou care au prima cifră egală cu ultima cifră.*/

bool pcEgalUc(int n) {

	int ct = 0;
	int aux = n;

	for (int i = n; i != 0; i = i / 10) {
		ct++;
	}

	if (aux % 10 == (n / (int)pow(10, ct - 1))) {
		return true;
	}

	return false;

}

void functie(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (pcEgalUc(v[i]) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var83() {

	int v[100], d;

	citire(v, d);
	functie(v, d);

}

/*Fişierul text NUMERE.IN conţine mai multe linii, pe fiecare linie existând câte un şir de
numere naturale nenule mai mici sau egale decât 30000, despărţite prin câte un spaţiu;
fiecare linie se termină cu numarul 0 (care se consideră că nu face parte din şirul aflat pe
linia respectivă) şi conţine cel puţin două valori.
a) Scrieţi programul C/C++ care afişează pe ecran valoarea maximă din şirul care conţine
cele mai puţine numere. În cazul în care există mai multe şiruri cu acelaşi număr minim de
numere, se va afişa cea mai mare valoare care apare în unul dintre aceste şiruri. Alegeţi o
metodă de rezolvare eficientă din punct de vedere al memoriei utilizate şi al timpului de
executare. (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită la punctul a), explicând în
ce constă eficienţa ei (3 – 4 rânduri). (4p.)
Exemplu: dacă fişierul NUMERE.IN are conţinutul
alăturat, atunci pe ecran se va afişa numărul 253.
2 253 34 3 0
6 88 9 3 0
4 54 88 12345 98 234 546 0*/


void ex4Var83() {



}











