#include "citire_afisare.h"


/*Fi�ierul text bac.txt con�ine, pe prima sa linie, 100 de numere naturale de cel mult 4 cifre
fiecare, numerele fiind ordonate cresc�tor �i separate prin c�te un spa�iu, iar pe a doua
linie un singur num�r natural x. Scrie�i un program C/C++ care cite�te toate numerele din
fi�ier �i verific� dac� x se afl� �n �irul celor 100 de numere aflate pe prima linie a fi�ierului.
�n caz afirmativ, se va afi�a pe ecran mesajul DA, altfel se va afi�a mesajul NU.
Exemple: dac� fi�ierul bac.txt con�ine:
17 38 40 45 50 51 52 53 54 55 ... 145
52
atunci se va afi�a: DA ;
dac� fi�ierul bac.txt con�ine:
2 11 15 16 20 25 30 35 40 ... 495
33
atunci se va afi�a: NU.*/

bool nrInInterval(int v[], int d, int x) {

	for (int i = 0; i < d; i++) {
		if (v[i] == x) {
			return true;
		}
	}
	return false;
}

void ex3Var60() {

	int v[100], d;

	citire(v, d);
	cout<<nrInInterval(v, d, 6);

}

/*Se consider� subprogramul radical, care:
� prime�te prin intermediul parametrului a, un num�r natural nenul de cel mult 4 cifre;
� furnizeaz� prin intermediul parametrului x cel mai mare num�r natural cu proprietatea
c� x2 este mai mic sau egal cu a; de exemplu, dac� a=20, subprogramul va furniza prin
x valoarea 4.
a) Scrie�i numai antetul subprogramului radical. (4p.)
b) Scrie�i declar�rile de date �i programul principal C/C++ care cite�te de la tastatur� un
num�r natural nenul de cel mult 4 cifre, n, �i prin apeluri utile ale subprogramului radical,
verific� dac� n este p�trat perfect. Programul va afi�a pe ecran �n caz afirmativ mesajul DA,
iar �n caz contrar mesajul NU.*/

int radical(int a) {

	int maxim = 0;

	for (int i = 2; i < a/2; i++) {
		if (pow(i, 2) < a) {
			if (i > maxim) {
				maxim = i;
			}
		}
	}
	return maxim;
}

bool patratPerfect(int n) {

	if (sqrt(n) == (int)sqrt(n)) {
		return true;
	}
	return false;
}

void ex4Var60() {

	cout << patratPerfect(25);

}


















