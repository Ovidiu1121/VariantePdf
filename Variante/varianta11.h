#include "citire_afisare.h"


/*1. Un algoritm de tip backtracking generează, în ordine lexicografică, toate şirurile de 5 cifre 0
şi 1 cu proprietatea că nu există mai mult de două cifre 0 pe poziţii consecutive. Primele 7
soluţii generate sunt: 00100, 00101, 00110, 00111, 01001, 01010, 01011. Care este a
8-a soluţie generată de acest algoritm?*/

int s[100], n = 1, m = 5;

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	for (int i = 1; i <= k; i++) {
		if (s[i - 1] == 0 && s[i] == 0 && s[i + 1] == 0) {
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

	for (int i = 0; i <= n; i++) {
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

void ex1Var11() {

	back(0);

}

/*Fişierul text numere.txt conţine pe prima linie un număr natural n (n<30000), iar pe a
doua linie n numere întregi având maximum 4 cifre fiecare. Se cere să se afişeze pe ecran
un şir de n numere întregi, cu proprietatea că valoarea termenului de pe poziţia i
(i=1,2,…,n) din acest şir este egală cu cea mai mare dintre primele i valori de pe a doua
linie a fişierului numere.txt.
Exemplu: dacă fişierul numere.txt are conţinutul
alăturat,
12
4 6 3 7 8 1 6 2 7 9 10 8
se afişează pe ecran numerele
4 6 6 7 8 8 8 8 8 9 10 10 */

void inlocuire(int v[], int d) {

	for (int i = 1; i <= d; i++) {
		int k = v[i-1];
		while (v[i - 1] > v[i] && i <= d - 1) {
			v[i] = k;
			i++;
		}
	}

}

void ex3Var11() {

	int v[100], d;

	citire(v, d);
	inlocuire(v, d);
	afisare(v, d);

}

/*Scrieţi doar antetul funcţiei sum care primeşte ca parametru un număr natural nenul x cu
maximum 9 cifre şi returnează suma divizorilor numărului x.
Exemplu: sum(6) are valoarea 12 (=1+2+3+6).*/

int sumaDiv(int n) {

	int s = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}

void ex4aVar11() {

	cout << sumaDiv(6);

}

/*Să se scrie un program C/C++ care citeşte de la tastatură un număr natural n (0<n<25) şi
apoi n numere naturale nenule cu maximum 9 cifre fiecare. Programul calculează, folosind
apeluri ale funcţiei sum, şi afişează pe ecran câte numere prime conţine şirul citit.
Exemplu: pentru n=5 şi valorile 12 3 9 7 1 se va afişa pe ecran valoarea 2 (în şirul dat
există două numere prime şi anume 3 şi 7).*/

bool prim(int n) {

	if (n == 0 || n == 1) {
		return false;
	}

	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int contorPrime(int v[], int d) {

	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (prim(i) == true) {
			ct++;
		}
	}
	return ct;
}

void ex4bVa11() {

	int v[100], d;

	citire(v, d);
	cout <<contorPrime(v, d);

}

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură două valori naturale nenule m şi n
(m≤10, n≤10) şi apoi m*n numere naturale nenule cu cel mult 4 cifre fiecare, reprezentând
elementele unei matrice cu m linii şi n coloane. Programul determină apoi valorile minime de
pe fiecare linie a matricei şi afişează pe ecran cea mai mare valoare dintre aceste minime.
Exemplu: pentru m=3, n=5 şi matricea
5 13 7 2 3
9 6 12 9 10
3 6 5 4 7
, se afişează pe ecran valoarea 6*/

int minimLinie(int a[100][100], int n, int l) {
	int minim = 10000;
	for (int i = 0; i < n; i++) {
		if (a[l][i] < minim) {
			minim = a[l][i];
		}
	}
	return minim;
}

int maximLinii(int a[100][100], int n, int m) {

	int v[100], d = 0;

	for (int i = 0; i < n; i++) {
		int k = minimLinie(a, n, i);
		v[d] = k;
		d++;
	}

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] > maxim) {
			maxim = v[i];
		}
	}
	return maxim;
}

void ex5Var11() {

	int a[100][100], n, m;
	
	citireMatrice(a, n, m);
	afisareMatrice(a, n, m);
	cout << maximLinii(a, n, m);
}











