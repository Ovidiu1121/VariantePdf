#include "citire_afisare.h"

/*Scrieþi un program C/C++ care citeºte de la tastaturã douã numere naturale nenule n ºi k
(0<n<100, 0<k<4) ºi apoi n numere reale pozitive care au cel mult 3 cifre la partea
întreagã ºi cel mult 5 cifre zecimale ºi afiºeazã pe ecran numãrul de valori reale citite care
au mai mult de k cifre zecimale.
Exemplu: dacã pentru n se citeºte valoarea 5 ºi pentru k valoarea 2 ºi apoi ºirul de
numere reale 6.2 4.234 2 8.13 10.001 pe ecran se va afiºa valoarea 2.*/

void ex3Var77() {



}

/*Fiºierul text bac.in conþine pe prima sa linie un numãr natural n (0<n<10000), iar pe
urmãtoarea linie n numere naturale din intervalul [1,100] separate prin câte un spaþiu.
Se cere sã se citescã din fiºier toate numerele ºi sã se afiºeze pe ecran numãrul sau
numerele care apar de cele mai multe ori printre numerele citite de pe a doua linie a
fiºierului. Numerele afiºate vor fi separate prin câte un spaþiu. Alegeþi un algoritm de
rezolvare eficient atât din punctul de vedere al timpului de executare cât ºi al gestionãrii
memoriei. .
Exemplu: dacã fiºierul bac.in are urmãtorul conþinut:
12
1 2 2 3 2 9 3 3 9 9 7 1
pe ecran se vor afiºa valorile 2, 3 ºi 9, nu neapãrat în aceastã ordine.*/

int frecventaNumar(int v[], int d, int n) {

	int f[1000]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void frecventaMax(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		int k = frecventaNumar(v, d, v[i]);
		if (k > maxim) {
			maxim = k;
		}
	}
	int a[100], b = 0;
	for (int i = 0; i < d; i++) {
		if (frecventaNumar(v, d, v[i]) == maxim) {
			if (nrGasit(a, b, v[i]) == false) {
				a[b] = v[i];
				b++;
			}
		}
	}

	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}

}

void ex4Var77() {

	int v[100], d;
	citire(v, d);

	frecventaMax(v, d);

}






















