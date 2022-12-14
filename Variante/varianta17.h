#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<20),
construieşte în memorie şi afişează pe ecran o matrice cu n linii şi n coloane, în care
fiecare element de pe diagonala secundară are valoarea n, fiecare element aflat deasupra
diagonalei secundare este mai mic cu o unitate decât vecinul aflat pe aceeaşi linie în
dreapta lui şi fiecare element aflat sub diagonala secundară este mai mare cu o unitate
decât vecinul aflat pe aceeaşi linie în stânga lui.
Elementele matricei vor fi afişate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=5 se va afişa matricea alăturată. 
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9*/

void matrice(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == n - i - 1) {
				a[i][j] = n;
			}
			else if (j < n - i - 1) {
				a[i][j] = a[i + 1][j] - 1;
			}
			else if (j > n - i - 1) {
				a[i][j] = a[i - 1][j] + 1;
			}
		}
	}

	for (int i = 0; i< n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var17() {

	matrice(5);

}

/*Un algoritm generează în ordine descrescătoare toate numerele de 5 cifre, fiecare dintre ele
având cifrele în ordine strict crescătoare. Ştiind că primele cinci soluţii generate sunt 56789,
46789, 45789, 45689, 45679, precizaţi care sunt ultimele trei soluţii generate, în ordinea
generării.*/

int s[100], n = 9, m = 5;

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] <= s[i]) {
			return 0;
		}
	}
	return 1;
}

int solutie(int k) {

	if (k == m - 1) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k) {

	for (int i = n; i >0; i--) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex2Var17() {

	back(0);
}

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

void sortareCrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

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









