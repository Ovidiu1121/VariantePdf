#include "varianta16.h"



/*Scrieţi definiţia completă a subprogramului interval care are doi parametri a şi n, prin
care primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici
decât 1000 şi respectiv numărul efectiv de elemente din tabloul unidimensional.
Subprogramul returnează numărul de elemente din tabloul unidimensional care aparţin
intervalului închis determinat de primul şi respectiv ultimul element al tabloului.
Exemplu: dacă tabloul are 6 elemente şi este de forma (12,27,6,8,9,2), subprogramul
va returna valoarea 5.*/

int intervalVec(int v[], int d) {
	int ct = 0;
	int a = v[0], b = v[d - 1];

	for (int i = 0; i < d; i++) {
		if (a > b) {
			if (v[i] <= a && v[i] >= b) {
				ct++;
			}
		}
		else {
			if (v[i] >= a && v[i] <= b) {
				ct++;
			}
		}
	}
	return ct;
}

void ex3Var17() {

	int v[100], d;

	citire(v, d);
	cout << intervalVec(v, d);

}

/*În fişierul numere.txt pe prima linie este memorat un număr natural n (n≤10000), iar pe
linia următoare un şir de n numere naturale distincte două câte două, separate prin câte un
spaţiu, cu maximum 4 cifre fiecare. Se cere afişarea pe ecran a poziţiei pe care s-ar găsi
primul element din şirul aflat pe linia a doua a fişierului, în cazul în care şirul ar fi ordonat
crescător. Numerotarea poziţiilor elementelor în cadrul şirului este de la 1 la n. Alegeţi un
algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al timpului de
executare.
Exemplu: dacă fişierul numere.txt conţine:
6
267 13 45 628 7 79
se va afişa 5, deoarece primul element din şirul iniţial, 267, s-ar găsi pe poziţia a cincea în
şirul ordonat crescător (7 13 45 79 267 628).*/

int pozitiaDupaSortare(int v[], int d) {

	int k = v[0];

	sortareCrescator(v, d);

	for (int i = 1; i <= d; i++) {
		if (v[i] == k) {
			return i;
		}
	}
	return - 1;
}

void ex4Var17() {

	int v[100], d;

	citire(v, d);
	cout << pozitiaDupaSortare(v, d);

}









