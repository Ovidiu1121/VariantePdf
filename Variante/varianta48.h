#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr
natural n (2<n<10) şi care construieşte în memorie şi afişează pe
ecran un tablou bidimensional cu n linii şi n coloane astfel încât,
parcurgându-l linie cu linie de sus în jos şi fiecare linie de la stânga
la dreapta, se obţin primele n2 numere pare nenule, în ordine strict
crescătoare, ca în exemplu.
Exemplu: pentru n=4, se construieşte şi se afişează tabloul
alăturat. (10p.)
2 4 6 8
10 12 14 16
18 20 22 24
26 28 30 32*/

void matrice(int n) {

	int a[100][100];
	int k = 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = k;
			k += 2;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var48() {

	matrice(4);

}

//s3

/*Se generează prin metoda backtracking mulţimile distincte ale căror elemente sunt numere
naturale nenule şi care au proprietatea că suma elementelor fiecărei mulţimi este egală cu
7. Astfel, sunt generate, în această ordine, mulţimile: {1,2,4}, {1,6}, {2,5}, {3,4},
{7}. Folosind aceeaşi metodă pentru a genera mulţimile distincte ale căror elemente sunt
numere naturale nenule şi care au proprietatea că suma elementelor fiecărei mulţimi este
egală cu 9, stabiliţi în ce ordine sunt generate următoarele mulţimi: M1={2,3,4};
M2={3,6}; M3={2,7}; M4={4,5}.*/

void ex2Var48() {



}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100) şi
determină, utilizând apeluri ale subprogramului cmdiv, numărul fracţiilor ireductibile de
forma
n
x
cu x număr natural (1≤x≤n). Numărul obţinut va fi afişat pe ecran.
Exemplu: pentru n=6 se afişează 2, deoarece, dintre fracţiile
6
6
,
6
5
,
6
4
,
6
3
,
6
2
,
6
1
doar două
sunt ireductibile :
6
1
şi
6
5
.*/

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

void fractiiIreductibile(int n) {

	int ct = 0;

	for (int i = 1; i <= n; i++) {
		if (cmmdc(n, i) == 1) {
			ct++;
		}
	}
	cout << ct;
}

void ex3Var48() {

	fractiiIreductibile(6);

}

/*Fişierul text bac.in conţine pe prima linie un număr natural n (0<n<5000), iar pe a doua
linie, separate prin câte un spaţiu, n numere naturale, formate din cel mult 4 cifre fiecare.
Scrieţi un program C/C++ care determină şi scrie în fişierul bac.out toate numerele de pe
a doua linie a fişierului care apar o singură dată pe această linie. Numerele determinate se
vor afişa în ordinea crescătoare a valorilor lor, separate prin câte un spaţiu.
Exemplu: dacă pe prima linie a fişierului bac.in se află 10, iar pe linia a doua se găsesc
numerele 2 4548 568 4548 57 89 5974 2 89 32 atunci valorile căutate sunt 32 57
568 5974.*/

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void aparitii(int v[], int d) {
	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (frecventaNumar(v, d, v[i]) == 1) {
			a[b] = v[i];
			b++;
		}
	}
	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}
}

void ex4Var48() {
	
	int v[100], d;

	citire(v, d);
	aparitii(v, d);
}
















