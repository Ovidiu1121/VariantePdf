#include "varianta11.h"



/*Fişierele text NR1.TXT şi NR2.TXT conţin, separate prin câte un spaţiu, mai multe numere
întregi de cel mult 9 cifre fiecare. Fiecare dintre fişiere conţine cel mult 100 de valori şi
numerele din fiecare fişier sunt ordonate strict crescător. Se cere să se afişeze pe ecran, în
ordine crescătoare, numerele divizibile cu 5 care se găsesc doar în unul din cele două
fişiere.
Exemplu: dacă fişierul NR1.TXT conţine numerele 1 2 3 4 7 20 60, iar fişierul
NR2.TXT conţine numerele 3 5 7 8 9 10 12 20 24, atunci se vor afişa pe ecran
valorile 5 10 60.*/

void sortareCrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void numereDivizibile(int v[], int d, int a[], int b) {
	int x[100], y = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] % 5 == 0 && nrGasit(a, b, v[i]) == false) {
			x[y] = v[i];
			y++;
		}
	}

	for (int i = 0; i < b; i++) {
		if (a[i] % 5 == 0 && nrGasit(v, d, a[i]) == false) {
			x[y] = a[i];
			y++;
		}
	}
	
	sortareCrescator(x, y);

	for (int i = 0; i < y; i++) {
		cout << x[i] << " ";
	}
}

void ex3Var12() {

	int v[7] = { 1,2,3,4,7,20,60 }, d = 7;
	int a[9] = { 3,5,7,8,9,19,12,20,24 }, b = 9;

	numereDivizibile(v, d, a, b);


}

/*Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n (n≤20),
apoi un şir de n numere naturale, având fiecare exact 5 cifre. Dintre cele n numere citite,
programul determină pe acelea care au toate cifrele egale şi le afişează pe ecran, în ordine
crescătoare, separate prin câte un spaţiu.
Exemplu: pentru n=5 şi numerele 11111 33333 12423 59824 11111 33443 se va
afişa: 11111 11111 33333.*/

bool cifreEgale(int n) {
	int k = n % 10;
	while (n) {
		if (n % 10 != k) {
			return false;
		}
		n /= 10;
	}
	return true;
}

void cifreEgaleVec(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (cifreEgale(v[i]) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex4Var12() {

	int v[100], d;

	citire(v, d);
	cifreEgaleVec(v, d);

}















