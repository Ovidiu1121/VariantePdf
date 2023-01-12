#include "citire_afisare.h"


/*Dac� se utilizeaz� metoda backtracking pentru a genera toate permut�rile de 4 obiecte �i
primele 5 permut�ri generate sunt, �n aceast� ordine, 4 3 2 1, 4 3 1 2, 4 2 3 1, 4 2 1
3, 4 1 3 2, atunci a 6-a permutare este*/

int s[100], n = 4;

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

	for (int i = n; i >=1; i--) {
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

void ex1Var76() {

	back(0);

}

/*Scrie�i defini�ia complet� a unui subprogram s cu trei parametri care prime�te prin
intermediul parametrului n un num�r natural de maximum 9 cifre, prin intermediul
parametrului c o cifr� �i furnizeaz� prin intermediul parametrului k num�rul de cifre ale
num�rului n care apar�in intervalului [c-1,c+1].
Exemplu: pentru n=1233 �i c=3, k va avea valoarea 3, iar pentru n=650 �i c=3, k va
avea valoarea 0.*/

void interval(int n, int c) {
	int k = 0;

	while (n) {
		if (n % 10 >= c - 1 && n % 10 <= c + 1) {
			k++;
		}
		n /= 10;
	}
	cout << k;
}

void ex3Var76() {

	 interval(1233, 3);

}

/*Fi�ierul BAC.TXT are pe prima linie dou� numere naturale n �i m (0<n<1000, 0<m<1000)
separate prin c�te un spa�iu, pe linia a doua n numere �ntregi ordonate strict cresc�tor, iar
pe linia a treia m numere naturale distincte. Numerele din fi�ier aflate pe linia a doua �i a
treia au cel mult 6 cifre fiecare �i sunt desp�r�ite �n cadrul liniei prin c�te un spa�iu. S� se
scrie un program care cite�te toate numerele din fi�ier �i afi�eaz� pe ecran, desp�r�ite prin
c�te un spa�iu, toate numerele de pe a doua linie a fi�ierului care apar cel pu�in o dat� �i pe
linia a treia a acestuia.
Exemplu: dac� fi�ierul are urm�torul con�inut:
6 5
2 3 4 5 8 9
4 5 2 11 8
atunci se va afi�a: 5 2 8, nu neap�rat �n aceast� ordine.*/

void numere(int v[], int d, int a[], int b) {

	int x[100], y = 0;

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < b; j++) {
			if (v[i] == a[j]) {
				if (nrGasit(x, y, v[i]) == false) {
					x[y] = v[i];
					y++;
				}
			}
		}
	}

	for (int i = 0; i < y; i++) {
		cout << x[i] << " ";
	}

}

void ex4Var76() {

	int v[100], d;
	citire(v, d);
	int a[5] = { 4, 5, 2, 11, 8 }, b = 5;

	numere(v, d, a, b);

}













