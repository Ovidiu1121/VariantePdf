#include "varianta2.h"


/*Fiºierului text NR.TXT conþine pe o singurã linie, separate prin câte un singur spaþiu, cel
mult 100 de numere naturale, fiecare numãr având cel mult 4 cifre. Scrieþi un program
C/C++ care citeºte toate numerele din fiºierul NR.TXT ºi afiºeazã pe ecran, separate prin
câte un spaþiu, în ordine crescãtoare, toate numerele din fiºier care au cel puþin 3 cifre.
Dacã fiºierul nu conþine astfel de numere se va afiºa pe ecran mesajul NU EXISTA.*/

void minim3cifre(int v[], int d) {

	int ok = 0;

	for (int i = 0; i < d; i++) {
		if (contorCifre(v[i]) >= 3) {
			ok = 1;
		}
	}
	if (ok == 1) {
		for (int i = 0; i < d; i++) {
			if (contorCifre(v[i]) >= 3) {
				cout << v[i] << " ";
			}
		}
	}
	else {
		cout << "Nu exista";
	}

}

void solutie7() {

	int v[100], d;

	citire(v, d);
	minim3cifre(v, d);

}




















