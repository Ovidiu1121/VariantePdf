#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤23) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, formată din numere naturale
nenule, mai mici sau egale cu n, astfel încât să nu existe două linii cu aceeaşi sumă a
elementelor şi nici două coloane cu aceeaşi sumă a elementelor.
Programul va afişa matricea pe ecran, câte o linie a matricei pe o linie a ecranului, cu un
spaţiu între elementele fiecărei linii.*/

void ex5Var44() {



}

//s3

/*Scrieţi definiţia completă a unui subprogram P, cu doi parametri, a şi b, numere naturale cu
cel mult 4 cifre fiecare, care afişează pe ecran, separate prin câte un spaţiu, numerele aflate
în intervalul închis determinat de valorile a şi b, care sunt pătratele unor numere prime.
Exemplu: pentru a=40 şi b=1 se vor afişa valorile: 4 9 25*/

bool patratPerfect(int n) {

	if (sqrt(n) == (int)sqrt(n)) {
		return true;
	}
	return false;
}

void intervalPatratePerf(int a, int b) {

	for (int i = a; i <= b; i++) {
		if (patratPerfect(i) == 1 && prim(sqrt(i)) == 1) {
			cout << i << " ";
	 }
	}

}

void ex3Var44() {

	intervalPatratePerf(1, 40);

}

/*Fişierul text numere.txt conţine pe prima linie un număr natural n (0<n<100000), iar pe a
doua linie n numere naturale, formate din cel mult 4 cifre, separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului
de executare, cifrele ce apar în scrierea numerelor situate pe a doua linie a fişierului.
Programul va afişa pe ecran aceste cifre in ordine crescătoare, separate prin câte un spaţiu.
Exemplu: daca fişierul numere.txt are următorul conţinut:
7
243 32 545 74 12 1344 90
atunci pe ecran se va afişa: 0 1 2 3 4 5 7 9*/

void cifreDistincte(int v[], int d) {
	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		while (v[i]) {
			if (nrGasit(a, b, v[i] % 10) == false) {
				a[b] = v[i] % 10;
				b++;
			}
			v[i] /= 10;
		}
	}

	sortareCrescator(a, b);

	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}

}

void ex4Var44() {

	int v[100], d;

	citire(v, d);
	cifreDistincte(v, d);
}
















