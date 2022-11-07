#include "varianta17.h"


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



















