#include "varianta31.h"



/*Scrieþi definiþia completã a subprogramului nr_prim care are ca parametru un numãr
natural x ºi returneazã cel mai mic numãr prim, strict mai mare decât x.
Exemplu: pentru x=25 subprogramul returneazã numãrul 29, iar pentru x=17 valoarea
returnatã va fi 19.*/

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

/*În fiºierul numere.txt sunt memorate pe mai multe linii, numere întregi (cel mult 100),
numerele de pe aceeaºi linie fiind despãrþite prin câte un spaþiu, fiecare numãr având cel
mult 9 cifre. Sã se determine cele mai mici douã valori având exact douã cifre fiecare,
memorate în fiºier ºi sã se afiºeze pe ecran aceste valori, despãrþite printr-un spaþiu. Dacã
în fiºier nu se aflã douã astfel de valori, pe ecran se va afiºa valoarea 0.
Scrieþi programul C/C++ corespunzãtor metodei descrise la punctul a. 
Exemplu: dacã fiºierul numere.txt are conþinutul alãturat
5 10
3 -77 20
50 5 0 12 18 30, se va afiºa pe ecran, nu neapãrat în aceastã ordine:-77 10 */

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
















