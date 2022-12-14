#include "citire_afisare.h"

//s2

/*Scrie�i un program C/C++ care cite�te de la tastatur� un num�r natural n (2<n<20),
construie�te �n memorie �i afi�eaz� pe ecran o matrice cu n linii �i n coloane, numerotate
de la 1 la n �n care fiecare element din matrice aflat pe o linie impar� va fi egal cu num�rul
liniei pe care se afl� �i fiecare element aflat pe o linie par� va fi egal cu num�rul coloanei pe
care se afl�.
5.
Elementele matricei vor fi afi�ate pe ecran, c�te o linie a matricei pe
c�te o linie a ecranului cu c�te un spa�iu �ntre elementele fiec�rei linii.
Exemplu: pentru n=5 se va afi�a matricea al�turat�. (10p.)
1 1 1 1 1
1 2 3 4 5
3 3 3 3 3
1 2 3 4 5
5 5 5 5 5*/

void matrice(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				a[i][j] = i+1;
			}
			else if (i % 2 == 1) {
				a[i][j] = j+1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}

}


void ex5Var18() {

	matrice(5);

}

/*Un algoritm genereaz�, �n ordine lexicografic�, toate �irurile alc�tuite din c�te n cifre binare
(0 �i 1). �tiind c� pentru n=5, primele patru solu�ii generate sunt 00000, 00001, 00010,
00011, preciza�i care sunt ultimele trei solu�ii generate, �n ordinea ob�inerii lor.*/

void ex2Var18() {


}


/*Scrie�i defini�ia complet� a subprogramului count care are doi parametri, a �i n, prin care
prime�te un tablou unidimensional cu maximum 100 de numere reale �i respectiv num�rul
efectiv de elemente din tablou. Subprogramul returneaz� num�rul de elemente din tabloul a
care sunt mai mari sau cel pu�in egale cu media aritmetic� a tuturor elementelor din tablou.
Exemplu: dac� tabloul are 6 elemente �i este de forma (12, 7.5, 6.5, 3, 8.5, 7.5),
subprogramul va returna valoarea 4 (deoarece media tuturor elementelor este 7.5 �i
numerele subliniate sunt cel pu�in egale cu aceast� medie).*/

int medieAritmetica(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		s += v[i];
	}

	return s / d;
}

void contorMedieA(int v[], int d) {

	int k = medieAritmetica(v, d);

	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] >= k) {
			ct++;
		}
	}
	cout << ct;
}

void ex3Var18() {

	int v[100], d;

	citire(v, d);
	contorMedieA(v, d);
}

/*�n fi�ierul numere.txt este memorat un �ir de maximum 10000 numere naturale, distincte
dou� c�te dou�, cu maximum 4 cifre fiecare, separate prin c�te un spa�iu. Pentru un num�r
k citit de la tastatur�, se cere afi�area pe ecran a pozi�iei pe care se va g�si acesta �n �irul
de numere din fi�ier, dac� �irul ar fi ordonat descresc�tor, sau mesajul nu exist�, dac�
num�rul k nu se afl� printre numerele din fi�ier. Alege�i un algoritm eficient de rezolvare din
punct de vedere al memoriei utilizate �i al timpului de executare.
Exemplu: dac� fi�ierul numere.txt con�ine numerele 26 2 5 30 13 45 62 7 79, iar
k are valoarea 13, se va afi�a 6 deoarece 13 s-ar g�si pe pozi�ia a �asea �n �irul
ordonat descresc�tor (79 62 45 30 26 13 7 5 2).*/

void sortareDescrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] < v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

int pozitieLaSortareDesc(int v[], int d, int k) {

	sortareDescrescator(v, d);

	for (int i = 1; i <= d; i++) {
		if (v[i] == k) {
			return i;
		}
	}
	return -1;

}

void ex4Var18() {

	int v[100], d;

	citire(v, d);
	cout<<pozitieLaSortareDesc(v, d, 13);

}



















