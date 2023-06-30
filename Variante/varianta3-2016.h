#include "citire_afisare.h"


/*Subprogramul minDivPrim are un singur parametru, n, prin care primeşte un număr
natural (n∈[2,109]). Subprogramul returnează cel mai mic număr natural care are
aceiași divizori primi ca n.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=75, subprogramul returnează numărul 15, iar dacă n=7, subprogramul
returnează numărul 7. */

void divPrimi(int a,int v[], int n) {

	for (int i = 2; i < a/2; i++) {
		if (prim(i) && a % i == 0) {
			if (nrGasit(v, n, i) == false) {
				v[n] = i;
				n++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}

void ex3Var3() {

	int v[100], d=0;
	divPrimi(75,v,d);

}

/*Se consideră șirul 1, -1, 2 ... definit astfel: f1=1, f2=-1, iar fn=1-2·fn-1-fn-2, dacă
n≥3 (unde n este un număr natural).
Se citește de la tastatură un număr natural, n (n∈[1,109]), și se cere să se scrie în
fișierul text bac.out, separați prin câte un spațiu, primii n termeni ai șirului, în ordine
inversă apariției lor în acesta.
Pentru determinarea și afișarea numerelor cerute se utilizează un algoritm eficient din
punctul de vedere al spațiului de memorie și al timpului de executare.
Exemplu: dacă n=3, fişierul conţine valorile
2 -1 1 */

void termeni(int n) {

	int f1 = 1, f2 = -1, f3 = 0;
	int ct = 0;
	int v[100], d = 0;

	while (ct != n-2) {
		f3 = 1 - 2 * f2 - f1;
		v[d] = f3;
		d++;
		f1 = f2;
		f2 = f3;
		ct++;
	}

	for (int i = d - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}
	cout << -1 << " " << 1;
}

void ex4Var3() {

	termeni(3);

}



















