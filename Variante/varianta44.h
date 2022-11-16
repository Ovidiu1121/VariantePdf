#include "varianta43.h"


/*Scrieþi definiþia completã a unui subprogram P, cu doi parametri, a ºi b, numere naturale cu
cel mult 4 cifre fiecare, care afiºeazã pe ecran, separate prin câte un spaþiu, numerele aflate
în intervalul închis determinat de valorile a ºi b, care sunt pãtratele unor numere prime.
Exemplu: pentru a=40 ºi b=1 se vor afiºa valorile: 4 9 25*/

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

/*Fiºierul text numere.txt conþine pe prima linie un numãr natural n (0<n<100000), iar pe a
doua linie n numere naturale, formate din cel mult 4 cifre, separate prin câte un spaþiu.
a) Scrieþi un program C/C++ care determinã în mod eficient, din punct de vedere al timpului
de executare, cifrele ce apar în scrierea numerelor situate pe a doua linie a fiºierului.
Programul va afiºa pe ecran aceste cifre in ordine crescãtoare, separate prin câte un spaþiu.
Exemplu: daca fiºierul numere.txt are urmãtorul conþinut:
7
243 32 545 74 12 1344 90
atunci pe ecran se va afiºa: 0 1 2 3 4 5 7 9*/

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
















