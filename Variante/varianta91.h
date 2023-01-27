#include "citire_afisare.h"


/*Subprogramul par prime�te prin singurul s�u parametru, n, un num�r natural nenul cu cel
mult 8 cifre �i returneaz� valoarea 1 dac� n con�ine cel pu�in o cifr� par�, sau returneaz�
valoarea 0 �n caz contrar.
Exemplu: pentru n=723 subprogramul va returna valoarea 1.
a) Scrie�i numai antetul subprogramului par. (2p.)
b) Scrie�i un program C/C++ care cite�te de la tastatur� un num�r natural nenul n cu cel
mult trei cifre, apoi un �ir de n numere naturale, cu cel pu�in dou� �i cel mult 8 cifre fiecare,
�i afi�eaz� pe ecran num�rul de valori din �irul citit care au numai cifra unit��ilor par�,
celelalte cifre fiind impare. Se vor utiliza apeluri utile ale subprogramului par.
Exemplu: dac� n=4, iar �irul citit este 7354, 123864, 51731, 570 se va afi�a 2 (numerele
7354 �i 570 respect� condi�ia cerut�). */

bool par(int n) {

	while (n) {
		if (n % 10 % 2 == 0) {
			return true;
		}
		n /= 10;
	}
	return false;
}

bool cifraUnitatilorPara(int n) {
	if (n % 10 % 2 == 0) {
		n = n / 10;
	}
	else {
		return false;
	}

	while (n) {
		if (n % 10 % 2 != 1) {
			return false;
		}
		n /= 10;
	}
	return true;
}

void inVector(int v[], int d) {
	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (cifraUnitatilorPara(v[i]) == true) {
			ct++;
		}
	}
	cout << ct;
}

void ex3Var91() {

	int v[100], d;

	citire(v, d);
	inVector(v, d);

}

/*Fi�ierul numere.in con�ine cel mult 5000 de numere reale, c�te unul pe fiecare linie. Se
cere s� se scrie un program care s� citesc� toate numerele din fi�ier �i s� afi�eze pe ecran
num�rul de ordine al primei, respectiv al ultimei linii pe care se afl� cel mai mare num�r din
fi�ier. Cele dou� numere vor fi separate printr-un spa�iu. Alege�i o metod� de rezolvare
eficient� din punct de vedere al spa�iului de memorare �i al timpului de executare.
Exemplu: dac� fi�ierul are con�inutul al�turat, pe ecran se vor afi�a numerele 2 6.
a) Descrie�i succint, �n limbaj natural, metoda de rezolvare aleas�, explic�nd �n ce
const� eficien�a ei. (4p.)
b) Scrie�i programul C/C++ corespunz�tor metodei descrise. (6p.)
3.5
7
-4
7
2
7
6.3
5  */

void liniiMaxim(int a[100][100], int n, int m) {

	int maxim = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > maxim) {
				maxim = a[i][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == maxim) {
				cout << i + 1 << " ";
			}
		}
	}

}

void ex4Var91() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	liniiMaxim(a, n, m);
}


















