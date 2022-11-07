#include "varianta19.h"


/*Subprogramul nule are doi parametri: a, prin care prime�te un tablou unidimensional cu
maximum 100 de numere �ntregi, cu cel mult 4 cifre fiecare �i n, num�rul de elemente din
tablou. Subprogramul rearanjeaz� elementele tabloului unidimensional astfel �nc�t toate
valorile nule s� se afle la sf�r�itul tabloului. Ordinea �n cadrul secven�ei de elemente nenule
poate fi oricare. Tabloul modificat este furnizat tot prin parametrul a.
Exemplu: dac� n=6, a=(12,0,0,-3,-8,0), dup� apel, acesta ar putea fi:
a=(12,-3,-8,0,0,0).*/


void elementeNule(int v[], int d) {

	for (int i = d - 1; i >= 0; i--) {
		if (v[i] != 0) {
			int j = i;
			while (v[j] != 0 && j > 0) {
				j--;
			}
			if (j != 0) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void ex3Var20() {

	int v[100], d;

	citire(v, d);
	elementeNule(v, d);
	afisare(v, d);

}

/*�n fi�ierul nr1.txt este memorat� pe prima linie o valoare natural� n de cel mult 8 cifre,
iar pe linia urm�toare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict cresc�tor �i separate prin c�te un spa�iu. �n fi�ierul nr2.txt este memorat�
pe prima linie o valoare natural� m de cel mult 8 cifre, iar pe linia urm�toare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict cresc�tor �i separate prin
c�te un spa�iu. Se cere afi�area pe ecran, separate prin c�te un spa�iu, �n ordine strict
cresc�toare, a tuturor numerelor aflate pe a doua linie at�t �n primul c�t �i �n al doilea fi�ier.
Alege�i un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate �i al
timpului de executare.
Exemplu: pentru urm�toarele fi�iere:
nr1.txt nr2.txt
5 6
3 6 8 9 12 2 3 5 7 9 13
se va afi�a 3 9.*/

void nrIncluse(int v[], int d, int a[], int b) {

	for (int i = 0; i < d; i++) {
		if (nrGasit(a, b, v[i]) == true) {
			cout << v[i] << " ";
		}
	}

}


void ex4Var20() {

	int v[100], d;
	int a[6] = { 231,3,154,2,43,6 };

	citire(v, d);
	nrIncluse(v, d, a, 6);
}









