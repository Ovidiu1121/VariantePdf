#include "citire_afisare.h"

//s2

/*Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (n≤20),
construieşte în memorie şi afişează pe ecran, matricea cu n linii şi n coloane, în care se vor
memora în ordinea crescătoare a valorii, pe linii şi coloane, primele n2 numere naturale
nenule, pare, care nu sunt divizibile cu 3.
Fiecare linie a matricei se va afişa pe câte o linie a ecranului, cu
elementele de pe aceeaşi linie separate prin câte un spaţiu.
Exemplu: pentru n=4 se va construi şi afişa matricea alăturată.
(10p.)
2 4 8 10
14 16 20 22
26 28 32 34
38 40 44 46*/

void matrice(int n) {

	int a[100][100];
	int nr = 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			while (nr % 3 == 0) {
				nr += 2;
			}
			a[i][j] = nr;
			nr += 2;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var34() {

	matrice(4);

}

//s3

/*Completarea unui bilet de LOTO presupune colorarea a 6 numere dintre cele 49, înscrise
pe bilet. O situaţie statistică pe o anumită perioadă de timp arată că cele mai frecvente
numere care au fost extrase la LOTO sunt: 2, 20, 18, 38, 36, 42, 46, 48. Câte
bilete de 6 numere se pot completa folosind doar aceste valori, ştiind că numărul 42 va fi
colorat pe fiecare bilet?*/

int s[100], n = 7, m = 6;
int ct = 0;

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] >= s[i + 1]) {
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
				ct++;
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex1Var34() {

	back(0);
	cout << "\n-->" << ct;
}

/*Subprogramul max primeşte ca parametru un tablou unidimensional x cu cel mult 100 de
elemente numere întregi, care sunt, în ordine, termenii unei progresii aritmetice şi un număr
natural n, care reprezintă dimensiunea tabloului. Scrieţi definiţia completă a subprogramului
max care returnează cel mai mare termen al progresiei aritmetice. Alegeţi un algoritm de
rezolvare eficient din punct de vedere al timpului de executare.*/

void maximMedieAritmetica(int v[], int d) {
	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] < maxim) {
			maxim = v[i];
		}
	}
	cout << maxim;
}

void ex3aVar34() {

	int v[100], d;

	citire(v, d);
	maximMedieAritmetica(v, d);

}

/*Pe prima linie a fişierului numere.txt se află un număr natural n (n≤100), iar pe
următoarele n linii, câte n numere întregi cu cel mult 4 cifre fiecare. Scrieţi programul C/C++
care citeşte din fişier datele existente, determină liniile din fişier pe care s-au memorat în
ordine termenii unei progresii aritmetice şi afişează pe ecran, folosind apeluri ale
subprogramului max cel mai mare număr (diferit de cel situat pe prima linie) din fişier, care în
plus este termenul unei progresii aritmetice.
Exemplu: dacă fişierul numere.txt are conţinutul
alăturat
5
5 7 3 1 9
-9 -7 -5 -3 -1
2 5 8 14 11
50 40 30 20 10
18 17 16 15 14,
se va afişa 50, deoarece progresiile aritmetice sunt:
(-9 -7 -5 -3 -1),
(50 40 30 20 10) şi
(18 17 16 15 14)
*/

bool progremieAritmeticaLinie(int a[100][100], int n,int m, int l) {

	int k = abs(a[l][0] - a[l][1]);

	for (int i = 1; i < m-1; i++) {
		if (abs(a[l][i] - a[l][i + 1]) != k) {
			return false;
		}
	}
	return true;
}

void maximLinieMA(int a[100][100], int n, int m) {
	int maxim = 0;
	for (int i = 0; i < n; i++) {
		if (progremieAritmeticaLinie(a, n, m, i) == 1) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] > maxim) {
					maxim = a[i][j];
				}
			}
		}
	}
	cout << maxim;
}

void ex3cVar34() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	maximLinieMA(a, n, m);

}


















