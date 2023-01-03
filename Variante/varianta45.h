#include "citire_afisare.h"


/*Scrie�i programul C/C++ care cite�te de la tastatur� num�rul natural n (0<n<100) �i un �ir
format din n numere reale. Aceste numere au at�t partea �ntreag� c�t �i partea frac�ionar�
formate din cel mult trei cifre. Programul determin� �i afi�eaz� pe ecran toate numerele din
�ir care apar o singur� dat� �n acesta.
Exemplu: dac� n=7, iar �irul este format din elementele (3.4, -151, 0.291, 3.4,
4.09, 3.4, 0.291), atunci pe ecran se va afi�a -151 4.09.*/

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void singuraAparitie(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (frecventaNumar(v, d, v[i]) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var45() {

	int v[100], d;

	citire(v, d);
	singuraAparitie(v, d);

}

/*Fi�ierul text numere.txt con�ine pe prima linie un num�r natural n (0<n<100000), iar pe a
doua linie n numere naturale, formate din cel mult dou� cifre, separate prin c�te un spa�iu.
a) Scrie�i un program C/C++, eficient at�t din punct de vedere al timpului de executare, care
afi�eaz� pe ecran toate numerele situate pe a doua linie a fi�ierului, �n ordinea cresc�toare
a valorilor lor, separate prin c�te un spa�iu.
Exemplu: dac� fi�ierul numere.txt are urm�torul con�inut:
7
12 21 22 11 9 12 3
atunci pe ecran se va afi�a: 3 9 11 12 12 21 22*/

void ex4Var45() {

	int v[100], d;

	citire(v, d);
	sortareCrescator(v, d);
	afisare(v, d);

}




















