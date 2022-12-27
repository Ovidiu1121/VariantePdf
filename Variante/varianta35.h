#include "citire_afisare.h"

//s2

/*Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (n≤50) şi
construieşte în memorie o matrice cu n linii şi n coloane, ale cărei elemente sunt
numere întregi citite de la tastatură. Pentru fiecare coloană a matricei, în ordine, programul
afişează pe ecran cel mai mic număr de pe respectiva coloană. Numerele afişate vor fi
separate prin câte un spaţiu. (10p.)
Exemplu: pentru n=4 şi matricea alăturată, se vor afişa
pe ecran valorile: -7 18 -10 2.
122 103 5 10
-7 18 -10 2
107 999 59 4
1 200 100 7*/

void matrice(int a[100][100], int n) {

	for (int j = 0; j < n; j++) {
		int min = a[0][j]; 
		for (int i = 1; i < n; i++) {
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}
		cout << min << " ";
	}

}

void ex5Var35() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	matrice(a, n);

}

//s3

/*doua linie n numere naturale cu cel mult 9 cifre fiecare, despărţite prin câte un spaţiu.
Scrieţi un program C/C++ care citeşte toate numerele din fişier şi afişează pe ecran,
separate prin câte un spaţiu, numerele de pe a doua linie a fişierului, care încep şi se
termină cu aceeaşi cifră. 
Exemplu: dacă fişierul numere.in are
conţinutul alăturat, se numerele ce se vor afişa
sunt: 55 3 101 7 2782
9
55 107 3 101 92 7 208 2782
80*/

bool ucEgalPc(int n) {
	int pc, uc = n % 10;
	int ct = 0;
	for (int i = n; i != 0; i = i / 10) {
		ct++;
	}

    pc = n / (int)pow(10, ct - 1);
	if (pc == uc) {
		return true;
	}
	return false;
}

void numereCuUcEgalPc(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (ucEgalPc(v[i]) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var35() {

	int v[100], d;

	citire(v, d);
	numereCuUcEgalPc(v, d);

}

/*Scrieţi definiţia completă a unui subprogram sum care primeşte prin parametrul x un
număr natural de cel mult 4 cifre şi returnează suma divizorilor numărului x, diferiţi de 1 şi
de el însuşi.
Exemplu: dacă x=10 se va returna valoarea 7 (7=2+5).*/

int sumaDivizoriImproprii(int n) {
	int s = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}

void ex4aVar35() {

	cout << sumaDivizoriImproprii(10);

}

/*Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<100), apoi
n numere naturale (cu cel mult 4 cifre fiecare). Programul determină, folosind apeluri utile
ale subprogramului sum, pentru fiecare număr natural citit, suma divizorilor săi proprii şi
afişează pe ecran sumele determinate, în ordinea crescătoare a valorilor lor, separate prin
câte un spaţiu. 
Exemplu: dacă n=5 şi numerele citite sunt 10 2 33 6 11
valorile afişate pe ecran vor fi: 0 0 5 7 14*/

void vectorSume(int v[], int d) {

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		int k = sumaDivizoriImproprii(v[i]);
		a[b] = k;
		b++;
	}

	sortareCrescator(a, b);

	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}

}

void ex4bVar35() {

	int v[100], d;

	citire(v, d);
	vectorSume(v, d);

}











