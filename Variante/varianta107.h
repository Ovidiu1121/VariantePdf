#include "citire_afisare.h"


/*Subprogramul putere are doi parametri, n și p, prin care primește câte un număr natural (n[2,109],
p[0,109]). Subprogramul returnează puterea la care apare numărul p în descompunerea în factori
primi a lui n, dacă p este număr prim, sau valoarea -1 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=80 și p=2, subprogramul returnează numărul 4 (80=245).*/

void putere(int n, int p) {

	int ct = 0;

	while (n % p == 0) {
		ct++;
		n /= p;
	}
	cout << ct;
}

void ex1Var7() {

	putere(80, 2);

}


/*O valoare k polarizează două șiruri dacă există doi termeni care au acea valoare, unul fiind în primul
șir, iar celălalt în al doilea șir.
Scrieți un program C/C++ care citește de la tastatură numere naturale din intervalul [1,20]: m, n și
elementele unui tablou bidimensional cu m linii și n coloane, cu proprietatea că nu există două elemente
egale situate pe aceeași linie sau pe aceeași coloană. Programul afișează pe ecran valorile care pot
polariza două șiruri, și anume șirul format din elementele de pe prima coloană, respectiv șirul format din
elementele ultimei coloane a tabloului.
Valorile sunt afișate într-o ordine oarecare, separate prin câte un spațiu, iar dacă nu
există astfel de valori se afișează pe ecran mesajul nepolarizate.
Exemplu: pentru m=4, n=5 și tabloul alăturat se afișează pe ecran, nu neapărat în
această ordine, numerele 5 6 
3 7 1 2 5
2 4 5 9 6
6 2 7 8 1
5 3 2 7 8*/

void polarizare(int a[100][100], int n, int m) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][0] == a[j][n - 1]) {
				cout << a[i][0] << " ";
				break;
			}
		}
	}

}

void ex2Var7() {

	int a[100][100], n, m;
	citireMatrice(a, n, m);
	polarizare(a, n, m);

}

/*Fișierul bac.txt conține un șir de cel mult 106 numere întregi din intervalul [-103,103], separate prin
câte un spațiu. Se cere să se afișeze pe ecran suma minimă obținută adunând numere de pe poziții
consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de vedere al memoriei
utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile -4 6 -7 -2 1 -4 10 3 -9 -2 2
se afișează pe ecran numărul -12*/

void sumaMin(int v[], int d) {
	int minim = INT_MAX;
	int s = v[0];

	for (int i = 1; i < d; i++) {
		s += v[i];
		if (s < minim) {
			minim = s;
		}
		if (s > 0) {
			s = 0;
		}
	}
	cout << minim;
}

void ex3Var7() {

	int v[100], d;

	citire(v, d);
	sumaMin(v, d);

}











