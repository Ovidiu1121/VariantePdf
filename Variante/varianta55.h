#include "citire_afisare.h"


/*Utilizând metoda backtracking se generează toate matricele pătratice de ordinul 4 ale căror
elemente aparţin mulţimii {0,1}, cu proprietatea că pe fiecare linie şi pe fiecare coloană
există o singură valoare 1. Primele 4 soluţii generate sunt, în această ordine:
1.
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1

1 0 0 0
0 1 0 0
0 0 0 1
0 0 1 0

1 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1

1 0 0 0
0 0 1 0
0 0 0 1
0 1 0 0*/

void ex1Var55() {



}

/*Se consideră subprogramul cifre, care primeşte prin intermediul primului parametru, a, un
număr natural cu maximum 8 cifre nenule şi returnează, prin intermediul celui de-al doilea
parametrul b, cel mai mic număr care se poate forma cu toate cifrele distincte ale lui a.
a) Scrieţi definiţia completă a subprogramului cifre. (4p.)
b) Se consideră fişierul text date.in ce conţine pe prima linie un număr natural nenul n
(n≤100), iar pe a doua linie n numere naturale, separate prin câte un spaţiu, fiecare număr
având maximum 8 cifre nenule. Scrieţi un program C/C++ care citeşte toate numerele din
fişierul text date.in şi afişează pe ecran, despărţite prin câte un spaţiu, numerele situate
pe a doua linie a fişierului, formate numai din cifre distincte ordonate strict crescător,
folosind apeluri utile ale subprogramului cifre. În cazul în care nu există niciun astfel de
număr se va afişa valoarea 0.
Exemplu: dacă fişierul date.in are conţinutul
alăturat, atunci se vor afişa numerele: 16 269 (6p.)
6
16 175 333 242477 321 269*/

void cellMaiMicNr(int n) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (nrGasit(a,b,v[i])==false) {
			a[b] = v[i];
			b++;
		}
	}

	sortareCrescator(a, b);
	int k = 0;

	for (int i = 0; i < b; i++) {
		k = k * 10 + a[i];
	}
	cout << k;
}

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

bool cifreDistincte(int n) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	for (int i = 0; i < d; i++) {
		if (frecventaNumar(v, d, v[i]) != 1) {
			return false;
		}
	}
	return true;
}

bool cifreCrescatoare(int n) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] < v[j]) {
				return false;
			}
		}
	}
	return true;
}

void nr(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (cifreCrescatoare(v[i]) && cifreDistincte(v[i])) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var55() {

	int v[100], d;

	citire(v, d);
	nr(v, d);
		
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤100)
şi 2*n numere naturale de maximum 3 cifre; primele n reprezintă elementele tabloului
unidimensional a, iar următoarele n elementele tabloului unidimensional b; fiecare tablou
are elementele numerotate începând de la 1. Programul construieste în memorie şi
afişează pe ecran, cu spaţii între ele, cele n elemente ale unui tablou unidimensional c, în
care orice element ci (1≤i≤n) se obţine conform definiţiei următoare:
ci = ┌ ai concatenat cu bi, dacă ai<bi
└ bi concatenat cu ai, altfel
Exemplu: dacă se citesc n=3, a=(12,123,345) şi b=(1,234,15), atunci se afişează
elementele tabloului c astfel:
112 123234 15345*/

int contorCifre(int n) {

	int ct = 0;

	while (n) {
		ct++;
		n /= 10;
	}
	return ct;
}

int concatenare(int a, int b) {

	int k = contorCifre(b);

	int v[100], d = 0;;

	while (b) {
		v[d] = b % 10;
		d++;
		b /= 10;
	}

	for (int i = k - 1; i >= 0; i--) {
		a = a * 10 + v[i];
	}
	return a;
}

void ex(int v[], int d, int a[], int b) {

	for (int i = 0; i < d; i++) {
		if (v[i] > a[i]) {
			cout << concatenare(a[i], v[i]) << endl;
		}
		else {
			cout<<concatenare(v[i],a[i]) << endl;
		}
	}

}

void ex4Var55() {

	int v[3] = { 12,123,345 };
	int a[3] = { 1,234,15 };

	ex(v, 3, a, 3);

}














