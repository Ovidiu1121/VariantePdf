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

void ex3Var3() {

	int v[100], d;

	citire(v, d);
	minim3cifre(v, d);

}

/*Subprogramul cif, cu doi parametri, primeºte prin intermediul parametrului a un numãr
natural cu cel mult 8 cifre ºi prin intermediul parametrului b o cifrã; subprogramul returneazã
numãrul de apariþii ale cifrei b în scrierea numãrului a.
Exemplu: pentru a=125854 ºi b=5, subprogramul va returna valoarea 2.*/

int aparitiiCifra(int n, int c) {
	int ct = 0;

	while (n) {
		if (c == n % 10) {
			ct++;
		}
		n /= 10;
	}
	return ct;
}

void ex4aVar3() {

	cout << aparitiiCifra(125854, 5);

}

/*Scrieþi un program C/C++ care citeºte de la tastaturã un numãr natural n cu exact 8 cifre
ºi care determinã ºi afiºeazã pe ecran, folosind apeluri utile ale subprogramului cif, cel mai
mare numãr palindrom ce poate fi obþinut prin rearanjarea tuturor cifrelor numãrului n. Dacã
nu se poate obþine un palindrom din toate cifrele numãrului n, programul va afiºa pe ecran
numãrul 0. Un numãr natural este palindrom dacã este egal cu numãrul obþinut prin scrierea
cifrelor sale în ordine inversã.
Exemplu: dacã n=21523531 atunci se va afiºa pe ecran numãrul 53211235, iar dacã
n=12272351 atunci se va afiºa pe ecran numãrul 0.*/


void ex4bVar3() {



}










