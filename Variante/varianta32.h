#include "varianta31.h"



/*Scrie�i defini�ia complet� a subprogramului nr_prim care are ca parametru un num�r
natural x �i returneaz� cel mai mic num�r prim, strict mai mare dec�t x.
Exemplu: pentru x=25 subprogramul returneaz� num�rul 29, iar pentru x=17 valoarea
returnat� va fi 19.*/

int primulNrPrim(int n) {

	for (int i = n; i < n + 10; i++) {
		if (prim(i)) {
			return i;
		}
	}
	return -1;
}

void ex3Var32() {

	cout << primulNrPrim(25);

}

/*�n fi�ierul numere.txt sunt memorate pe mai multe linii, numere �ntregi (cel mult 100),
numerele de pe aceea�i linie fiind desp�r�ite prin c�te un spa�iu, fiecare num�r av�nd cel
mult 9 cifre. S� se determine cele mai mici dou� valori av�nd exact dou� cifre fiecare,
memorate �n fi�ier �i s� se afi�eze pe ecran aceste valori, desp�r�ite printr-un spa�iu. Dac�
�n fi�ier nu se afl� dou� astfel de valori, pe ecran se va afi�a valoarea 0.
Scrie�i programul C/C++ corespunz�tor metodei descrise la punctul a. 
Exemplu: dac� fi�ierul numere.txt are con�inutul al�turat
5 10
3 -77 20
50 5 0 12 18 30, se va afi�a pe ecran, nu neap�rat �n aceast� ordine:-77 10 */

bool nrDe2Cifre(int n) {

	int ct = 0;

	while (n) {
		ct++;
		n /= 10;
	}
	if (ct ==2) {
		return true;
	}
	return false;
}

void numereMinimeDe2Cif(int v[], int d) {
	int minim = 100;
	for (int i = 0; i < d; i++) {
		if (nrDe2Cifre(v[i]) == 1) {
			if (v[i] < minim) {
				minim = v[i];
			}
		}
	}
	int k = 100;
	for (int i = 0; i < d; i++) {
		if (nrDe2Cifre(v[i]) == 1 && v[i] != minim) {
			if (v[i] < k) {
				k = v[i];
			}
		}
	}
	
	cout << k << " " << minim;
}

void ex4Var32() {

	int v[100], d;

	citire(v, d);
	numereMinimeDe2Cif(v, d);

}
















