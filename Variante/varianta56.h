#include "citire_afisare.h"


//s2

/*Scrieþi un program C/C++ care citeºte de la tastaturã douã numere naturale n ºi k
(2<n<25, 0<k<n) ºi construieºte în memorie o matrice cu n linii ºi n coloane formatã
numai din valori 1,2,3 ºi 4 astfel încât: elementele aflate la intersecþia primelor k linii cu
primele k coloane sunt egale cu 1, elementele aflate la intersecþia primelor k linii cu ultimele
n-k coloane sunt egale cu 2, elementele aflate la intersecþia ultimelor n-k linii cu primele k
coloane sunt egale cu 3, elementele aflate la intersecþia ultimelor n-k linii cu ultimele n-k
coloane sunt egale cu 4 ca în exemplul de mai jos.
5.
Programul afiºeazã pe ecran matricea construitã, fiecare linie a
matricei pe o linie a ecranului ºi elementele de pe aceeaºi linie
separate prin câte un singur spaþiu.
Exemplu: pentru n=5, k=3 se construieºte în memorie ºi se afiºeazã
matricea alãturatã. (10p.)
1 1 1 2 2
1 1 1 2 2
1 1 1 2 2
3 3 3 4 4
3 3 3 4 4*/

void matrice(int n, int k) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < k) {
				if (j < k) {
					a[i][j] = 1;
				}
				else if(i < k&& j >= k) {
					a[i][j] = 2;
				}
			}else if (j < k) {
				a[i][j] = 3;
			}
			else {
				a[i][j] = 4;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var56() {

	matrice(5, 3);

}

//3

/*Fiºierul text numere.txt conþine, pe o singurã linie, cel mult 1000 de numere naturale
nenule cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaþiu. Scrieþi un
program C/C++ care citeºte toate numerele din fiºier ºi scrie pe ecran toate numerele pare
citite, ordonate crescãtor. Dacã fiºierul numere.txt nu conþine niciun numãr par, atunci se
va afiºa pe ecran mesajul nu exista.
Exemplu: dacã fiºierul numere.txt conþine numerele 2 3 1 4 7 2 5 8 6, atunci pe
ecran se va afiºa: 2 2 4 6 8*/

void nrPareOrdonate(int v[], int d) {
	sortareCrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var56() {

	int v[100], d;

	citire(v, d);
	nrPareOrdonate(v, d);

}

/*Se considerã subprogramele
– prim, care primeºte prin intermediul unicului sãu parametrului x un numãr natural nenul
de cel mult 4 cifre ºi returneazã valoarea 1 dacã x este un numãr prim ºi 0 în caz contrar;
– numar, care primeºte prin intermediul parametrului x un numãr natural nenul de cel mult
4 cifre ºi furnizeazã prin intermediul parametrului nrp numãrul de numere prime mai mici
decât x.
a) Scrieþi numai antetul subprogramului prim ºi definiþia completã a subprogramului
numar. (6p.)
b) Scrieþi un programul C/C++ în care se citesc de la tastaturã douã numere naturale
nenule de cel mult 4 cifre, a ºi b (a<b), ºi, prin apeluri utile ale subprogramului numar, se
verificã dacã intervalul închis [a,b] conþine cel puþin un numãr prim. Programul va afiºa pe
ecran, în caz afirmativ, mesajul DA, iar în caz contrar, mesajul NU.*/

int nrp(int x) {
	int ct = 0;
	for (int i = 2; i <= x; i++) {
		if (prim(i)) {
			ct++;
		}
	}
	return ct;
}

bool interval(int a, int b) {

	for (int i = a; i <= b; i++) {
		if (prim(i)) {
			return true;
		}
	}
	return false;
}

void ex4Var56() {

	cout << interval(3, 20);

}














