#include "varianta18.h"



/*Subprogramul aranjare are doi parametri: a prin care primeºte un tablou unidimensional
cu maximum 100 de numere reale nenule ºi n, numãrul de elemente din tablou.
Subprogramul rearanjeazã elementele tabloului unidimensional astfel încât toate valorile
negative sã se afle pe primele poziþii, iar valorile pozitive în continuarea celor negative.
Ordinea în cadrul secvenþei de elemente pozitive, respectiv în cadrul secvenþei de elemente
negative, poate fi oricare. Tabloul modificat va fi furnizat tot prin intermediul parametrului a.
Exemplu: dacã tabloul are 6 elemente ºi este de forma (12, -7.5, 6.5, -3, -8,
7.5), dupã apel, acesta ar putea fi: (-7.5, -3, -8, 12, 6.5, 7.5).
Scrieþi definiþia completã a subprogramului aranjare*/

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

/*În fiºierul nr1.txt este memoratã pe prima linie o valoare naturalã n de cel mult 8 cifre,
iar pe linia urmãtoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict crescãtor ºi separate prin câte un spaþiu. În fiºierul nr2.txt este memoratã
pe prima linie o valoare naturalã m de cel mult 8 cifre, iar pe linia urmãtoare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescãtor ºi separate prin
câte un spaþiu. Se cere afiºarea pe ecran, separate prin câte un spaþiu, în ordine strict
crescãtoare, a tuturor numerelor aflate pe a doua linie în cel puþin unul dintre cele douã
fiºiere. În cazul în care un numãr apare în ambele fiºiere, el va fi afiºat o singurã datã.
Alegeþi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate ºi al
timpului de executare.
Exemplu: pentru urmãtoarele fiºiere:
nr1.txt nr2.txt
5 6
3 6 8 9 12 2 3 5 7 9 13
se va afiºa 2 3 5 6 7 8 9 12 13.*/

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









