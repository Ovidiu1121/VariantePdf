#include "varianta34.h"


/*doua linie n numere naturale cu cel mult 9 cifre fiecare, desp�r�ite prin c�te un spa�iu.
Scrie�i un program C/C++ care cite�te toate numerele din fi�ier �i afi�eaz� pe ecran,
separate prin c�te un spa�iu, numerele de pe a doua linie a fi�ierului, care �ncep �i se
termin� cu aceea�i cifr�. 
Exemplu: dac� fi�ierul numere.in are
con�inutul al�turat, se numerele ce se vor afi�a
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

/*Scrie�i defini�ia complet� a unui subprogram sum care prime�te prin parametrul x un
num�r natural de cel mult 4 cifre �i returneaz� suma divizorilor num�rului x, diferi�i de 1 �i
de el �nsu�i.
Exemplu: dac� x=10 se va returna valoarea 7 (7=2+5).*/

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

/*Scrie�i programul C/C++ care cite�te de la tastatur� un num�r natural n (0<n<100), apoi
n numere naturale (cu cel mult 4 cifre fiecare). Programul determin�, folosind apeluri utile
ale subprogramului sum, pentru fiecare num�r natural citit, suma divizorilor s�i proprii �i
afi�eaz� pe ecran sumele determinate, �n ordinea cresc�toare a valorilor lor, separate prin
c�te un spa�iu. 
Exemplu: dac� n=5 �i numerele citite sunt 10 2 33 6 11
valorile afi�ate pe ecran vor fi: 0 0 5 7 14*/

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











