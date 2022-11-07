#include "varianta18.h"



/*Subprogramul aranjare are doi parametri: a prin care prime�te un tablou unidimensional
cu maximum 100 de numere reale nenule �i n, num�rul de elemente din tablou.
Subprogramul rearanjeaz� elementele tabloului unidimensional astfel �nc�t toate valorile
negative s� se afle pe primele pozi�ii, iar valorile pozitive �n continuarea celor negative.
Ordinea �n cadrul secven�ei de elemente pozitive, respectiv �n cadrul secven�ei de elemente
negative, poate fi oricare. Tabloul modificat va fi furnizat tot prin intermediul parametrului a.
Exemplu: dac� tabloul are 6 elemente �i este de forma (12, -7.5, 6.5, -3, -8,
7.5), dup� apel, acesta ar putea fi: (-7.5, -3, -8, 12, 6.5, 7.5).
Scrie�i defini�ia complet� a subprogramului aranjare*/

void ordonareNrNegative(int v[], int d) {

		for (int i = 1; i <= d; i++) {
			if (v[i] > 0) {
				int j = i;
				while (v[j] > 0 && j < d - 1) {
					j++;
				}
				if (j != d) {
					int aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}
			}
		}

}

void ex3Var19() {

	int v[100], d;

	citire(v, d);
	ordonareNrNegative(v, d);
	afisare(v, d);

}

/*�n fi�ierul nr1.txt este memorat� pe prima linie o valoare natural� n de cel mult 8 cifre,
iar pe linia urm�toare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict cresc�tor �i separate prin c�te un spa�iu. �n fi�ierul nr2.txt este memorat�
pe prima linie o valoare natural� m de cel mult 8 cifre, iar pe linia urm�toare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict cresc�tor �i separate prin
c�te un spa�iu. Se cere afi�area pe ecran, separate prin c�te un spa�iu, �n ordine strict
cresc�toare, a tuturor numerelor aflate pe a doua linie �n cel pu�in unul dintre cele dou�
fi�iere. �n cazul �n care un num�r apare �n ambele fi�iere, el va fi afi�at o singur� dat�.
Alege�i un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate �i al
timpului de executare.
Exemplu: pentru urm�toarele fi�iere:
nr1.txt nr2.txt
5 6
3 6 8 9 12 2 3 5 7 9 13
se va afi�a 2 3 5 6 7 8 9 12 13.*/

void sortareVectori(int v[], int d, int a[], int b) {
	int k = d;
	for (int i = 0; i < b; i++) {
		v[k] = a[i];
		k++;
	}
	d = k;
	sortareCrescator(v, d);

	for (int i = 0; i < k; i++) {
		cout << v[i] << " ";
	}

}

void ex4Var19() {

	int v[100], d;
	int a[6] = { 231,3,154,2,43,6 };

	citire(v, d);
	sortareVectori(v, d, a, 6);

}









