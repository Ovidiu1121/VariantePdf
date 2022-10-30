#include <iostream>
using namespace std;
#include <fstream>

/*Fişierul text bac.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule
cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un program
C/C++ care citeşte de la tastatură un număr natural nenul n (n≤999) şi numerele din fişierul
bac.txt şi care afişează pe ecran, separate prin câte un spaţiu, toate numerele din fişier
care sunt divizibile cu n. Dacă fişierul nu conţine niciun astfel de număr, atunci se va afişa
pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul bac.txt conţine numerele: 3 100 40 70 25 5 80 6 3798,
pentru n=10 atunci pe ecran se va afişa: 100 40 70 80 */


void citire(int v[], int &d) {

	ifstream read("in.txt");

	read >> d;

	for (int i = 0; i < d; i++) {
		read >> v[i];
	}

}

void afisare(int v[], int d) {

	for (int i = 0; i < d; i++) {
		cout << v[i] << " ";
	}

}

void numereDivizibile(int v[], int d, int n) {

	for (int i = 0; i < d; i++) {
		if (v[i] % n == 0) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var1() {

	int v[100], d;

	citire(v, d);
	numereDivizibile(v, d,10);

}

/*Subprogramul sub, cu trei parametri, primeşte prin intermediul parametrilor:
– v un tablou unidimensional cu cel mult 100 de componente ce memorează numere
întregi de cel mult 4 cifre fiecare;
– n un număr natural nenul mai mic sau egal cu 100 ce reprezintă numărul efectiv de
componente ale tabloului primit prin intermediul parametrului v;
– a un număr întreg cu cel mult 4 cifre.
Subprogramul sub returnează numărul componentelor tabloului primit prin intermediul
parametrului v ale căror valori sunt strict mai mici decât valoarea parametrului a.
Exemplu: pentru valorile n=5, v=(1,21,9,21,403), a=20 ale parametrilor, în urma
apelului, subprogramului sub va returna valoarea 2. 
*/

int contorNrMaiMici(int v[], int d, int a) {

	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] < a) {
			ct++;
		}
	}
	return ct;
}

void ex4aVar1() {

	int v[100], d;

	citire(v, d);
	contorNrMaiMici(v, d, 20);

}

/* Să se scrie un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi n numere întregi, fiecare având cel mult 4 cifre, şi care, folosind apeluri utile ale
subprogramului sub, să afişeze pe ecran mesajul DA dacă oricare două dintre cele n
numere întregi citite sunt distincte două câte două, sau mesajul NU în caz contrar.
Exemplu: pentru n=6 şi cele n numere citite de la tastatură: 47 183 69 8 134 -56
se va afişa pe ecran mesajul DA */

void numereDistincte(int v[], int d) {

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (j != i) {
				if (v[i] == v[j]) {
					cout << "Nu";
					return;
				}
			}
		}
	}
	cout << "Da";
}

void ex4bVar1() {

	int v[100], d;

	citire(v, d);
	numereDistincte(v, d);

}








