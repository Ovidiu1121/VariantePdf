#include "citire_afisare.h"


/*Se consider� subprogramul minus, cu doi parametri:
� n, prin care prime�te o valoare natural� 2<n<50;
� v, prin care prime�te un tablou unidimensional cu n elemente, numere �ntregi cu cel mult
4 cifre. Cel pu�in unul dintre elementele tabloului este nenul.
Dup� fiecare element nenul din tablou, subprogramul insereaz� c�te un nou element, cu
aceea�i valoare absolut�, dar cu semn opus, ca �n exemplu. Tabloul modificat, precum �i
valoarea actualizat� a lui n, sunt furnizate tot prin parametrii v, respectiv n.
Scrie�i �n limbajul C/C++ defini�ia complet� a subprogramului.
Exemplu: dac� n=5 �i v=(4, -5, 0, 9, 0),
atunci dup� apel n=8, iar v=(4, -4, -5, 5, 0, 9, -9, 0).*/

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

/*Fi�ierul bac.txt con�ine pe prima linie un num�r natural par n cu cel mult patru cifre, iar
pe urm�toarea linie un �ir de n numere naturale cu cel mult nou� cifre. Numerele din �ir
sunt �n ordine cresc�toare �i sunt separate prin c�te un spa�iu.
Se cere s� se afi�eze pe ecran cel mai mare num�r din prima jum�tate a �irului care s� fie
strict mai mic dec�t oricare num�r din a doua jum�tate a �irului. Dac� �n fi�ier nu se afl� o
astfel de valoare, pe ecran se afi�eaz� mesajul Nu exista.
Pentru determinarea num�rului cerut se utilizeaz� un algoritm eficient din punctul de
vedere al memoriei �i al timpului de executare.
Exemplu: dac� fi�ierul bac.txt are con�inutul
30
1 3 5 5 ... 5 5 7 10
 �����������
 de 26 de ori
atunci pe ecran se afi�eaz� 3, iar dac� fi�ierul are con�inutul
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











