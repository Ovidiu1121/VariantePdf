#include "citire_afisare.h"

/*sa se scrie definitia completa a unui subprogram cu numele perfect, cu doi parametri, care primeste prin intermediul
unui parametru x, un tablou unidimensional de cell mult 100 numere, iar prin intermediul celui de al doilea parametru
n, numarul efectiv de elemente ale sirului, si care determina si afiseaza patratele perfecte din sir*/

void patratPerfect(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (sqrt(v[i]) == int(sqrt(v[i]))) {
			cout << v[i] << " ";
		}
	}

}

void ex1() {

	int v[7] = { 3,9,12,25,30,45,121 };

	patratPerfect(v, 7);

}

/*scrieti un program care construieste in memorie si afiseaza pe ecran cuvantul s dupa ce au fost eliminate prims si
ultima vocala. Cuvantul contine cel putin o consoana si doua vocale*/


/*proiectati un algoritm care determina cea mai lunga secventa ordonata strict crescator, formata din valori
aflate pe pozitii consecutive in fisier*/

void secventaMax(int v[], int d) {

	int secventa=1, secventaMax = 0,start,finish;

	for (int i = 0; i < d; i++) {
		int j = i;
		secventa = 1;
		while (v[j] < d - 1 && v[j] == v[j + 1]-1) {
			secventa++;
			j++;
		}
		if (secventa > secventaMax) {
			secventaMax = secventa;
			start = i;
			finish = j;
		}
	}

	for (int i = start; i <= finish; i++) {
		cout << v[i] << " ";
	}

}

void ex3() {

	int v[12] = { 55,2,19,4,3,1,2,3,4,658,5,798 };

	secventaMax(v, 12);

}



