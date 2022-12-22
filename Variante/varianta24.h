#include "citire_afisare.h"

//s2

/*Scrieţi o secvenţă de instrucţiuni C/C++ care să iniţializeze elementele unui tablou
bidimensional A, cu n linii şi n coloane, 1<n≤100, cu numerele naturale 1,2,...,n, astfel
încât pe fiecare linie sau coloană să existe toate numerele din mulţimea {1,2,...,n}.*/

void matrice(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = i * n + j + 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex4S2Var24() {

	matrice(4);

}


/*Scrieţi definiţia completă a subprogramului p care primeşte prin intermediul parametrului
n un număr natural nenul (n≤100), iar prin intermediul parametrului x un tablou
unidimensional cu n componente întregi, de maximum patru cifre fiecare. Subprogramul
furnizează prin intermediul parametrului mini valoarea minimă din tabloul x, prin
intermediul parametrului maxi valoarea maximă din x, iar prin intermediul parametrului sum
suma elementelor din tabloul x.*/


void minMaxSum(int v[], int d) {

	int s = 0, maxim = 0, minim = 10000;

	for (int i = 0; i < d; i++) {
		if (v[i] > maxim) {
			maxim = v[i];
		}
		if (v[i] < minim) {
			minim = v[i];
		}
		s += v[i];
	}
	cout << maxim << " " << minim << " " << s;
}

void ex3aVar24() {

	int v[100], d;

	citire(v, d);
	minMaxSum(v, d);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n,
(3≤n≤100), apoi cele n elemente distincte ale unui tablou unidimensional x. Fiecare dintre
aceste elemente este un număr natural având cel mult patru cifre. Folosind apeluri utile ale
subprogramului p, programul calculează şi afişează pe ecran media aritmetică a
elementelor care ar rămâne în tabloul x dacă s-ar elimina valoarea minimă şi valoarea
maximă din tablou. Valoarea afişată va avea cel mult 3 cifre după virgulă.
Exemplu: dacă se citesc pentru n valoarea 5, iar pentru tabloul x valorile (1,9,4,8,5),
programul va afişa una dintre valorile 5.667 sau 5.666.*/

void stergere(int v[], int& d, int p) {

	for (int i = p; i < d - 1; i++) {
		v[i] = v[i + 1];
	}
	d--;

}

void eliminareMaxMin(int v[], int &d) {

	int maxim = 0, minim = 10000;

	for (int i = 0; i < d; i++) {
		if (v[i] > maxim) {
			maxim = v[i];
		}
		if (v[i] < minim) {
			minim = v[i];
		}
	}

	for (int i = 0; i < d; i++) {
		if (v[i] == maxim || v[i] == minim) {
			stergere(v, d, i);
		}
	}

	int s = 0;

	for (int i = 0; i < d; i++) {
		s += v[i];
	}

	cout << s / d;

}

void ex3bVar24() {

	int v[100], d;

	citire(v, d);
	eliminareMaxMin(v, d);
}

/*Fişierul text bac.txt conţine pe prima linie numărul natural n, 1≤n≤30000, pe următoarele
n linii un şir de n numere întregi, ordonate crescător, iar pe ultima linie două numere întregi
a şi b (a≤b) separate de un spaţiu. Fiecare dintre cele n numere, precum şi valorile a şi b,
au cel mult patru cifre.
a) Scrieţi un program C/C++, eficient din punct de vedere al timpului de executare, care
afişează pe ecran cel mai mic număr întreg din intervalul închis [a,b] care se găseşte în
şirul dat. Dacă nu există un astfel de număr, programul afişează textul NU.
Exemplu: dacă fişierul bac.txt are conţinutul alăturat, programul afişează
valoarea 11 
ei. 
4
-2
7
11
35
8 15*/

int contorCifre(int n) {

	int ct = 0;

	while (n) {
		ct++;
		n /= 10;
	}
	return ct;
}

int numarReal(int v[], int d, int a, int b) {

	sortareCrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (a > b) {
			if (v[i] >= b && v[i] <= a) {
				return v[i];
			}
		}
		else {
			if (v[i] >= a && v[i] <= b) {
				return v[i];
			}
		}
	}
	return -1;
}

void ex4Var24() {

	int v[100], d;

	citire(v, d);
	cout << numarReal(v, d, 8, 15);

}













