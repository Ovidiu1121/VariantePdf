#include "citire_afisare.h"



/*Subprogramul inserare are doi parametri:
 n, prin care primeşte un număr natural (2≤n≤20);
 a, prin care primeşte un tablou unidimensional care memorează un şir de n numere
naturale, fiecare cu cel mult 4 cifre. Cel puŃin un element al tabloului este număr par.
Subprogramul modifică tabloul, inserând înainte de fiecare termen par al şirului numărul
obŃinut prin împărŃirea la 2 a valorii acestuia şi furnizează, tot prin parametrii n şi a, valorile
actualizate ale datelor primite.
ScrieŃi în limbajul C/C++ definiŃia completă a subprogramului.
Exemplu: dacă n=7 şi a=(1,4,5,3,82,6,2) atunci după apel
n=11 şi a=(1,2,4,5,3,41,82,3,6,1,2).*/


void inserare(int v[], int& d, int poz, int x) {

	for (int i = d - 1; i >= poz; i--) {
		v[i + 1] = v[i];
	}
	v[poz] = x;
	d++;

}

void adaugareInainte(int v[], int &d) {

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			inserare(v, d, i, v[i] / 2);
			i++;
		}
	}

}

void ex3Var1() {

	int v[100], d;

	citire(v, d);
	adaugareInainte(v, d); afisare(v, d);

}

/*Numim număr de tip palindrom un număr care are aceeaşi valoare dacă este citit de la
stânga la dreapta sau de la dreapta la stânga.
Numim număr de tip dublu palindrom o valoare de tip palindrom cu număr par de cifre în
care fiecare cifră de rang impar este egală cu cifra alăturată din dreapta ei.
Exemplu: 11111111, 22777722 sunt numere de tip dublu palindrom; 12122121 este
număr de tip palindrom, dar nu şi dublu palindrom.
Se cere scrierea în fişierul BAC.TXT, fiecare pe câte o linie, a tuturor numerelor naturale
de tip dublu palindrom, cu exact 8 cifre. Numerele de tip dublu palindrom sunt scrise în
ordine strict crescătoare, iar pentru determinarea acestora se utilizează un algoritm
eficient din punct de vedere al timpului de executare. */

int inv(int n) {

	int aux = 0;

	while (n) {
		aux = aux * 10 + n % 10;
		n /= 10;
	}
	return aux;
}

bool palindrom(int n) {

	int aux = inv(n);

	if (n == aux) {
		return true;
	}
	return false;
}

bool dubluPalindrom(int n) {

	if (palindrom(n)) {
		int v[100], d = 0;
		while (n) {
			v[d] = n % 10;
			d++;
			n /= 10;
		}
		for (int i = d - 1; i >= 0; i--) {
			if (i % 2 == 1) {
				if (v[i] != v[i - 1]) {
					return false;
				}
			}
		}
	}
	else {
		return false;
	}
	return true;
}

void ex4Var1() {

	cout<<dubluPalindrom(22777722);

}










