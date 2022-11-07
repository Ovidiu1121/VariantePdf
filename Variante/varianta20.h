#include "varianta19.h"


/*Subprogramul nule are doi parametri: a, prin care primeºte un tablou unidimensional cu
maximum 100 de numere întregi, cu cel mult 4 cifre fiecare ºi n, numãrul de elemente din
tablou. Subprogramul rearanjeazã elementele tabloului unidimensional astfel încât toate
valorile nule sã se afle la sfârºitul tabloului. Ordinea în cadrul secvenþei de elemente nenule
poate fi oricare. Tabloul modificat este furnizat tot prin parametrul a.
Exemplu: dacã n=6, a=(12,0,0,-3,-8,0), dupã apel, acesta ar putea fi:
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

/*În fiºierul nr1.txt este memoratã pe prima linie o valoare naturalã n de cel mult 8 cifre,
iar pe linia urmãtoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict crescãtor ºi separate prin câte un spaþiu. În fiºierul nr2.txt este memoratã
pe prima linie o valoare naturalã m de cel mult 8 cifre, iar pe linia urmãtoare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescãtor ºi separate prin
câte un spaþiu. Se cere afiºarea pe ecran, separate prin câte un spaþiu, în ordine strict
crescãtoare, a tuturor numerelor aflate pe a doua linie atât în primul cât ºi în al doilea fiºier.
Alegeþi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate ºi al
timpului de executare.
Exemplu: pentru urmãtoarele fiºiere:
nr1.txt nr2.txt
5 6
3 6 8 9 12 2 3 5 7 9 13
se va afiºa 3 9.*/

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









