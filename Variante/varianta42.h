#include "varianta41.h"


/*Scrieþi definiþia completã a unui subprogram P, cu trei parametri, care primeºte prin
intermediul primului parametru, a, un tablou unidimensional de cel mult 100 de numere
întregi, cu cel mult 4 cifre fiecare, prin intermediul celui de-al doilea parametru, n, numãrul
efectiv de elemente ale tabloului, iar prin parametrul k, un numãr natural (k<101) ºi
returneazã cea mai mare sumã cu k termeni care se poate obþine adunând k elemente ale
tabloului.
Exemplu: dacã n=6 ºi k=4, iar ºirul este format din elementele (5, 2, 5, 4, 1, 3),
atunci la apel se va returna 17.*/


void ex3Var42() {

	int v[100], d;

	citire(v, d);

}


/*Scrieþi un program C/C++ care determinã în mod eficient, din punct de vedere al timpului
de executare, numerele ce apar o singurã datã în a doua linie a fiºierului. Aceste numere
vor fi afiºate pe ecran în ordine crescãtoare, separate prin câte un spaþiu.
Exemplu: dacã fiºierul numere.txt are urmãtorul conþinut:
7
3 5 2 1 5 23 1
atunci pe ecran se va afiºa: 2 3 23.*/

void frecventa1(int v[], int d) {


	for (int i = 0; i < d; i++) {
		int k = frecventaNumar(v, d, v[i]);
		if (k == 1) {
			cout << v[i] << " ";
		}
	}
}

void ex4Var42() {

	int v[100], d;

	citire(v, d);
	frecventa1(v, d);

}















