#include "varianta43.h"


/*Scrie�i defini�ia complet� a unui subprogram P, cu doi parametri, a �i b, numere naturale cu
cel mult 4 cifre fiecare, care afi�eaz� pe ecran, separate prin c�te un spa�iu, numerele aflate
�n intervalul �nchis determinat de valorile a �i b, care sunt p�tratele unor numere prime.
Exemplu: pentru a=40 �i b=1 se vor afi�a valorile: 4 9 25*/

void intervalPatratePerf(int a, int b) {

	for (int i = a; i <= b; i++) {
		if (patratPerfect(i) == 1 && prim(sqrt(i)) == 1) {
			cout << i << " ";
	 }
	}

}

void ex3Var44() {

	intervalPatratePerf(1, 40);

}

/*Fi�ierul text numere.txt con�ine pe prima linie un num�r natural n (0<n<100000), iar pe a
doua linie n numere naturale, formate din cel mult 4 cifre, separate prin c�te un spa�iu.
a) Scrie�i un program C/C++ care determin� �n mod eficient, din punct de vedere al timpului
de executare, cifrele ce apar �n scrierea numerelor situate pe a doua linie a fi�ierului.
Programul va afi�a pe ecran aceste cifre in ordine cresc�toare, separate prin c�te un spa�iu.
Exemplu: daca fi�ierul numere.txt are urm�torul con�inut:
7
243 32 545 74 12 1344 90
atunci pe ecran se va afi�a: 0 1 2 3 4 5 7 9*/

void cifreDistincte(int v[], int d) {
	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		while (v[i]) {
			if (nrGasit(a, b, v[i] % 10) == false) {
				a[b] = v[i] % 10;
				b++;
			}
			v[i] /= 10;
		}
	}

	sortareCrescator(a, b);

	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}

}

void ex4Var44() {

	int v[100], d;

	citire(v, d);
	cifreDistincte(v, d);
}
















