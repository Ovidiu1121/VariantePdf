#include "varianta34.h"


/*doua linie n numere naturale cu cel mult 9 cifre fiecare, despãrþite prin câte un spaþiu.
Scrieþi un program C/C++ care citeºte toate numerele din fiºier ºi afiºeazã pe ecran,
separate prin câte un spaþiu, numerele de pe a doua linie a fiºierului, care încep ºi se
terminã cu aceeaºi cifrã. 
Exemplu: dacã fiºierul numere.in are
conþinutul alãturat, se numerele ce se vor afiºa
sunt: 55 3 101 7 2782
9
55 107 3 101 92 7 208 2782
80*/

bool ucEgalPc(int n) {
	int pc, uc = n % 10;
	int ct = 0;
	for (int i = n; i != 0; i = i / 10) {
		ct++;
	}

    pc = n / (int)pow(10, ct - 1);
	if (pc == uc) {
		return true;
	}
	return false;
}

void numereCuUcEgalPc(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (ucEgalPc(v[i]) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var35() {

	int v[100], d;

	citire(v, d);
	numereCuUcEgalPc(v, d);

}

/*Scrieþi definiþia completã a unui subprogram sum care primeºte prin parametrul x un
numãr natural de cel mult 4 cifre ºi returneazã suma divizorilor numãrului x, diferiþi de 1 ºi
de el însuºi.
Exemplu: dacã x=10 se va returna valoarea 7 (7=2+5).*/

int sumaDivizoriImproprii(int n) {
	int s = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}

void ex4aVar35() {

	cout << sumaDivizoriImproprii(10);

}

/*Scrieþi programul C/C++ care citeºte de la tastaturã un numãr natural n (0<n<100), apoi
n numere naturale (cu cel mult 4 cifre fiecare). Programul determinã, folosind apeluri utile
ale subprogramului sum, pentru fiecare numãr natural citit, suma divizorilor sãi proprii ºi
afiºeazã pe ecran sumele determinate, în ordinea crescãtoare a valorilor lor, separate prin
câte un spaþiu. 
Exemplu: dacã n=5 ºi numerele citite sunt 10 2 33 6 11
valorile afiºate pe ecran vor fi: 0 0 5 7 14*/

void vectorSume(int v[], int d) {

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		int k = sumaDivizoriImproprii(v[i]);
		a[b] = k;
		b++;
	}

	sortareCrescator(a, b);

	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}

}

void ex4bVar35() {

	int v[100], d;

	citire(v, d);
	vectorSume(v, d);

}











