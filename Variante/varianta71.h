#include "citire_afisare.h"

/*Se genereazã în ordine crescãtoare toate numerele de exact 4 cifre care se pot forma cu
elementele mulþimii {0,1,2,3,4}. Primele 8 soluþii generate sunt, în ordine: 1000, 1001,
1002, 1003, 1004, 1010, 1011, 1012. Care sunt primele trei numere ce se vor genera
imediat dupã numãrul 3443?*/

int s[100], n = 4;

void tipar() {

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	cout << endl;
}

int valid(int k) {

	if (s[0] == 0) {
		return 0;
	}
	return 1;
}

int solutie(int k) {

	if (k == n - 1) {
		return 1;
	}
	return 0;
}

void back(int k) {

	for (int i = 0; i <= n; i++) {
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

void ex1Var71() {

	back(0);

}

/*Un numãr natural se numeºte palindrom dacã numãrul citit de la stânga la dreapta este egal
cu numãrul citit de la dreapta la stânga.
a) Scrieþi definiþia completã a subprogramului Palindrom care primeºte prin intermediul
parametrului n un numãr natural de cel mult nouã cifre ºi returneazã 1 dacã acesta este
palindrom ºi 0 în caz contrar. (10p.)
b) Fiºierul text NUMERE.IN conþine cel mult 100000 numere naturale de cel mult nouã cifre
fiecare, numerele fiind despãrþite prin câte un spaþiu. Cel puþin unul dintre numere este
palindrom.
Scrieþi programul C/C++ care citeºte numerele din fiºierul NUMERE.IN ºi, folosind apeluri
utile ale subprogramului Palindrom determinã în mod eficient, din punct de vedere al
memoriei utilizate ºi al timpului de executare, care este cel mai mare numãr palindrom citit ºi
de câte ori apare el în fiºierul NUMERE.IN. Programul scrie în fiºierul text NUMERE.OUT
numãrul astfel determinat precum ºi numãrul de apariþii ale acestuia, pe rânduri diferite.
Exemplu: dacã NUMERE.IN conþine numerele:
23 565 78687 7887 7865 78687 7887 23 78687 98798
atunci NUMERE.OUT va conþine:
78687
3*/

bool palindrom(int n) {

	int aux = 0;
	int k = n;

	while (n) {
		aux = aux * 10 + n % 10;
		n /= 10;
	}

	if (k == aux) {
		return true;
	}
	return false;
}

int frecventaNumar(int v[], int d, int n) {

	int f[100000]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void palindromMaxim(int v[], int d) {
	int ct = 0, nr;
	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (palindrom(v[i]) == true) {
			int k = frecventaNumar(v, d, v[i]);
			if (k > maxim) {
				maxim = k;
				nr = v[i];
			}
		}
	}
	cout << nr << " " << maxim;
}

void ex3Var71() {

	int v[100], d;

	citire(v, d);
	palindromMaxim(v, d);


}
















