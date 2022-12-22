#include "citire_afisare.h"

/*Scrieþi un program C/C++ care citeºte de la tastaturã un numãr natural n (2<n<20) ºi
construieºte în memorie o matrice cu n linii ºi n coloane, numerotate de la 1 la n, în care
fiecare element aflat pe chenarul exterior al matricei este egal cu suma dintre indicele liniei
ºi indicele coloanei pe care se aflã, iar fiecare dintre celelalte elemente este egal cu suma
celor trei “vecini” situaþi în matrice pe linia anterioarã. Douã elemente din matrice se numesc
vecine dacã se gãsesc alãturi pe linie, coloanã sau diagonalã. Chenarul exterior al unei
matrice este format din prima linie, ultima linie, prima coloanã ºi ultima coloanã.
5.
Elementele matricei vor fi afiºate pe ecran, câte o linie a matricei
pe câte o linie a ecranului cu câte un spaþiu între elementele
fiecãrei linii.
Exemplu: pentru n=5 se va obþine matricea alãturatã. (10p.)
2 3 4 5 6
3 9 12 15 7
4 24 36 34 8
5 64 94 78 9
6 7 8 9 10*/


void matrice(int n) {

	int a[100][100];

	int i1, j1, i2, j2, k;

	i1 = 0; j1 = 0; i2 = n - 1; j2 = n - 1;

	for (k = j1; k <= j2; k++) {
		a[i1][k] = k + 2;
	}
	for (k = i1 + 1; k <= i2; k++) {
		a[k][j2] = i2 + k+2;
	}
	for (k = j2 - 1; k >= i1; k--) {
		a[i2][k] = j2 + k+2;
	}
	for (k = i2 - 1; k > j1; k--) {
		a[k][j1] = k + 2;
	}

	for (int i = 1; i < n-1; i++) {
		for (int j = 1; j < n-1; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var20() {

	matrice(5);

}


/*Un algoritm genereazã în ordine descrescãtoare, toate numerele de n cifre (n<9), cu cifrele
în ordine strict crescãtoare, care nu au douã cifre pare alãturate. Dacã pentru n=5, primele
cinci soluþii generate sunt 56789, 45789, 45679, 45678, 36789, precizaþi care sunt
urmãtoarele trei soluþii generate, în ordinea obþinerii lor.*/

int s[100], n = 9, m = 5;

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] <= s[i]) {
			return 0;
		}
	}
	for (int i = 1; i <= k; i++) {
		if (s[i] % 2 == 0 && s[i - 1] % 2 == 0 || s[i] % 2 == 0 && s[i + 1] % 2 == 0) {
			return 0;
		}
	}

	return 1;
}

int solutie(int k) {

	if (k == m - 1) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k) {

	for (int i = n; i > 0; i--) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex2Var20() {

	back(0);

}


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

bool nrGasit(int v[], int d, int n) {

	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			return true;
		}
	}
	return false;
}

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









