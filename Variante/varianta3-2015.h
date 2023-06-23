#include "citire_afisare.h"

/*Subprogramul DivImpar are doi parametri, a şi b, prin care primeşte două numere
naturale din intervalul [1,105]. Subprogramul returnează cel mai mare divizor comun
impar al numerelor a şi b.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă a=30 şi b=60, subprogramul returnează valoarea 15.*/

void divImpar(int a, int b) {

	while (a != b) {
		if (a > b) {
			a -= b;
		}
		if (b > a) {
			b -= a;
		}
	}
	if (b % 2 == 0) {
		cout << b / 2;
	}
	else {
		cout << b;
	}
}

void ex3Var3() {

	divImpar(30, 60);

}

/*Fişierul date.in conţine un şir de cel mult un milion de numere naturale din intervalul
[0,109], separate prin câte un spațiu. Șirul are cel puțin doi termeni pari și cel puțin doi
termeni impari.
Se cere să se afișeze pe ecran mesajul DA dacă șirul aflat în fișier are un subșir ordonat
crescător, format din toți termenii pari ai săi, și un subșir ordonat descrescător, format din
toți termenii impari ai săi. Dacă nu există două astfel de subșiruri, programul afișează pe
ecran mesajul NU. Pentru verificarea proprietății cerute utilizați un algoritm eficient din
punctul de vedere al timpului de executare și al memoriei necesare.
Exemplu: dacă fişierul date.in conţine numerele
7 2 5 2 4 3 8
se afişează pe ecran mesajul
DA
iar dacă fișierul conține numerele
5 2 7 2 4 3 8
se afişează pe ecran mesajul
NU*/

void subsir(int v[], int d) {
	
	for (int i = 0; i < d; i++) {
		int j = i, k = i + 1;
		if (v[0] % 2 == 1) {
			int x = v[0];
			int y=-1;
			while (i < d - 1) {
				if (v[i] % 2 == 0) {
					y = v[i];
					break;
				}
				i++;
			}
			while (j< d  ) {
				if (v[j] % 2 == 1) {
					if (v[j] > x) {
						cout << "Nu";
						return;
					}
					else {
						x = v[j];
					}
				}
				j++;
			}
			while (k < d) {
				if (v[k] % 2 == 0) {
					if (v[k] < y) {
						cout << "Nu";
						return;
					}
					else {
						y = v[k];
					}
				}
				k++;
			}
		}
		cout << "Da";
		return;
	}

}

void ex4Var3() {

	int v[100], d;

	citire(v, d);
	subsir(v, d);

}

















