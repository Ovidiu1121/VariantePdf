#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural cu exact 5 cifre şi
construieşte în memorie o matrice cu 6 linii şi 6 coloane, numerotate de la 1 la 6, formată
astfel:
- elementele aflate pe diagonala principală sunt toate nule;
- elementele de pe linia 1, aflate deasupra diagonalei principale precum şi elementele de pe
coloana 1, aflate sub diagonala principală au toate valoarea egală cu cifra unităţilor
numărului citit;
- elementele de pe linia 2, aflate deasupra diagonalei principale precum şi elementele de pe
coloana 2, aflate sub diagonala principală au toate valoarea egală cu cifra zecilor numărului
citit, şi aşa mai departe, ca în exemplu.
Matricea astfel construită va fi afişată pe ecran, câte o linie a
matricei pe câte o linie a ecranului, elementele de pe aceeaşi linie
fiind separate prin câte un spaţiu.
Exemplu: dacă se citeşte numărul 28731 matricea construită va fi
cea scrisă alăturat.
0 1 1 1 1 1
1 0 3 3 3 3
1 3 0 7 7 7
1 3 7 0 8 8
1 3 7 8 0 2
1 3 7 8 2 0*/

void matrice(int n) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	int a[100][100];

	for (int i = 0; i < d; i++) {
		for (int j = i+1; j < d; j++) {
			a[j][i] = v[i];
		}
	}

	for (int i = 0; i < d; i++) {
		for (int j = i + 1; j < d; j++) {
			a[i][j] = v[i];
		}
	}
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (i == j) {
				a[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var15() {

	matrice(28731);

}

/*Câte numere cu exact două cifre pot fi construite folosind doar cifre pare distincte?*/

int s[100], n = 8, m = 2;
int ct = 0;

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	if (s[k] % 2 == 1) {
		return 0;
	}

	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 0;
		}
	}
	ct++;
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

	for (int i = 2; i <= n; i++) {
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

void ex1Var15() {

	back(0);
	cout << "\n->"<<ct;
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤32000) şi
afişează pe ecran numărul natural din intervalul închis [1,n] care are cei mai mulţi divizori.
Dacă există mai multe numere cu această proprietate se va afişa cel mai mic dintre ele.
Exemplu: pentru n=20 se va afişa valoarea 12 (12, 18 şi 20 au câte 6 divizori, iar 12 este
cel mai mic dintre ele).*/

int contorDivizori(int n) {

	int ct = 0;

	for (int i = 1; i <=n; i++) {
		if (n % i == 0) {
			ct++;
		}
	}
	return ct;
}

int divizoriMax(int v[], int d) {
	int maxim = 0;
	for (int i = 0; i < d; i++) {
		int k = contorDivizori(v[i]);
		if (k > maxim) {
			maxim = k;
		}
	}
	int f = 100000;
	for (int i = 0; i < d; i++) {
		if (contorDivizori(v[i]) == maxim) {
			if (v[i] < f) {
				f = v[i];
			}
		}
	}
	return f;
}

void ex3Var15() {

	int v[100], d;

	citire(v, d);
	cout<<divizoriMax(v, d);

}

/*În fişierul text BAC.IN se găsesc, pe o singură linie, separate prin câte un spaţiu, mai multe
numere naturale de cel mult 6 cifre fiecare. Se cere să se determine şi să se afişeze pe
ecran, separate printr-un spaţiu, ultimele două numere impare (nu neapărat distincte) din
fişierul BAC.IN. Dacă în fişier se găseşte un singur număr impar sau niciun număr impar se
va scrie pe ecran mesajul Numere insuficiente.
Exemplu: dacă fişierul BAC.IN conţine valorile: 12 15 68 13 17 90 31 42 se va
afişa 17 31.*/

void ultimele2impare(int v[], int d) {

	int k = 1;

	for (int i = d - 1; i >= 0; i--) {
		if (v[i] % 2 == 1) {
			cout << v[i] << " ";
		
			k++;
		}
		
		if (k > 2) {
			return;
		}
	}

}

void ex4Var15() {

	int v[100], d;

	citire(v, d);
	ultimele2impare(v, d);

}




















