#include "citire_afisare.h"


/*Subprogramul CifrePrime are un singur parametru, n, prin care primeşte un număr natural
(n∈[0,109]). Subprogramul returnează suma cifrelor prime ale lui n.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=1235405, atunci subprogramul returnează 15, iar dacă n=140, atunci
subprogramul returnează 0. */

void sumaCifrePrime(int n) {
	int s = 0;

	while (n) {
		if (prim(n % 10)) {
			s+=n % 10;
		}
		n /= 10;
	}
	cout << s;
}

void ex1Var1() {

	sumaCifrePrime(1235405);

}

/*Un interval este numit prieten de grad n al unui șir dacă sunt exact n termeni ai șirului cu valori din
interval și dacă toate numerele întregi care aparțin intervalului sunt valori ale unor termeni ai șirului.
Fișierul bac.txt conține un șir de cel mult 106
 numere naturale din intervalul [0,102], separate
prin câte un spațiu. Se cere să se afișeze pe ecran numărul maxim n cu proprietatea că există un
interval prieten de grad n al șirului aflat în fișier. Proiectați un algoritm eficient din punctul de vedere
al timpului de executare.
Exemplu: dacă fișierul conține numerele
10 10 11 3 4 2 49 4 2 3 21 2 27 12 13 14 15 5
atunci se afișează pe ecran 8 (intervalului [2,5] îi aparțin 8 termeni ai șirului)*/

void interval(int v[], int d) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}
	int maxim = 0, secventa = 0;

	for (int i = 0; i < 15; i++) {
		int j = i;
		secventa = 0;
		while (f[j] != 0&&j < d - 1) {
			secventa += f[j];
			j++;
		}
		i = j;
		if (secventa > maxim) {
			maxim = secventa;
		}
	}
	cout << maxim;
}

void ex3Var1() {

    int v[100], d;

    citire(v, d);
    interval(v, d);

}















