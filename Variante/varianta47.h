#include "varianta46.h"



/*Fi�ierul text bac.txt con�ine pe prima linie un num�r natural n (n<100), iar pe a doua
linie, separate prin c�te un spa�iu, n numere naturale de cel mult 8 cifre fiecare.
Scrie�i un program C/C++ care cite�te de la tastatur� un num�r natural k (k<50) precum
�i numerele din fi�ierul bac.txt �i afi�eaz� pe ecran, cu c�te un spa�iu �ntre ele, toate
numerele de pe a doua linie a fi�ierului care sunt puteri ale lui k. Un num�r natural x este
putere a lui k dac� exist� un num�r natural y astfel �nc�t x=k
y. Dac� nu exist� un
asemenea num�r pe a doua linie a fi�ierului, se afi�eaz� pe ecran mesajul NU.
Exemplu: dac� se cite�te de la tastatur� k=2, iar
fi�ierul are con�inutul al�turat
8
32 56 317 809 256 2 1 60, atunci pe ecran se
afi�eaz� numerele:
32 256 2 1 */

bool putere(int a, int k) {
	int ct = 0;
	int aux = a;
	while (a!=1) {
		ct++;
		a = a / k;
	}
	if (pow(k, ct) == aux) {
		return true;
	}
	return false;
}

void puteriVector(int v[], int d, int k) {

	for (int i = 0; i < d; i++) {
		if (putere(v[i], k) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var47() {

	int v[100], d;

	citire(v, d);
	puteriVector(v, d, 2);

}

/*Scrie�i programul C/C++ care cite�te de la tastatur� un num�r natural n (0<n<25), apoi
un �ir de n numere naturale nenule cu cel mult 9 cifre fiecare �i care afi�eaz� pe ecran,
separate prin c�te un spa�iu, numerele din �ir care au suma cifrelor maxim�, folosind
apeluri utile ale subprogramului cif.
Exemplu: dac� pentru n=8 se cite�te �irul de numere 274 56018 354 8219 293 287
932 634 atunci, pe ecran, se afi�eaz� numerele 56018 8219.*/


void sumaCifreMaxVec(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		int s = sumaCifre(v[i]);
		if (s > maxim) {
			maxim = s;
		}
	}

	for (int i = 0; i < d; i++) {
		if (sumaCifre(v[i]) == maxim) {
			cout << v[i] << " ";
		}
	}
}

void ex4Var47() {

	int v[100], d;

	citire(v, d);
	sumaCifreMaxVec(v, d);
}














