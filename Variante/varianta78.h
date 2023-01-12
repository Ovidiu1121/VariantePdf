#include "citire_afisare.h"

/*a) Scrie�i doar antetul unui subprogram prim cu doi parametri, care prime�te prin
intermediul parametrului n un num�r natural cu cel mult patru cifre �i returneaz� prin
intermediului parametrului p valoarea 1 dac� n este prim �i 0 �n caz contrar. (2p.)
b) Scrie�i un program C/C++ care cite�te de la tastatur� un num�r natural n (3<n<10000)
�i afi�eaz� pe ecran, desp�r�ite prin c�te un spa�iu, primele n numerele prime, folosind
apeluri utile ale subprogramului prim. (8p.)
Exemplu: pentru n=4 pe ecran vor fi afi�ate numerele 2 3 5 7*/

void primeleNumerePrime(int n) {

	int k = 0;
	int i = 2;

	while (k < n) {
		if (prim(i) == true) {
			cout << i << " ";
			k++;
		}
		i++;
	}
	
}

void ex3Var78() {

	primeleNumerePrime(4);

}

/*Fi�ierul text bac.in con�ine pe prima sa linie un num�r natural n (0<n<10000), iar pe
urm�toarea linie n numere naturale din intervalul [1,100]. Se cere s� se citesc� din fi�ier
toate numerele �i s� se afi�eze pe ecran, �n ordine descresc�toare, toate numerele care
apar pe a doua linie a fi�ierului �i num�rul de apari�ii ale fiec�ruia. Dac� un num�r apare de
mai multe ori, el va fi afi�at o singur� dat�. Fiecare pereche �valoare - num�r de apari�ii� va
fi afi�at� pe c�te o linie a ecranului, numerele fiind separate printr-un spa�iu, ca �n exemplu.
Alege�i un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
Exemplu: dac� fi�ierul bac.in are urm�torul con�inut:
12
1 2 2 3 2 2 3 3 2 3 2 1
pe ecran se vor afi�a, �n aceast� ordine, perechile:
3 4
2 6
1 2*/

int frecventaNumar(int v[], int d, int n) {

	int f[1000]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void perechi(int v[], int d) {
	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (nrGasit(a, b, v[i]) == false) {
			a[b] = v[i];
			b++;
		}
	}

	for (int i = 0; i < b; i++) {
		cout << a[i] << " " << frecventaNumar(v, d, a[i]) << endl;
	}
}

void ex4Var78() {

	int v[100], d;

	citire(v, d);
	perechi(v, d);

}























