#include "citire_afisare.h"

/*Se considerã subprogramul zero, cu doi parametri:
• n, prin care primeºte o valoare naturalã 2<n<50;
• v, prin care primeºte un tablou unidimensional cu 2•n elemente, numere naturale cu cel
mult 4 cifre. Numãrul de elemente pare este egal cu numãrul de elemente impare.
Elementele au indici de la 1 la 2•n.
Subprogramul modificã tabloul astfel încât elementele impare sã aibã indici impari, iar
elementele pare sã aibã indici pari. Tabloul modificat este furnizat tot prin parametrul v.
Scrieþi definiþia completã a subprogramului.
Exemplu: dacã n=5 ºi v=(4, 5, 0, 9, 10, 7, 15, 3, 8, 10),
atunci dupã apel o soluþie posibilã este: v=(5, 4, 9, 0, 15, 10, 7, 8, 3, 10).*/

bool paritateDiferita(int a, int b) {

	if (a % 2 == 0 && b % 2 == 0) {
		return false;
	}
	else if (a % 2 == 1 && b % 2 == 1) {
		return false;
	}
	return true;
}

void rearanjare(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (paritateDiferita(i, v[i]) == true) {
			if (v[i] % 2 == 0) {
				int j = i + 1;
				while (v[j] % 2 == 0) {
					j++;
				}
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
			else if (v[i] % 2 == 1) {
				int j = i + 1;
				while (v[j] % 2 == 1) {
					j++;
				}
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void ex3Var3() {

	int v[100], d;

	citire(v, d);
	rearanjare(v, d);
	afisare(v, d);

}

/*Fiºierul bac.txt conþine pe prima linie un numãr natural par n cu cel mult 3 cifre, iar pe
urmãtoarea linie un ºir de n numere naturale cu cel mult nouã cifre. Numerele din ºir sunt
separate prin câte un spaþiu.
Se cere sã se afiºeze pe ecran mesajul Da dacã în ºir existã un element care sã fie strict
mai mare decât jumãtate dintre numerele din ºir.
Dacã în ºir nu se aflã o astfel de valoare, pe ecran se afiºeazã mesajul Nu.
Pentru determinarea numãrului cerut se utilizeazã un algoritm eficient din punctul de
vedere al memoriei ºi al timpului de executare.
Exemplu: dacã fiºierul bac.txt are conþinutul
6
8 34 34 34 5 34
atunci pe ecran se afiºeazã Nu, iar dacã fiºierul are conþinutul
8
1 5 6 12 3 12 12 9
atunci pe ecran se afiºeazã Da*/

void maximVec(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] > maxim) {
			maxim = v[i];
		}
	}
	int ct = 0;
	for (int i = 0; i < d; i++) {
		if (maxim > v[i]) {
			ct++;
		}
	}
	if (ct > d / 2) {
		cout << "Da";
	}
	else {
		cout << "Nu";
	}
}

void ex4Var3() {

	int v[100], d;
	citire(v, d);
	maximVec(v, d);

}














