#include "citire_afisare.h"

/*sa se scrie definitia completa a unui subprogram suma cu doi parametri, care primeste prin intermediul primului
parametru v, un tablou unidimensional, ira prin intermediul celui de-al doilea parametru,n, numarul efectiv de elemente
ale sirului si returneaza suma elementelor din sir care dau resturile 0,1,2 prin impartirea la 2022*/

void suma(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] % 2022 == 0 || v[i] % 2022 == 1 || v[i] % 2022 == 2) {
			s += v[i];
		}
	}
	cout << s;
}

void ex1() {

	int v[7] = { 2,2023,18,2019,19,4045,2022 };

	suma(v, 7);

}

/*intr-o scoala sunt n clase, fiecare avand numar diferit de elevi. scoala primeste un pachet cu x carti. pentru ca o 
clasa sa primeasca pachetul, numarul elevilor din clasa trebuie sa coincida cu numarul cartilor din pachet.
sa se scrie un program care, folosind metoda cautarii binare, va verifica daca pachetul de carti poate fi 
distribuit unei clase, afisand mesajul DA sau NU*/

void clase(int n, int v[]) {



}

/*proiectati un algoritm care afiseaza pe ecran pentru fiecare pereche x,y, cel mai mare numar natural din intervalul
inchis [x,y], care este putere al lui 3 sau numarul 0 daca nu exista nici o putere a lui 3 in interval*/

void putere() {
	ifstream read("in.txt");

	int p = 1, x, y;

	while (read >> x) {
		read >> y;

		int k = 0;

		while (k <= y) {
			k = pow(3, p);
			p++;
		}
		if (k/3<x || k/3>y) {
			cout << 0 << endl;
		}
		else {
			cout << k / 3 << endl;
		}
		p = 1;
		k = 0;
	}
	

}

void ex3() {

	putere();

}



