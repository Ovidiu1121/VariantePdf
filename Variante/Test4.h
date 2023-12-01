#include "citire_afisare.h"


/*subprogramul ordonare are un singur parametru n, prin care primeste un numar natual, in care nu exista secventa de
mai mult de doua cifre consecutive impare. subprogramul inlocuieste in n secventa de doua cifre impare cu o
noua secventa in care cele doua cifre sa fie ordonate crescator. Ex: n=30356974 se afiseaza 30356794 */

void ordonare(int n) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	for (int i = d - 1; i > 0; i--) {
		if (v[i] % 2 == 1 && v[i + 1] % 2 == 1) {
			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
			}
		}
	}

	for (int i = d - 1; i >= 0; i--) {
		cout << v[i];
	}

}

void ex1() {

	ordonare(30356974);

}

/*sa se scrie un program care citeste tabloul bidimensional din fisier, modifica tabloul in memorie, eliminand 
elementele de pe diagonala secundara.*/

void eliminareDiagonalaSecundara(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i + j == n - 1) {
				while (j < n - 1) {
					int aux = a[i][j];
					a[i][j] = a[i][j + 1];
					a[i][j + 1] = aux;
					j++;
				}
			}
		}
	}

	afisareMatrice(a, n, m);

}

void ex2() {

	int a[100][100],n,m;

	citireMatrice(a, n, m);
	eliminareDiagonalaSecundara(a, n, m-1);

}

/*fisierul date.in contine un sir de numere intregi,ordonate crescator. sa se afiseze pe ecran numarul de valori 
distincte din sir care au cate 4 cifre. */

int contorCifre(int n) {

	int k = 0;

	while (n) {
		k++;
		n /= 10;
	}

	return k;
}

void nrDistincte(int v[], int d) {

	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (contorCifre(v[i]) == 4) {
			if (v[i] != v[i - 1]) {
				ct++;
			}
		}
	}
	cout << ct;
}

void ex3() {

	int v[14] = { 2,3,34,34,2345,2345,5432,5432,5432,5432,7654,12345,23456,23476 };

	nrDistincte(v, 14);

}









