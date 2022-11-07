#include "varianta15.h"

/*Scrieţi definiţia completă a subprogramului multiplu care are 3 parametri: a, prin care
primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât
1000, n, numărul efectiv de elemente ale tabloului şi k, un număr natural (k≤9).
Subprogramul returnează numărul de elemente din tablou care sunt multipli ai numărului k
şi au ultima cifră egală cu k.
Exemplu: dacă n=6, a=(9,273,63,83,93,123), iar k=3, subprogramul va returna
valoarea 4.*/


void multiplii(int v[], int d, int k) {

	for (int i = 0; i < d; i++) {
		if (v[i] % k == 0 && v[i] % 10 == k) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var16() {

	int v[100], d;

	citire(v, d);
	multiplii(v, d, 3);

}

/*În fişierul numere.txt sunt memorate maximum 10000 de numere naturale cu cel mult 9
cifre fiecare. Fiecare linie a fişierului conţine câte un număr. Se cere afişarea pe ecran, în
ordine descrescătoare, a tuturor cifrelor care apar în numerele din fişier. Alegeţi un algoritm
de rezolvare eficient din punct de vedere al timpului de executare.
Exemplu: dacă fişierul numere.txt conţine:
267
39628
79
se va tipări 9987766322.*/

void descrescatorDupaCifre(int v[], int d) {

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		while (v[i]) {
			a[b] = v[i] % 10;
			b++;
			v[i] /= 10;
		}
	}

	sortareDescrescator(a, b);

	for (int i = 0; i < b; i++) {
		cout << a[i];
	}

}

void ex4Var16() {

	int v[100], d;

	citire(v, d);
	descrescatorDupaCifre(v, d);

}


















