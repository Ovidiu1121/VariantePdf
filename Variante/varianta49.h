#include "citire_afisare.h"

/*Se generează în ordine strict crescătoare numerele de câte şase cifre care conţin: cifra 1 o
singură dată, cifra 2 de două ori şi cifra 3 de trei ori. Se obţin, în această ordine, numerele:
122333, 123233, 123323, …, 333221. Câte numere generate prin această metodă au
prima cifră 1 şi ultima cifră 2?*/

int s[100], n = 4, m = 4;

void tipar() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

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
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex1Var49() {

	back(0);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n ( 1≤n≤50) şi apoi
un şir de n numere naturale cu cel mult 4 cifre fiecare şi care verifică dacă elementele şirului
pot fi rearanjate astfel încât să respecte regula: al doilea element este cu 1 mai mare decât
primul, al treilea cu 2 mai mare decât al doilea, ... , ultimul este cu n-1 mai mare decât
penultimul. Programul afişează pe ecran mesajul DA în caz afirmativ şi mesajul NU în caz
contrar.
Exemplu: pentru n=4 şi şirul 8,5,11,6 se afişează DA (elementele pot fi rearajate astfel
încât să respecte regula dată: 5, 6, 8, 11)*/

bool regula(int v[], int d) {

	sortareCrescator(v, d);
	int k = 1;
	for (int i = 1; i < d; i++) {
		if (v[i] != v[i - 1] + k) {
			return false;
		}
		k++;
	}
	return true;
}

void ex3Var49() {

	int v[100], d;

	citire(v, d);
	cout << regula(v, d);
}

/*Fişierul bac.txt conţine cel mult 1000 numere naturale nenule, mai mici decât 30000
fiecare, separate prin câte un spaţiu. Scrieţi programul C/C++ care citeşte din fişierul
bac.txt toate numerele şi care determină cea mai mare cifră din scrierea lor şi cel mai mic
dintre numerele care conţin această cifră, folosind apeluri utile ale subprogramului cmax.
Cifra şi numărul determinate se vor afişa pe ecran, separate printr-un spaţiu.
Exemplu: dacă fişierul bac.txt conţine valorile: 23 12 64 12 72 345 67 23 71 634
atunci pe ecran se afişează 7 67.*/

int cMaxVec(int v[], int d) {
	int maxim = 0;
	for (int i = 0; i < d; i++) {
		while (v[i]) {
			if (v[i] % 10 > maxim) {
				maxim = v[i] % 10;
			}
			v[i] /= 10;
		}
	}
	return maxim;
}

void cMaxSiNrMin(int v[], int d) {

	int maxim = 0, minim = 10000;
	int a[100], b = 0;
	int k = cMaxVec(v, d);

	for (int i = 0; i < d; i++) {
		while (v[i]) {
			if (k == v[i] % 10) {
				a[b] = v[i];
				b++;
				v[i] = 0;
			}
			v[i] /= 10;
	  }
	}

	for (int i = 0; i < b; i++) {
		if (v[i] < minim) {
			minim = v[i];
		}
	}
	cout << k << " " << minim;
}

void ex4Var49() {

	int v[100], d;

	citire(v, d);
	cMaxSiNrMin(v, d);
}














