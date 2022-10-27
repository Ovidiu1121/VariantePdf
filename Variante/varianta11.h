#include "varianta10.h"


/*Fi�ierul text numere.txt con�ine pe prima linie un num�r natural n (n<30000), iar pe a
doua linie n numere �ntregi av�nd maximum 4 cifre fiecare. Se cere s� se afi�eze pe ecran
un �ir de n numere �ntregi, cu proprietatea c� valoarea termenului de pe pozi�ia i
(i=1,2,�,n) din acest �ir este egal� cu cea mai mare dintre primele i valori de pe a doua
linie a fi�ierului numere.txt.
Exemplu: dac� fi�ierul numere.txt are con�inutul
al�turat,
12
4 6 3 7 8 1 6 2 7 9 10 8
se afi�eaz� pe ecran numerele
4 6 6 7 8 8 8 8 8 9 10 10 */

void inlocuire(int v[], int d) {

	for (int i = 1; i <= d; i++) {
		int k = v[i-1];
		while (v[i - 1] > v[i] && i <= d - 1) {
			v[i] = k;
			i++;
		}
	}

}

void solutie29() {

	int v[100], d;

	citire(v, d);
	inlocuire(v, d);
	afisare(v, d);

}

/*Scrie�i doar antetul func�iei sum care prime�te ca parametru un num�r natural nenul x cu
maximum 9 cifre �i returneaz� suma divizorilor num�rului x.
Exemplu: sum(6) are valoarea 12 (=1+2+3+6).*/

int sumaDiv(int n) {

	int s = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}

void solutie30() {

	cout << sumaDiv(6);

}

/*S� se scrie un program C/C++ care cite�te de la tastatur� un num�r natural n (0<n<25) �i
apoi n numere naturale nenule cu maximum 9 cifre fiecare. Programul calculeaz�, folosind
apeluri ale func�iei sum, �i afi�eaz� pe ecran c�te numere prime con�ine �irul citit.
Exemplu: pentru n=5 �i valorile 12 3 9 7 1 se va afi�a pe ecran valoarea 2 (�n �irul dat
exist� dou� numere prime �i anume 3 �i 7).*/

int contorPrime(int v[], int d) {

	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (prim(i) == true) {
			ct++;
		}
	}
	return ct;
}

void solutie31() {

	int v[100], d;

	citire(v, d);
	cout <<contorPrime(v, d);

}


















