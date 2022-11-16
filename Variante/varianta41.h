#include "varianta40.h"


/*Scrie�i un subprogram DIST, cu doi parametri, care prime�te prin intermediul parametrului a
un tablou unidimensional cu cel mult 100 de elemente, numere naturale de cel mult 4 cifre
fiecare, �i prin intermediul parametrului n un num�r natural nenul, n<100, ce reprezint�
num�rul de elemente din tablou. Subprogramul returneaz� valoarea 1 dac� toate
elementele tabloului a sunt distincte �i dac� diferen�a absolut� a oric�ror dou� elemente
vecine din tablou este diferit� de 1, altfel return�nd valoarea 0.*/

bool diferentaAbsoluta(int v[], int d) {

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (j != i) {
				if (v[i] == v[j]) {
					return false;
				}
			}
		}
	}

	for (int i = 0; i < d - 1; i++) {
		if (abs(v[i] - v[i + 1]) == 1) {
			return false;
		}
	}
	return true;
}

void ex3Var41() {
	
	int v[100], d;

	citire(v, d);
	cout << diferentaAbsoluta(v, d);

}

/*Scrie�i un program C/C++ care determin� �n mod eficient din punct de vedere al
timpului de executare, cea mai mare cifr� dintre cele situate pe a doua linie a fi�ierului,
precum �i num�rul de apari�ii ale acesteia. Cele dou� numere vor fi afi�ate pe o singur�
linie a ecranului, separate printr-un spa�iu.
Exemplu: daca fi�ierul numere.txt are urm�torul con�inut:
7
3 5 2 1 5 3 1
atunci pe ecran se va afi�a: 5 2.*/

void ceaMaiMareCifra(int v[], int d) {

	int ct = 0;
	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] > maxim) {
			maxim = v[i];
		}
	}

	for (int i = 0; i < d; i++) {
		if (v[i] == maxim) {
			ct++;
		}
	}
	cout << maxim << " " << ct;
}

void ex4Var41() {

	int v[100], d;

	citire(v, d);
	ceaMaiMareCifra(v, d);

}




















