
#include "citire_afisare.h"


/*Subprogramul cifreImpare are un singur parametru, n, prin care primeşte un număr
natural cu toate cifrele nenule (n∈[1,109]). Subprogramul returnează numărul obţinut
prin eliminarea tuturor cifrelor impare din n, respectiv -1 dacă nu există astfel de cifre sau
dacă toate cifrele lui n sunt impare.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=23541 subprogramul returnează 24, iar dacă n=28 subprogramul
returnează -1*/

void eliminareImpare(int n) {

	int a=0;

	while (n) {
		if (n % 10 % 2 == 0) {
			a = a * 10 + n % 10;
		}
		n /= 10;
	}
	int aux = 0;
	while (a) {
		aux = aux * 10 + a % 10;
		a /= 10;
	}
	cout << aux;
}

void ex3Var4() {

	eliminareImpare(23541);

}

/*Fişierul numere.in conţine pe prima linie un număr natural n (n∈[2,109]), iar pe a doua
linie un şir de cel mult 109
 numere naturale din intervalul [1,n]. Numerele din şir sunt
ordonate crescător şi sunt separate prin câte un spaţiu.
Se cere să se determine valorile naturale distincte din intervalul [1,n] care NU se găsesc
în şirul menţionat mai sus. Valorile determinate se afişează pe ecran în ordine strict
crescătoare, separate prin câte un spaţiu. Dacă nu există astfel de valori, se afişează pe
ecran mesajul Nu exista.
Pentru determinarea valorilor cerute se utilizează un algoritm eficient din punctul de
vedere al memoriei şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele
10
3 4 4 8
se afişează pe ecran 1 2 5 6 7 9 10*/

void interval(int n, int v[], int d) {
	bool flag;
	for (int i = 1; i <= n; i++) {
		flag = false;
		for (int j = 0; j < d; j++) {
			if (i == v[j]) {
				flag = true;
			}
		}
		if (!flag) {
			cout << i << " ";
		}
	}

}

void ex4Var4() {

	int v[100], d;
	citire(v, d);
	interval(10, v, d);

}
























