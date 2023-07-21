#include "citire_afisare.h"


/*Subprogramul resturi are patru parametri, n, x, y și r, prin care primeşte câte un număr
natural din intervalul [1,109], r<x<y<n. Subprogramul returnează numărul de valori
naturale din intervalul [1,n] pentru care atât restul împărțirii la x, cât și restul împărțirii la
y, sunt egale cu r.
Scrieţi definiţia completă a subprogramului.
Exemplu: pentru n=200, x=5, y=14 și r=2, subprogramul returnează numărul 3 (pentru
numerele 2, 72 și 142 atât restul împărțirii la 5, cât și restul împărțirii la 14, este 2).*/

void resturi(int n, int x, int y, int r) {
	int ct = 0;
	for (int i = 1; i <= n; i++) {
		if (i % x == r && i % y == r) {
			ct++;
		}
	}
	cout << ct;
}

void ex3Var4() {

	resturi(200, 5, 14, 2);

}


/*Numim secvență neuniformă a unui șir de numere naturale un subșir al acestuia, format
din termeni aflați pe poziții consecutive în șirul dat, cu proprietatea că oricare trei termeni
aflați pe poziții consecutive sunt diferiți. Lungimea secvenței este egală cu numărul de
termeni ai acesteia.
Fișierul bac.txt conține un șir de cel mult 106
 numere naturale din intervalul [0,9].
Numerele sunt separate prin câte un spațiu, iar în șir există cel puțin trei termeni diferiți pe
poziții consecutive.
Se cere să se afișeze pe ecran lungimea maximă a unei secvențe neuniforme a șirului aflat
în fișier. Proiectați un algoritm eficient din punctul de vedere al timpului de executare și al
memoriei utilizate.
Exemplu: dacă fişierul bac.txt conţine numerele
7 7 1 3 7 7 5 3 3 3 7 8 9
atunci pe ecran se afișează valoarea 4
*/

void secventaNeuniforma(int v[], int d) {

	int maxim = 0, secventa = 0;

	for (int i = 0; i < d; i++) {
		int j = i;
		secventa =1;
		while (v[j] != v[j + 1] && j < d - 1) {
			if (v[j] != v[j + 1]) {
				secventa++;
			}
			j++;
		}
		
		if (secventa > maxim) {
			maxim = secventa;
		}
	}
	cout << maxim;
}

void ex4Var4() {

	int v[100], d;
	citire(v, d);
	secventaNeuniforma(v, d);

}












