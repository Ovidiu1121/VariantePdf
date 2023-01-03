#include "citire_afisare.h"


//s2

/*Scrie�i un program C/C++ care cite�te de la tastatur� dou� numere naturale n �i k
(2<n<25, 0<k<n) �i construie�te �n memorie o matrice cu n linii �i n coloane format�
numai din valori 1,2,3 �i 4 astfel �nc�t: elementele aflate la intersec�ia primelor k linii cu
primele k coloane sunt egale cu 1, elementele aflate la intersec�ia primelor k linii cu ultimele
n-k coloane sunt egale cu 2, elementele aflate la intersec�ia ultimelor n-k linii cu primele k
coloane sunt egale cu 3, elementele aflate la intersec�ia ultimelor n-k linii cu ultimele n-k
coloane sunt egale cu 4 ca �n exemplul de mai jos.
5.
Programul afi�eaz� pe ecran matricea construit�, fiecare linie a
matricei pe o linie a ecranului �i elementele de pe aceea�i linie
separate prin c�te un singur spa�iu.
Exemplu: pentru n=5, k=3 se construie�te �n memorie �i se afi�eaz�
matricea al�turat�. (10p.)
1 1 1 2 2
1 1 1 2 2
1 1 1 2 2
3 3 3 4 4
3 3 3 4 4*/

void matrice(int n, int k) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < k) {
				if (j < k) {
					a[i][j] = 1;
				}
				else if(i < k&& j >= k) {
					a[i][j] = 2;
				}
			}else if (j < k) {
				a[i][j] = 3;
			}
			else {
				a[i][j] = 4;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var56() {

	matrice(5, 3);

}

//3

/*Fi�ierul text numere.txt con�ine, pe o singur� linie, cel mult 1000 de numere naturale
nenule cu cel mult 4 cifre fiecare, numerele fiind separate prin c�te un spa�iu. Scrie�i un
program C/C++ care cite�te toate numerele din fi�ier �i scrie pe ecran toate numerele pare
citite, ordonate cresc�tor. Dac� fi�ierul numere.txt nu con�ine niciun num�r par, atunci se
va afi�a pe ecran mesajul nu exista.
Exemplu: dac� fi�ierul numere.txt con�ine numerele 2 3 1 4 7 2 5 8 6, atunci pe
ecran se va afi�a: 2 2 4 6 8*/

void nrPareOrdonate(int v[], int d) {
	sortareCrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var56() {

	int v[100], d;

	citire(v, d);
	nrPareOrdonate(v, d);

}

/*Se consider� subprogramele
� prim, care prime�te prin intermediul unicului s�u parametrului x un num�r natural nenul
de cel mult 4 cifre �i returneaz� valoarea 1 dac� x este un num�r prim �i 0 �n caz contrar;
� numar, care prime�te prin intermediul parametrului x un num�r natural nenul de cel mult
4 cifre �i furnizeaz� prin intermediul parametrului nrp num�rul de numere prime mai mici
dec�t x.
a) Scrie�i numai antetul subprogramului prim �i defini�ia complet� a subprogramului
numar. (6p.)
b) Scrie�i un programul C/C++ �n care se citesc de la tastatur� dou� numere naturale
nenule de cel mult 4 cifre, a �i b (a<b), �i, prin apeluri utile ale subprogramului numar, se
verific� dac� intervalul �nchis [a,b] con�ine cel pu�in un num�r prim. Programul va afi�a pe
ecran, �n caz afirmativ, mesajul DA, iar �n caz contrar, mesajul NU.*/

int nrp(int x) {
	int ct = 0;
	for (int i = 2; i <= x; i++) {
		if (prim(i)) {
			ct++;
		}
	}
	return ct;
}

bool interval(int a, int b) {

	for (int i = a; i <= b; i++) {
		if (prim(i)) {
			return true;
		}
	}
	return false;
}

void ex4Var56() {

	cout << interval(3, 20);

}














