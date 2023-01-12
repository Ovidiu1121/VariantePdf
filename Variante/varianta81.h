#include "citire_afisare.h"


//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură trei valori naturale nenule k, n, m
(n≤10, m≤10, k≤32000) şi apoi n*m numere întregi, fiecare având cel mult 4 cifre,
reprezentând elementele unui tablou bidimensional cu liniile numerotate de la 1 la n şi
coloanele numerotate de la 1 la m.
5.
Programul determină şi afişează pe ecran suma numerelor de ordine
ale coloanelor care conţin cel puţin o dată valoarea k. Dacă nu există
nicio coloană care să conţină cel puţin o dată valoarea k, programul
va afişa pe ecran mesajul NU EXISTA.
Exemplu:pentru k=3,n=5,m=4 şi matricea alăturată se va afişa 5,
deoarece coloanele 2 şi 3 conţin numărul k=3. (10p.)
2 4 5 -8
1 3 7 9
4 -2 3 10
5 4 2 37
6 7 3 13*/

bool nrIntrodus(int a[100][100], int m, int c, int k) {

	for (int i = 0; i < m; i++) {
		if (a[i][c] == k) {
			return true;
		}
	}
	return false;
}

void suma(int a[100][100], int n, int m, int k) {
	int s =0;

	for (int i = 0; i < m; i++) {
		if (nrIntrodus(a, m, i, k) == true) {
			s += i+1;
		}
	}
	cout << s;
}

void ex5Var81() {

	int a[100][100], n, m;
	citireMatrice(a, n, m);

	suma(a, n, m, 3);

}

//s3

/*Folosind cifrele {1,2,3} se generează, în ordinea crescătoare a valorii, toate numerele
pare formate din trei cifre distincte. Astfel, se obţin în ordine, numerele: 132, 312. Folosind
aceeaşi metodă, se generează numerele pare formate din patru cifre distincte din mulţimea
{1,2,3,4}. Care va fi al 4-lea număr generat ?*/

int s[100]{}, n = 4, m = 4;


void tipar() {

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	cout << endl;
}

int valid(int k) {


	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 0;
		}
	}

	return 1;
}

int solutie(int k) {

	if (k == n - 1) {
		return 1;
	}
	return 0;
}

void back(int k) {

	for (int i = 1; i <= m; i++) {
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

void ex1Var81() {

	back(0);

}

/*Scrieţi în C/C++ definiţia completă a subprogramului medie care are doi parametri:
- n, prin care primeşte un număr natural (1≤n≤100) ;
- v, prin care primeşte un tablou unidimensional cu n elemente, numere naturale, fiecare
element având cel mult patru cifre.
Subprogramul returnează media aritmetică a elementelor din tablou.*/

void medieAritmetica(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		s += v[i];
	}
	cout<< s / d;
}

void ex3Vra81() {

	int v[100], d;
	citire(v, d);
	medieAritmetica(v, d);

}

/*Fişierul text NUMERE.IN conţine, pe mai multe linii, cel mult 30000 de numere naturale
nenule mai mici sau egale cu 500, despărţite prin câte un spaţiu.
a) Scrieţi programul C/C++ care, utilizând un algoritm eficient din punct de vedere al timpului
de executare, afişează pe ecran, în ordine crescătoare, toate numerele care au apărut o
singură dată din fişierul NUMERE.IN, despărţite prin câte un spaţiu.
4.
Exemplu: dacă fişierul NUMERE.IN conţine numerele scrise alăturat, se vor
afişa valorile următoare: 3 4 5 6 34 (6p.)
2 23 34 3
8 9 9 23
6 8 9 2
4 5 23 9*/

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void frecventa1(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (frecventaNumar(v, d, v[i]) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex4Var81() {

	int v[100], d;

	citire(v, d);
	frecventa1(v, d);

}










