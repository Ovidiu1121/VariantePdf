#include "citire_afisare.h"

/*scrieti definitia completa a unui subprogram calcuul care are doi parametrii, prin care primeste un tablou
unidimensional cu maxim 50 de numere si numarul de elemente din tablou. Subprogramul returneaza nr de elemente
cu media aritmetica a elementelor din sir*/

void contorElemente(double v[], int d) {

	int ct = 0;
	double s = 0;

	for (int i = 0; i < d; i++) {
		s += v[i];
	}

	double medie = s / d;

	for (int i = 0; i < d; i++) {
		if (v[i] <= medie) {
			ct++;
		}
	}
	cout << ct;
}

void ex1() {

	double v[6] = { 2.14,4.5,23.5,40.5,65.4,12.5 };

	contorElemente(v, 6);

}

/*fisierul bac contine cel mult 100 de propozitii. sa se scrie un program care afiseaza pe ecran propozitia care
are cele mai multe vocale*/

void ex2() {

}

/*sa se determine toate perechile distinctei si j, formate din termeni ai sirului aflat in fisier, cu proprietatea ca
nici un termen al sirului diferit de i si j, sa nu aparatina intervalului [i,j]*/

void perechi(int v[], int d) {



}











