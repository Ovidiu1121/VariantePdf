#include  "citire_afisare.h"

//s2

/*Se consideră un tablou bidimensional cu m linii şi n coloane (1≤m≤100, 1≤n≤100), ale cărui
elemente aparţin mulţimii {0,1,2}. Scrieţi un program C/C++ citeşte de la tastatură valorile m,
n şi elementele tabloului şi care afişează pe ecran numerele de ordine ale coloanelor pentru
care produsul elementelor situate pe ele, este maxim. Liniile şi coloanele tabloului se
numerotează de la 1 la m, respectiv de la 1 la n. Numerele se vor afişa separate prin câte
un spaţiu.
5.
Exemplu: pentru m=4 şi n=4 şi tabloul alăturat se va afişa:
1 2
(10p.)
2 1 1 0
1 1 1 1
2 2 2 1
1 2 1 1*/

int produsMaxColoana(int a[100][100], int m, int n) {

	int maxim = 0, p;

	for (int i = 0; i < m; i++) {
		p = 1;
		for (int j = 0; j < n; j++) {
			p *= a[i][j];
		}
		if (p > maxim) {
			maxim = p;
		}
	}
	return maxim;

}

void indiciiCuProdusMax(int a[100][100], int n, int m) {
	int k = produsMaxColoana(a, n, m);
	int p;
	for (int i = 0; i < m; i++) {
		p = 1;
		for (int j = 0; j < n; j++) {
			p *= a[i][j];
		}
		if (p == k) {
			cout << i;
		}
	}

}

void ex5Var25() {

	int a[100][100],n,m;

	citireMatrice(a, n, m);
	indiciiCuProdusMax(a, n, m);

}

//s3

/*Un program citeşte o valoare naturală nenulă impară pentru n şi apoi generează şi afişează
în ordine crescătoare lexicografic toate combinaţiile formate din n cifre care îndeplinesc
următoarele proprietăţi:
- încep şi se termină cu 0;
- modulul diferenţei între oricare două cifre alăturate dintr-o combinaţie este 1.
Astfel, pentru n=5, combinaţiile afişate sunt, în ordine, următoarele: 01010, 01210. Dacă
se rulează acest program şi se citeşte pentru n valoarea 7, imediat după combinaţia
0101210 va fi afişată combinaţia:*/


void ex1Var25() {



}

/*Subprogramul f primeşte prin intermediul parametrului n un număr natural nenul (1≤n≤9),
iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale,
fiecare dintre acestea reprezentând câte o cifră a unui număr. Astfel, a0 reprezintă cifra
unităţilor numărului, a1 cifra zecilor etc.
Subprogramul furnizează prin parametrul k o valoare naturală egală cu numărul obţinut din
cifrele pare reţinute în tabloul a sau valoarea -1 dacă în tablou nu există nicio cifră pară.
Scrieţi definiţia completă a subprogramului f.
Exemple: dacă subprogramul se apelează pentru n=6 şi pentru taboul a având valorile
(2,3,5,6,4,1), parametrul k va furniza valoarea 462. Dacă subprogramul se apelează
pentru n=4 şi pentru a reţinând valorile (0,0,1,1), k va furniza valoarea 0. Dacă
subprogramul se apelează pentru n=3 şi pentru a reţinând valorile (3,7,1), k va furniza
valoarea -1.*/

void numarDinCifrePare(int v[], int d) {
	int k = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			k = k * 10 + v[i];
		}
	}
	cout << k;
}

void ex3Var25() {

	int v[100], d;

	citire(v, d);
	numarDinCifrePare(v, d);

}

/*Fişierul text NUMAR.TXT conţine pe prima linie un număr real pozitiv x care are cel mult
două cifre la partea întreagă şi cel mult şapte cifre după punctul zecimal..
a) Scrieţi un program C/C++ care, utilizând un algoritm eficient din punct de vedere al
timpului de executare şi al memoriei utilizate, afişează pe ecran, separate printr-un spaţiu,
două numere naturale al căror raport este egal cu x şi a căror diferenţă absolută este
minimă.
Exemplu: dacă fişierul conţine valoarea alăturată( 0.375), se vor afişa pe ecran
numerele 3 8. */

int zecimale(double x) {

	for (int i = 1; i < 1000; i++) {
		double k = x * i;
		if (int(k)) {
			return i;
		}
	}
	return -1;
}

void ex4Var25() {

	cout<< zecimale(0.375);

}
















