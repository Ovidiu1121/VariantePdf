#include "citire_afisare.h"


/*Se considerã subprogramul minus, cu doi parametri:
• n, prin care primeºte o valoare naturalã 2<n<50;
• v, prin care primeºte un tablou unidimensional cu n elemente, numere întregi cu cel mult
4 cifre. Cel puþin unul dintre elementele tabloului este nenul.
Dupã fiecare element nenul din tablou, subprogramul insereazã câte un nou element, cu
aceeaºi valoare absolutã, dar cu semn opus, ca în exemplu. Tabloul modificat, precum ºi
valoarea actualizatã a lui n, sunt furnizate tot prin parametrii v, respectiv n.
Scrieþi în limbajul C/C++ definiþia completã a subprogramului.
Exemplu: dacã n=5 ºi v=(4, -5, 0, 9, 0),
atunci dupã apel n=8, iar v=(4, -4, -5, 5, 0, 9, -9, 0).*/

void inserare(int v[], int& d, int poz, int x) {

	for (int i = d - 1; i >= poz; i--) {
		v[i + 1] = v[i];
	}
	v[poz] = x;
	d++;

}

void adaugareOpus(int v[], int &d) {

	for (int i = 0; i < d; i++) {
		inserare(v, d, i + 1, v[i] * (-1));
		i++;
	}

}

void ex3Var2() {

	int v[100], d;
	citire(v, d);
	adaugareOpus(v, d);
	afisare(v, d);

}

/*Fiºierul bac.txt conþine pe prima linie un numãr natural par n cu cel mult patru cifre, iar
pe urmãtoarea linie un ºir de n numere naturale cu cel mult nouã cifre. Numerele din ºir
sunt în ordine crescãtoare ºi sunt separate prin câte un spaþiu.
Se cere sã se afiºeze pe ecran cel mai mare numãr din prima jumãtate a ºirului care sã fie
strict mai mic decât oricare numãr din a doua jumãtate a ºirului. Dacã în fiºier nu se aflã o
astfel de valoare, pe ecran se afiºeazã mesajul Nu exista.
Pentru determinarea numãrului cerut se utilizeazã un algoritm eficient din punctul de
vedere al memoriei ºi al timpului de executare.
Exemplu: dacã fiºierul bac.txt are conþinutul
30
1 3 5 5 ... 5 5 7 10
 •••••••••••
 de 26 de ori
atunci pe ecran se afiºeazã 3, iar dacã fiºierul are conþinutul
6
3 3 3 3 9 15*/

void nrMax(int v[], int d) {

	int maxim = 0, minim = 1000;

	for (int i = d - 1; i >= d / 2; i--) {
		if (v[i] < minim) {
			minim = v[i];
		}
	}
	bool flag = false;
	for (int i = 0; i < d / 2; i++) {
		if (v[i] < minim) {
			if (v[i] > maxim) {
				maxim = v[i];
				flag = true;
			}
		}
	}

	if (flag == false) {
		cout << "Nu exista";
		return;
	}

	cout << maxim;

}

void ex4Var2() {

	int v[100], d;

	citire(v, d);
	nrMax(v, d);


}











