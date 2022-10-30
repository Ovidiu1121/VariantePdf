#include "varianta14.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤32000) şi
afişează pe ecran numărul natural din intervalul închis [1,n] care are cei mai mulţi divizori.
Dacă există mai multe numere cu această proprietate se va afişa cel mai mic dintre ele.
Exemplu: pentru n=20 se va afişa valoarea 12 (12, 18 şi 20 au câte 6 divizori, iar 12 este
cel mai mic dintre ele).*/

int contorDivizori(int n) {

	int ct = 0;

	for (int i = 1; i <=n; i++) {
		if (n % i == 0) {
			ct++;
		}
	}
	return ct;
}

int divizoriMax(int v[], int d) {
	int maxim = 0;
	for (int i = 0; i < d; i++) {
		int k = contorDivizori(v[i]);
		if (k > maxim) {
			maxim = k;
		}
	}
	int f = 100000;
	for (int i = 0; i < d; i++) {
		if (contorDivizori(v[i]) == maxim) {
			if (v[i] < f) {
				f = v[i];
			}
		}
	}
	return f;
}

void ex3Var15() {

	int v[100], d;

	citire(v, d);
	cout<<divizoriMax(v, d);

}

/*În fişierul text BAC.IN se găsesc, pe o singură linie, separate prin câte un spaţiu, mai multe
numere naturale de cel mult 6 cifre fiecare. Se cere să se determine şi să se afişeze pe
ecran, separate printr-un spaţiu, ultimele două numere impare (nu neapărat distincte) din
fişierul BAC.IN. Dacă în fişier se găseşte un singur număr impar sau niciun număr impar se
va scrie pe ecran mesajul Numere insuficiente.
Exemplu: dacă fişierul BAC.IN conţine valorile: 12 15 68 13 17 90 31 42 se va
afişa 17 31.*/

void ultimele2impare(int v[], int d) {

	int k = 1;

	for (int i = d - 1; i >= 0; i--) {
		if (v[i] % 2 == 1) {
			cout << v[i] << " ";
		
			k++;
		}
		
		if (k > 2) {
			return;
		}
	}

}

void ex4Var15() {

	int v[100], d;

	citire(v, d);
	ultimele2impare(v, d);

}




















