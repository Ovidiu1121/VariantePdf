#include "citire_afisare.h"


/*Subprogramul NrPrime are un singur parametru, n, prin care primeşte un număr natural
(n∈[0,109]). Subprogramul returnează numărul de cifre prime ale lui n.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=1233405, atunci subprogramul returnează valoarea 4.*/

void cifrePrime(int n) {
	int ct = 0;
	while (n) {
		if (prim(n % 10)) {
			ct++;
		}
		n /= 10;
	}
	cout << ct;
}

void ex3Var5() {

	cifrePrime(1233405);

}


/*Fişierul BAC.TXT conţine pe prima linie un număr natural, n (n∈[2,5000]), și pe a doua
linie un șir de 2·n numere naturale din intervalul [0,5]. Numerele aflate pe aceeași linie
a fișierului sunt separate prin câte un spaţiu.
Se cere să se afişeze pe ecran valoarea obținută însumând toate produsele de forma
x·y, unde x și y sunt numere de paritate diferită, x fiind printre primii n termeni ai șirului
aflat în fișier, iar y printre ultimii n termeni ai acestui șir. Dacă nu există niciun astfel de
produs, valoarea cerută este nulă. Pentru determinarea numărului cerut utilizați un
algoritm eficient din punctul de vedere al timpului de executare și al memoriei necesare.
Exemplu: dacă fişierul are conţinutul de mai jos
5
1 2 0 0 5 4 2 3 1 0
pe ecran se afişează numărul 44
(1·4+1·2+1·0+2·3+2·1+0·3+0·1+0·3+0·1+5·4+5·2+5·0=44)*/

void suma(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d / 2; i++) {
		for (int j = d / 2; j < d; j++) {
			if (v[i] % 2 != v[j] % 2) {
				s += v[i] * v[j];
			}
		}
	}
	cout << s;
}

void ex4Var5() {

	int v[100], d;
	citire(v, d);
	suma(v, d);

}
















