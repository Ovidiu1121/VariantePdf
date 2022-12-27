#include "citire_afisare.h"



//s3

/*�n vederea particip�rii la un concurs, elevii de la liceul sportiv au dat o prob� de selec�ie, �n
urma c�reia primii 6 au ob�inut punctaje egale. �n c�te moduri poate fi format� echipa
selec�ionat� �tiind c� poate avea doar 4 membri, ale�i dintre cei 6, �i c� ordinea acestora �n
cadrul echipei nu conteaz�?*/

int s[100], n = 6, m = 4;
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

void ex1Var32() {

	back(0);
	cout <<"\n==>>"<< ct;
}

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
















