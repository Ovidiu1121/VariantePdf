#include "citire_afisare.h"

//s2

/*Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale m şi n (1≤m≤24,
1≤n≤24), un număr natural x (1≤x≤m) şi apoi m*n numere naturale de cel mult 5 cifre ce
reprezintă elementele unui tablou bidimensional a, cu m linii, numerotate de la 1 la m, şi n
coloane, numerotate de la 1 la n. Programul va determina eliminarea liniei cu numărul de
ordine x din matrice, modificarea corespunzătoare a numărului de linii din matrice şi afişarea
matricei obţinute în următorul format: câte o linie a matricei pe câte o linie a ecranului,
elementele fiecărei linii fiind separate prin câte un spaţiu. (10p.)
Exemplu: pentru m=3, n=4,
x=2 şi matricea alăturată
11 21 31 41
51 61 71 81
91 11 21 31  se va afişa matricea

11 21 31 41
91 11 21 31*/

void eliminareLinie(int a[100][100], int &n,int m, int l) {

	for (int i = l; i < n-1; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = a[i + 1][j];
		}
	}
	n--;
}

void ex5Var70() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	eliminareLinie(a, n,m, 1);
	afisareMatrice(a, n, m);

}

//s3

/*Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
prin parametrul n un număr natural nenul de cel mult 9 cifre şi furnizează prin parametrul x
numărul obţinut prin alăturarea cifrelor pare ale lui n considerate de la dreapta către
stânga. Dacă n nu conţine nicio cifră pară, x primeşte valoarea 0. (10p.)
Exemplu: în urma apelului calcul(9278,x), x primeşte valoarea 82.*/

void calcul(int n) {

	int x = 0;

	while (n) {
		if (n % 10 % 2 == 0) {
			x = x * 10 + n % 10;
		}
		n /= 10;
	}
	cout << x;
}

void ex3Var70() {

	calcul(9278);

}

/*Fişierul text NUMERE.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie, n numere naturale cu cel mult 9 cifre fiecare, numere nu neapărat distincte.
Aceste numere sunt dispuse în ordine crescătoare şi separate între ele prin câte un
spaţiu.
a) Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din
punct de vedere al timpului de executare şi al spaţiului de memorie utilizat, afişează pe
ecran, cu un spaţiu între ele, valoarea care apare de cele mai multe ori în fişier şi de câte
ori apare ea. Dacă există mai multe valori care apar de un număr maxim de ori, se va afişa
cea mai mică dintre ele. (6p.)
Exemplu: dacă fişierul
NUMERE.TXT are conţinutul
alăturat,
8
711 711 711 11111 11111 11111 191111 231111
atunci programul va afişa pe ecran 711 3.*/

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void frecventaMaxima(int v[], int d) {
	int maxim = 0;
	int minim = 10000;

	for (int i = 0; i < d; i++) {
		int k = frecventaNumar(v, d, v[i]);
		if (k > maxim) {
			maxim = k;
			if (v[i] < minim) {
				minim = v[i];
			}
		}
	}
	cout << minim << " " << maxim;
}

void ex4Var70() {
	
	int v[100], d;

	citire(v, d);
	frecventaMaxima(v, d);

}























