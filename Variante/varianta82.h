#include "citire_afisare.h"


//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură trei valori naturale nenule k, n, m
(n≤10, m≤10, k≤32000) şi apoi n*m numere întregi, fiecare având cel mult 4 cifre,
reprezentând elementele unui tablou bidimensional cu liniile numerotate de la 1 la n şi
coloanele numerotate de la 1 la m.
5.
Programul determină şi afişează pe ecran produsul numerelor de
ordine ale coloanelor care conţin cel puţin o dată valoarea k. Dacă
nu există nicio coloană care să conţină cel puţin o dată valoarea k,
programul va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru k=3, n=5, m=4 şi matricea alăturată se va afişa
6, deoarece coloanele 2 şi 3 conţin numărul k=3. (10p.)
2 4 5 -8
5 3 7 9
6 -2 3 10
7 4 2 37
8 7 3 13*/

bool nrIntrodus(int a[100][100], int m, int c, int k) {

	for (int i = 0; i < m; i++) {
		if (a[i][c] == k) {
			return true;
		}
	}
	return false;
}

void suma(int a[100][100], int n, int m, int k) {
	int s = 0;

	for (int i = 0; i < m; i++) {
		if (nrIntrodus(a, m, i, k) == true) {
			s += i + 1;
		}
	}
	cout << s;
}

void ex5Var82() {

	int a[100][100], n, m;
	citireMatrice(a, n, m);

	suma(a, n, m, 3);

}

//s3

/*Folosind cifrele {2,3,4} se generează, în ordinea crescătoare a valorii, toate numerele
impare formate din trei cifre distincte. Astfel se obţin, în ordine, numerele: 243, 423.
Folosind aceeaşi metodă, se generează numerele pare formate din patru cifre distincte din
mulţimea {2,3,4,5}. Care va fi al 5-lea număr generat?*/

int s[100]{}, n = 4, m = 5;

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

	for (int i = 2; i <= m; i++) {
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

void ex1Var82() {

	back(0);

}

/*Scrieţi în C/C++ definiţia completă a subprogramului suma care are doi parametri:
- n, prin care primeşte un număr natural (1≤n≤100);
- v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi situate în
intervalul [10,30000]. Funcţia returnează suma numerelor din tabloul v care au ultimele
două cifre identice.
Exemplu: dacă n=4 şi v=(123, 122, 423, 555) funcţia va returna 677 (=122+555).*/

void sumaNumere(int v[], int d) {
	int s = 0;

	for (int i = 0; i < d; i++) {
		int aux = v[i];
		int a = v[i] % 10;
		v[i] /= 10;
		if (v[i] % 10 == a) {
			s += aux;
		}
	}
	cout << s;
}

void ex3Var82() {

	int v[100], d;

	citire(v, d);
	sumaNumere(v, d);

}

/*Fişierul text NUMERE.IN conţine, pe mai multe linii, cel mult 30000 de numere naturale
nenule mai mici sau egale cu 500, numerele de pe fiecare linie fiind despărţite prin câte un
spaţiu. Fişierul conţine cel puţin două numere distincte, fiecare având două cifre.
a) Scrieţi programul C/C++ care citeşte toate numerele din fişierul NUMERE.IN şi creează
fişierul text NUMERE.OUT care să conţină pe prima linie cel mai mare număr de două cifre
din fişierul NUMERE.IN, şi de câte ori apare el în acest fişier, iar pe a doua linie, cel mai mic
număr de două cifre din fişierul NUMERE.IN şi de câte ori apare el în acest fişier. Alegeţi o
metodă de rezolvare eficientă din punct de vedere al memoriei utilizate şi al timpului de
executare. (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită la punctul a), explicând în
ce constă eficienţa ei (3 – 4 rânduri). (4p.)
Exemplu: dacă fişierul
NUMERE.IN are conţinutul
alăturat:
2 253 34 3
6 88 9 2 3
4 54 34 88
atunci fişierul NUMERE.OUT va
avea următorul conţinut:
88 2
34 2*/

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void maximSiMinim(int v[], int d) {

	int maxim = 0, minim = 1000;

	for (int i = 0; i < d; i++) {
		if (v[i] > maxim) {
			maxim = v[i];
		}
		if (v[i] < minim) {
			minim = v[i];
		}
	}

	cout << maxim << " " << frecventaNumar(v, d, maxim) << endl;
	cout << minim << " " << frecventaNumar(v, d, minim);

}

void ex4Var82() {

	int v[100], d;
	citire(v, d);

	//maximSiMinim(v, d);

}











