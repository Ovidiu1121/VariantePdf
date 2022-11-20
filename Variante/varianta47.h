#include "varianta46.h"



/*Fiºierul text bac.txt conþine pe prima linie un numãr natural n (n<100), iar pe a doua
linie, separate prin câte un spaþiu, n numere naturale de cel mult 8 cifre fiecare.
Scrieþi un program C/C++ care citeºte de la tastaturã un numãr natural k (k<50) precum
ºi numerele din fiºierul bac.txt ºi afiºeazã pe ecran, cu câte un spaþiu între ele, toate
numerele de pe a doua linie a fiºierului care sunt puteri ale lui k. Un numãr natural x este
putere a lui k dacã existã un numãr natural y astfel încât x=k
y. Dacã nu existã un
asemenea numãr pe a doua linie a fiºierului, se afiºeazã pe ecran mesajul NU.
Exemplu: dacã se citeºte de la tastaturã k=2, iar
fiºierul are conþinutul alãturat
8
32 56 317 809 256 2 1 60, atunci pe ecran se
afiºeazã numerele:
32 256 2 1 */

bool putere(int a, int k) {
	int ct = 0;
	int aux = a;
	while (a!=1) {
		ct++;
		a = a / k;
	}
	if (pow(k, ct) == aux) {
		return true;
	}
	return false;
}

void puteriVector(int v[], int d, int k) {

	for (int i = 0; i < d; i++) {
		if (putere(v[i], k) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var47() {

	int v[100], d;

	citire(v, d);
	puteriVector(v, d, 2);

}

/*Scrieþi programul C/C++ care citeºte de la tastaturã un numãr natural n (0<n<25), apoi
un ºir de n numere naturale nenule cu cel mult 9 cifre fiecare ºi care afiºeazã pe ecran,
separate prin câte un spaþiu, numerele din ºir care au suma cifrelor maximã, folosind
apeluri utile ale subprogramului cif.
Exemplu: dacã pentru n=8 se citeºte ºirul de numere 274 56018 354 8219 293 287
932 634 atunci, pe ecran, se afiºeazã numerele 56018 8219.*/


void sumaCifreMaxVec(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		int s = sumaCifre(v[i]);
		if (s > maxim) {
			maxim = s;
		}
	}

	for (int i = 0; i < d; i++) {
		if (sumaCifre(v[i]) == maxim) {
			cout << v[i] << " ";
		}
	}
}

void ex4Var47() {

	int v[100], d;

	citire(v, d);
	sumaCifreMaxVec(v, d);
}














