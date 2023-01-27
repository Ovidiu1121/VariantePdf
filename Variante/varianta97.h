#include "citire_afisare.h"


//s2

/*Se consideră un tablou bidimensional cu n linii şi m coloane (1≤n≤24, 1≤m≤24) ce
memorează numere întregi cu cel mult două cifre fiecare. Scrieţi un program în limbajul
C/C++ care citeşte de la tastatură valorile n, m şi elementele tabloului, şi care inversează
ordinea elementelor în cadrul fiecărei coloane, ca în exemplu. Programul va afişa pe ecran,
pe n linii, matricea obţinută după inversare, elementele fiecărei linii fiind separate prin câte
un spaţiu. (10p.)
Exemplu: pentru n=4, m=3 şi matricea:
1 7 3
4 5 6
7 8 9
3 4 5
 Pe ecran se va afişa:
 3 4 5
 7 8 9
 4 5 6
 1 7 3*/

void inversare(int a[100][100], int n, int m) {

	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var97() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	inversare(a, n, m);
}

//s3

/*Tabloul unidimensional V, declarat global, memorează exact 50 de numere întregi:
V1, V2,...,V50.
Subprogramul Calcul primeşte prin intermediul parametrului k un număr natural nenul
(k≤50) şi furnizează prin intermediul parametrului S suma tuturor elementelor pozitive, din
tabloul V, cu indici mai mari sau egali cu k sau 0 dacă toate elementele menţionate sunt
negative.
a) Scrieţi doar antetul subprogramului Calcul. (2p.)
b) Scrieţi un program în limbajul C/C++ care citeşte de la tastatură cele 50 de componente
întregi ale tabloului V şi două numere naturale nenule x şi y (x<y≤50). Programul afişează
suma elementelor pozitive din tablou, cu indici cuprinşi între x şi y inclusiv, sau 0 dacă toate
elementele menţionate sunt negative, folosind apeluri utile la subprogramul Calcul.*/

int calcul(int v[], int d, int k) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		if (i >= k) {
			if (v[i] > 0) {
				s += v[i];
			}
		}
	}
	return s;
}

int interval(int v[], int d, int x, int y) {

	int s = 0;

	for (int i = x; i < y; i++) {
		if (v[i] > 0) {
			s += v[i];
		}
	}
	return s;
}

void ex3Var97() {

	int v[100], d;

	citire(v, d);
	cout<< interval(v, d, 2,4);

}

/*Pe prima linie a fişierului text DATE.TXT se găseşte o valoare naturală k (k≤1000000).
a) Scrieţi un program C/C++ care citeşte din fişierul DATE.TXT valoarea k şi afişează, pe
ecran, toate perechile de numere naturale nenule x, y (x≤y) cu proprietatea că x2
+y2
=k.
Fiecare pereche va fi afişată pe câte o linie, numerele fiind despărţite printr-un spaţiu.
Alegeţi o metodă de rezolvare eficientă din punctul de vedere al timpului de executare.
Exemplu: dacă fişierul DATE.TXT conţine numărul 1000000, pe ecran
se vor afişa, nu neapărat în această ordine, perechile alăturate. (6p.)
 280 960
 352 936
 600 800*/

void perechi(int n) {
	float x, y;

	for (int i = 1; i * i <= n; ++i) {
		x = i * i;
		y = sqrt(n - i * i);
		if (x < y * y) {
			if (y == (int)y) {
				cout << sqrt(x) << " " << y << endl;
			}
		}
	}

}

void ex4Var97() {

	perechi(1000000);

}













