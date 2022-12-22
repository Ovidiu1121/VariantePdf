#include "citire_afisare.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n din intervalul
[2,50] şi apoi n numere reale şi afişează pe ecran câte dintre cele n numere reale sunt
egale cu media aritmetică a celorlalte n-1 numere reale.*/

int medieAritmetica(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		s += v[i];
	}

	return s / d;
}

int nrEgaleCuMediaA(int v[], int d) {

	int k = medieAritmetica(v, d);
	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] == k) {
			ct++;
		}
	}
	return ct;
}

void ex3Var28() {

	int v[100], d;

	citire(v, d);
	cout << nrEgaleCuMediaA(v, d);

}


/*Scrieţi definiţia completă a unui subprogram primul, care
- primeşte prin singurul său parametru, a, o valoare naturală din intervalul [2,10000]
- returnează o valoare naturală reprezentând cel mai mic divizor al numărului a mai mare strict
decât 1.*/

int divizorMinim(int n) {

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return i;
		}
	}
	return -1;
}

void ex3aVar28() {

	cout << divizorMinim(49);

}

/*Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n(1≤n≤100) şi pe
următoarea linie n numere naturale din intervalul [2,10000] separate prin câte un spaţiu.
Un număr natural n se numeşte „aproape prim” dacă este egal cu produsul a două numere
prime distincte. De exemplu, numărul 14 este „aproape prim” pentru că este egal cu produsul
numerelor prime 2 şi 7.
Scrieţi un program C/C++ care determină, folosind apeluri utile ale suprogramului primul,
cel mai mare număr „aproape prim” de pe linia a doua a fişierului NUMERE.IN. În cazul în
care există un astfel de număr se afişează pe ecran mesajul DA, urmat de numărul
determinat, iar în caz contrar mesajul NU.
Exemplu: dacă fişierul NUMERE.IN are conţinutul:
6
100 14 21 8 77 35
atunci se afişează pe ecran DA 77 pentru că numărul 77 este cel cel mai mare dintre numerele
„aproape prime” din fişier (14=7*2,21=7*3,77=7*11, 35=7*5).*/

bool nrAproapePrim(int n) {

	for (int i = 2; i < n/2; i++) {
		if (prim(i)) {
			for (int j = i; j < n; j++) {
				if ( prim(j) == 1 && i * j <= n) {
					if (i * j == n) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

void nrAproapePrimMax(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (nrAproapePrim(v[i]) == 1) {
			if (v[i] > maxim) {
				maxim = v[i];
			}
		}
	}
	cout << maxim;
}

void ex4Var28() {

	int v[100], d;

	citire(v, d);
	nrAproapePrimMax(v, d);

}












