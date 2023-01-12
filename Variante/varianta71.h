#include "citire_afisare.h"

/*Se genereaz� �n ordine cresc�toare toate numerele de exact 4 cifre care se pot forma cu
elementele mul�imii {0,1,2,3,4}. Primele 8 solu�ii generate sunt, �n ordine: 1000, 1001,
1002, 1003, 1004, 1010, 1011, 1012. Care sunt primele trei numere ce se vor genera
imediat dup� num�rul 3443?*/

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

/*Un num�r natural se nume�te palindrom dac� num�rul citit de la st�nga la dreapta este egal
cu num�rul citit de la dreapta la st�nga.
a) Scrie�i defini�ia complet� a subprogramului Palindrom care prime�te prin intermediul
parametrului n un num�r natural de cel mult nou� cifre �i returneaz� 1 dac� acesta este
palindrom �i 0 �n caz contrar. (10p.)
b) Fi�ierul text NUMERE.IN con�ine cel mult 100000 numere naturale de cel mult nou� cifre
fiecare, numerele fiind desp�r�ite prin c�te un spa�iu. Cel pu�in unul dintre numere este
palindrom.
Scrie�i programul C/C++ care cite�te numerele din fi�ierul NUMERE.IN �i, folosind apeluri
utile ale subprogramului Palindrom determin� �n mod eficient, din punct de vedere al
memoriei utilizate �i al timpului de executare, care este cel mai mare num�r palindrom citit �i
de c�te ori apare el �n fi�ierul NUMERE.IN. Programul scrie �n fi�ierul text NUMERE.OUT
num�rul astfel determinat precum �i num�rul de apari�ii ale acestuia, pe r�nduri diferite.
Exemplu: dac� NUMERE.IN con�ine numerele:
23 565 78687 7887 7865 78687 7887 23 78687 98798
atunci NUMERE.OUT va con�ine:
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
















