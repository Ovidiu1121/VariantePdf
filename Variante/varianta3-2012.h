#include "citire_afisare.h"

/*Se consider� subprogramul zero, cu doi parametri:
� n, prin care prime�te o valoare natural� 2<n<50;
� v, prin care prime�te un tablou unidimensional cu 2�n elemente, numere naturale cu cel
mult 4 cifre. Num�rul de elemente pare este egal cu num�rul de elemente impare.
Elementele au indici de la 1 la 2�n.
Subprogramul modific� tabloul astfel �nc�t elementele impare s� aib� indici impari, iar
elementele pare s� aib� indici pari. Tabloul modificat este furnizat tot prin parametrul v.
Scrie�i defini�ia complet� a subprogramului.
Exemplu: dac� n=5 �i v=(4, 5, 0, 9, 10, 7, 15, 3, 8, 10),
atunci dup� apel o solu�ie posibil� este: v=(5, 4, 9, 0, 15, 10, 7, 8, 3, 10).*/

bool paritateDiferita(int a, int b) {

	if (a % 2 == 0 && b % 2 == 0) {
		return false;
	}
	else if (a % 2 == 1 && b % 2 == 1) {
		return false;
	}
	return true;
}

void rearanjare(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (paritateDiferita(i, v[i]) == true) {
			if (v[i] % 2 == 0) {
				int j = i + 1;
				while (v[j] % 2 == 0) {
					j++;
				}
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
			else if (v[i] % 2 == 1) {
				int j = i + 1;
				while (v[j] % 2 == 1) {
					j++;
				}
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void ex3Var3() {

	int v[100], d;

	citire(v, d);
	rearanjare(v, d);
	afisare(v, d);

}

/*Fi�ierul bac.txt con�ine pe prima linie un num�r natural par n cu cel mult 3 cifre, iar pe
urm�toarea linie un �ir de n numere naturale cu cel mult nou� cifre. Numerele din �ir sunt
separate prin c�te un spa�iu.
Se cere s� se afi�eze pe ecran mesajul Da dac� �n �ir exist� un element care s� fie strict
mai mare dec�t jum�tate dintre numerele din �ir.
Dac� �n �ir nu se afl� o astfel de valoare, pe ecran se afi�eaz� mesajul Nu.
Pentru determinarea num�rului cerut se utilizeaz� un algoritm eficient din punctul de
vedere al memoriei �i al timpului de executare.
Exemplu: dac� fi�ierul bac.txt are con�inutul
6
8 34 34 34 5 34
atunci pe ecran se afi�eaz� Nu, iar dac� fi�ierul are con�inutul
8
1 5 6 12 3 12 12 9
atunci pe ecran se afi�eaz� Da*/

void maximVec(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] > maxim) {
			maxim = v[i];
		}
	}
	int ct = 0;
	for (int i = 0; i < d; i++) {
		if (maxim > v[i]) {
			ct++;
		}
	}
	if (ct > d / 2) {
		cout << "Da";
	}
	else {
		cout << "Nu";
	}
}

void ex4Var3() {

	int v[100], d;
	citire(v, d);
	maximVec(v, d);

}














