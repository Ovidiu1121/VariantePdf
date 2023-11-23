#include "citire_afisare.h"

/*subprogramul calcul are un singur parametru, n, prin care primeste un numar natura. Suprogramul returneaza suma
divizoriilor proprii lui n care sunt numere prime.*/

void calcul(int n) {

	int s = 0;

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			if (prim(i) == true) {
				s += i;
			}
		}
	}
	cout << s;
}

void ex1() {

	calcul(15);

}

/*sa se scrie un program care citeste de la tastatura un text de maxim 30 de caractere. Programul construieste 
in memorie si afiseaza pe ecran cuvantul obtinut prin eliminarea tuturor consoanelor din text.*/


/*in fisierul bac.in se gasesc cel mult 1000 numere naturale de cel putin 9 cifre fiecare. numerele sunt in ordine
crescatoare si sunt separate prin cate un spatiu. proiectati un algoritm eficient din punct de vedere al memoriei
utilizate , care citeste toti termenii sirului si afiseaza in fisierul bac.out, pe cate o linie, fiecare termen al
sirului urmat de numarul de aparitii*/

void aparitii(int v[], int d) {

	int x = v[0];
	int ct = 1;

	for (int i = 1; i < d; i++) {
		if (v[i] == x) {
			ct++;
		}
		else {
			cout << v[i-1] << " " << ct << endl;
			x = v[i];
			ct = 1;
		}
		if (i == d - 1) {
			cout << v[i] << " " << ct;
		}
	}


}

void ex3() {

	int v[9] = { 4,4,4,5,5,7,7,7,7 };

	aparitii(v, 9);

}












