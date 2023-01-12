#include "citire_afisare.h"

/*Scrie�i un program C/C++ care cite�te de la tastatur� dou� numere naturale nenule n �i k
(0<n<100, 0<k<4) �i apoi n numere reale pozitive care au cel mult 3 cifre la partea
�ntreag� �i cel mult 5 cifre zecimale �i afi�eaz� pe ecran num�rul de valori reale citite care
au mai mult de k cifre zecimale.
Exemplu: dac� pentru n se cite�te valoarea 5 �i pentru k valoarea 2 �i apoi �irul de
numere reale 6.2 4.234 2 8.13 10.001 pe ecran se va afi�a valoarea 2.*/

void ex3Var77() {



}

/*Fi�ierul text bac.in con�ine pe prima sa linie un num�r natural n (0<n<10000), iar pe
urm�toarea linie n numere naturale din intervalul [1,100] separate prin c�te un spa�iu.
Se cere s� se citesc� din fi�ier toate numerele �i s� se afi�eze pe ecran num�rul sau
numerele care apar de cele mai multe ori printre numerele citite de pe a doua linie a
fi�ierului. Numerele afi�ate vor fi separate prin c�te un spa�iu. Alege�i un algoritm de
rezolvare eficient at�t din punctul de vedere al timpului de executare c�t �i al gestion�rii
memoriei. .
Exemplu: dac� fi�ierul bac.in are urm�torul con�inut:
12
1 2 2 3 2 9 3 3 9 9 7 1
pe ecran se vor afi�a valorile 2, 3 �i 9, nu neap�rat �n aceast� ordine.*/

int frecventaNumar(int v[], int d, int n) {

	int f[1000]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void frecventaMax(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		int k = frecventaNumar(v, d, v[i]);
		if (k > maxim) {
			maxim = k;
		}
	}
	int a[100], b = 0;
	for (int i = 0; i < d; i++) {
		if (frecventaNumar(v, d, v[i]) == maxim) {
			if (nrGasit(a, b, v[i]) == false) {
				a[b] = v[i];
				b++;
			}
		}
	}

	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}

}

void ex4Var77() {

	int v[100], d;
	citire(v, d);

	frecventaMax(v, d);

}






















