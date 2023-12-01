#include "citire_afisare.h"


/*scrieti definitia completa a subprogramului numerare care are doi parametri:v, prin care primeste un tablou
unidimensional si n numarul de elemente din tablou. subprogramul returneaza numarul de elemente care au prima
cifra egala cu ultima*/

int primaCifra(int n) {
	int c;
	while (n) {
		c = n % 10;
		n /= 10;
	}
	return c;
}

void pcEgalUc(int v[], int d) {
	int ct = 0;
	for (int i = 0; i < d; i++) {
		if (primaCifra(v[i]) == v[i] % 10) {
			ct++;
		}
	}

	cout << ct;
}

void ex1() {

	int v[5] = { 1234,2342,3453,5678,8678 };

	pcEgalUc(v, 5);

}

/*de la stastatura se introduce un text de maxim 100 caractere. sa se scrie un program care afiseaza numarul de
palindroame din text.*/


/*fisierul date.in contine, pe mai multe linii, cel mult 1000000 de numere naturale nenule mai mici sau egale cu 100,
Proiectati un algoritm care sa afiseze oe ecran numerele care au aparut o singura data in fisier*/

void frecventa(int v[], int d) {

	sortareCrescator(v, d);

	if (v[0] != v[1]) {
		cout << v[0] << " ";
	}

	for (int i = 1; i < d; i++) {
		if (v[i] != v[i + 1]) {
			if (v[i] != v[i - 1]) {
				cout << v[i] << " ";
			}
		}
	}

}

void ex3() {

	int v[12] = { 2,7,1,65,7,3,2,65,9,9,11,5 };

	frecventa(v, 12);

}











