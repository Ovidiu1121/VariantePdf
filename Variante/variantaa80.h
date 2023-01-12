#include "citire_afisare.h"

/*Fi�ierul text bac.in con�ine cel mult 1000 de numere naturale cu cel mult patru cifre
fiecare, desp�r�ite prin c�te un spa�iu. Scrie�i programul C/C++ care cite�te numerele din
fi�ier �i afi�eaz� pe ecran, �n ordine cresc�toare, acele numere din fi�ier care au toate cifrele
egale. Dac� fi�ierul nu con�ine niciun astfel de num�r, se va afi�a pe ecran mesajul NU
EXISTA.
Exemplu: dac� fi�ierul bac.in con�ine numerele: 30 44 111 7 25 5 atunci pe ecran
se va afi�a 5 7 44 111.*/

bool toateCifreleEgale(int n) {
	int k = n % 10;
	n /= 10;

	while (n) {
		if (n % 10 != k) {
			return false;
		}
		n /= 10;
	}
	return true;
}

void crescator(int v[], int d) {
	sortareCrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (toateCifreleEgale(v[i]) == true) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var80() {

	int v[100], d;

	citire(v, d);
	crescator(v, d);

}

/*a) Scrie�i defini�ia complet� a unui subprogram divi cu doi parametri, care prime�te prin
intermediul parametrului n un num�r natural nenul cu cel mult 6 cifre �i returneaz� prin
intermediul parametrului d cel mai mic divizor propriu al lui n sau 0 in cazul �n care n nu are
niciun divizor propriu. De exemplu, pentru n=15, d va avea valoarea 3. (4p.)
b) Scrie�i programul C/C++ care cite�te de la tastatur� un num�r natural nenul n
(1<n<1000000) �i afi�eaz� pe ecran cel mai mare numar natural mai mic dec�t n care �l
divide pe n. Se vor folosi apeluri utile ale subprogramului divi.
Exemple: dac� n=120, se afi�eaz� pe ecran 60, iar dac� n=43, se afi�eaz� 1.*/

int divi(int n) {

	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0) {
			return i;
		}
	}
	return -1;
}

int celMaiMareDivizor(int n) {

	if (prim(n)) {
		return 1;
	}

	int i = 2;

	while (i < n / 2) {
		if (n % i == 0) {
			return n / i;
		}
		i++;
	}
	return -1;
}

void ex4Var80() {

	cout << divi(15)<<endl;
	cout << celMaiMareDivizor(45);
}


















