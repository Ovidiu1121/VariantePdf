#include "citire_afisare.h"


/*Folosind modelul combinărilor se generează numerele naturale cu câte trei cifre distincte din
mulţimea {1,2,3,7}, numere cu cifrele în ordine strict crescătoare, obţinându-se, în ordine:
123, 127, 137, 237. Dacă se utilizează exact aceeaşi metodă pentru a genera numerele
naturale cu patru cifre distincte din mulţimea {1,2,3,4,5,6,7,8}, câte dintre numerele
generate au prima cifră 2 şi ultima cifră 7?*/

int s[100], n = 8, m = 3;

int v[8] = { 1,2,3,4,5,6,7,8 }, ct = 0;

void tipar() {
	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	if (s[0] == 7 && s[m - 1] == 2) {
		ct++;
	}

	for (int i = 0; i < k; i++) {
		if (s[k] >= s[i]) {
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

	for (int i = 0; i < n; i++) {
		s[k] = v[i];
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

void ex1Subiect3Var5() {

	back(0);
	cout << ct;

}

/*Scrieţi un program C/C++ care citeşte de la tastură un număr natural n cu cel mult 8 cifre
(n≥10) şi care creează fişierul text NR.TXT ce conţine numărul n şi toate prefixele nenule
ale acestuia, pe o singură linie, separate prin câte un spaţiu, în ordine descrescătoare a
valorii lor.
Exemplu: pentru n=10305 fişierul NR.TXT va conţine numerele:
10305 1030 103 10 1*/

int contorCifre(int n) {

	int ct = 0;

	while (n) {
		ct++;
		n /= 10;
	}
	return ct;
}

void prefixe(int n) {

	int k = contorCifre(n);

	while (n) {
		cout << n << " ";
		n /= 10;
	}

}

void ex3Subiect3Var5() {

	prefixe(10305);

}

/*Subprogramul f, cu un parametru:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 8 cifre (a>1)
- returnează cel mai mic divizor prim al valorii parametrului a.
Exemplu: pentru valoarea 45 a parametrului a, subprogramul va returna valoarea 3
deoarece a=32*5, iar cel mai mic divizor prim al său este 3.*/

int divizorPrimMinim(int n) {

	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0 && prim(i) == 1) {
			return i;
		}
	}
	return -1;
}

void ex4aSubiect3Var5() {

	cout << divizorPrimMinim(45);

}

/*Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi apoi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din
şir fiind strict mai mari decât 1. Folosind apeluri utile ale subprogramului f, programul va
determina şi va afişa pe ecran toate numerele prime din şirul citit. Numerele determinate se
vor afişa pe ecran, separate prin câte un spaţiu, în ordine crescătoare a valorii lor. Dacă nu
există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru n=7, şirul: 1125, 2, 314, 101, 37, 225, 12 pe ecran se va afişa:
2 37 101*/

void numerePrime(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (prim(v[i]) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex4bSubiect3Var5() {

	int v[100], d;

	citire(v, d);
	numerePrime(v, d);

}

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi m
(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
(numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare
element Aij memorează cea mai mare dintre valorile indicilor i şi j (1≤i≤n, 1≤j≤m).
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
fiecărei linii fiind separate prin câte un spaţiu.
Exemplu: pentru n=4 şi m=5 se va afişa matricea alăturată.
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5*/

void matrice2(int n, int m) {

	int a[100][100];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i >= j) {
				a[i][j] = i;
			}
			else {
				a[i][j] = j;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Subiect2Var5() {

	matrice2(4, 5);

}



