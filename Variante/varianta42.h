#include "varianta41.h"


/*Scrie�i defini�ia complet� a unui subprogram P, cu trei parametri, care prime�te prin
intermediul primului parametru, a, un tablou unidimensional de cel mult 100 de numere
�ntregi, cu cel mult 4 cifre fiecare, prin intermediul celui de-al doilea parametru, n, num�rul
efectiv de elemente ale tabloului, iar prin parametrul k, un num�r natural (k<101) �i
returneaz� cea mai mare sum� cu k termeni care se poate ob�ine adun�nd k elemente ale
tabloului.
Exemplu: dac� n=6 �i k=4, iar �irul este format din elementele (5, 2, 5, 4, 1, 3),
atunci la apel se va returna 17.*/


void ex3Var42() {

	int v[100], d;

	citire(v, d);

}


/*Scrie�i un program C/C++ care determin� �n mod eficient, din punct de vedere al timpului
de executare, numerele ce apar o singur� dat� �n a doua linie a fi�ierului. Aceste numere
vor fi afi�ate pe ecran �n ordine cresc�toare, separate prin c�te un spa�iu.
Exemplu: dac� fi�ierul numere.txt are urm�torul con�inut:
7
3 5 2 1 5 23 1
atunci pe ecran se va afi�a: 2 3 23.*/

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















