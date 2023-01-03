#include "citire_afisare.h"


/*Fiºierul text bac.txt conþine, pe prima sa linie, 100 de numere naturale de cel mult 4 cifre
fiecare, numerele fiind ordonate crescãtor ºi separate prin câte un spaþiu, iar pe a doua
linie un singur numãr natural x. Scrieþi un program C/C++ care citeºte toate numerele din
fiºier ºi verificã dacã x se aflã în ºirul celor 100 de numere aflate pe prima linie a fiºierului.
În caz afirmativ, se va afiºa pe ecran mesajul DA, altfel se va afiºa mesajul NU.
Exemple: dacã fiºierul bac.txt conþine:
17 38 40 45 50 51 52 53 54 55 ... 145
52
atunci se va afiºa: DA ;
dacã fiºierul bac.txt conþine:
2 11 15 16 20 25 30 35 40 ... 495
33
atunci se va afiºa: NU.*/

bool nrInInterval(int v[], int d, int x) {

	for (int i = 0; i < d; i++) {
		if (v[i] == x) {
			return true;
		}
	}
	return false;
}

void ex3Var60() {

	int v[100], d;

	citire(v, d);
	cout<<nrInInterval(v, d, 6);

}

/*Se considerã subprogramul radical, care:
– primeºte prin intermediul parametrului a, un numãr natural nenul de cel mult 4 cifre;
– furnizeazã prin intermediul parametrului x cel mai mare numãr natural cu proprietatea
cã x2 este mai mic sau egal cu a; de exemplu, dacã a=20, subprogramul va furniza prin
x valoarea 4.
a) Scrieþi numai antetul subprogramului radical. (4p.)
b) Scrieþi declarãrile de date ºi programul principal C/C++ care citeºte de la tastaturã un
numãr natural nenul de cel mult 4 cifre, n, ºi prin apeluri utile ale subprogramului radical,
verificã dacã n este pãtrat perfect. Programul va afiºa pe ecran în caz afirmativ mesajul DA,
iar în caz contrar mesajul NU.*/

int radical(int a) {

	int maxim = 0;

	for (int i = 2; i < a/2; i++) {
		if (pow(i, 2) < a) {
			if (i > maxim) {
				maxim = i;
			}
		}
	}
	return maxim;
}

bool patratPerfect(int n) {

	if (sqrt(n) == (int)sqrt(n)) {
		return true;
	}
	return false;
}

void ex4Var60() {

	cout << patratPerfect(25);

}


















