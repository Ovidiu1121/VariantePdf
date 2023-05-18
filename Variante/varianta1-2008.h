#include "citire_afisare.h"


/*Fişierul text bac.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule
cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un program
C/C++ care citeşte de la tastatură un număr natural nenul n (n≤999) şi numerele din fişierul
bac.txt şi care afişează pe ecran, separate prin câte un spaţiu, toate numerele din fişier
care sunt divizibile cu n. Dacă fişierul nu conţine niciun astfel de număr, atunci se va afişa
pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul bac.txt conţine numerele: 3 100 40 70 25 5 80 6 3798,
pentru n=10 atunci pe ecran se va afişa: 100 40 70 80 */

void nrDivizibile(int v[], int d, int n) {

	for (int i = 0; i < d; i++) {
		if (v[i] % n == 0) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var1() {

	int v[100], d;

	citire(v, d);
	nrDivizibile(v, d, 10);

}

/*Subprogramul sub, cu trei parametri, primeşte prin intermediul parametrului:
– v un tablou unidimensional cu cel mult 100 de componente ce memorează numere
întregi cu cel mult 4 cifre;
– n un număr natural nenul mai mic sau egal cu 100 ce reprezintă numărul efectiv de
componente ale tabloului primit prin intermediul parametrului v;
– a un număr întreg cu cel mult 4 cifre.
Subprogramul sub returnează numărul componentelor tabloului primit prin intermediul
parametrului v ale căror valori sunt strict mai mici decât valoarea parametrului a.
Exemplu: pentru valorile n=5, v=(1,21,9,21,403), a=20 ale parametrilor, în urma
apelului, subprogramului sub va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului sub.
b) Să se scrie un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi n numere întregi, fiecare având cel mult 4 cifre, şi care, folosind apeluri utile ale
subprogramului sub, să afişeze pe ecran mesajul DA dacă oricare două dintre cele n
numere întregi citite sunt distincte două câte două, sau mesajul NU în caz contrar.
Exemplu: pentru n=6 şi cele n numere citite de la tastatură: 47 183 69 8 134 -56
se va afişa pe ecran mesajul DA*/

void contorValori(int v[], int d, int a) {

	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] < a) {
			ct++;
		}
	}
	cout << ct;
}

bool nrDistincte(int v[], int d) {

	for (int i = 0; i < d-1; i++) {
		if (v[i] == v[i + 1]) {
			return false;
		}
	}
	return true;
}

void ex4Var1() {

	int v[100], d;
	citire(v, d);
	contorValori(v, d, 20);
	cout <<"\n"<< nrDistincte(v, d);

}















