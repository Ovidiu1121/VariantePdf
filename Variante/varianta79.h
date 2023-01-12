#include "citire_afisare.h"


/*Scrieþi definiþia completã a subprogram max, cu trei parametri, a, b, c, care primeºte prin
intermediul parametrilor a ºi b douã numere reale cu exact douã cifre la partea întreagã ºi
exact douã zecimale fiecare. Subprogramul determinã cel mai mare numãr real dintre
urmãtoarele patru valori: a, b ºi numerele reale obþinute din a ºi b prin interschimbarea
pãrþii întregi cu partea fracþionarã în cadrul aceluiaºi numãr. Aceastã valoare este furnizatã
prin intermediul parametrului real c.
Exemplu: dacã a=33.17 ºi b=15.40, c va avea valoarea 40.15 (cea mai mare valoare
dintre 33.17, 15.40, 17.33 ºi 40.15)*/

void ex3Var79() {



}

/*Se citeºte de pe prima linie a fiºierului numere.in un numãr natural n (0<n<10000) ºi, de
pe a doua linie a fiºierului, n numere naturale din intervalul [1,100] ºi se cere sã se
afiºeze pe ecran, despãrþite prin câte un spaþiu, numãrul sau numerele întregi din intervalul
[1,100] care nu apar printre numerele citite. Dacã pe a doua linie a fiºierului apar toate
numerele din intervalul precizat, se va afiºa mesajul NU LIPSESTE NICIUN NUMAR.
Alegeþi un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
Exemplu: pentru fiºierul numere.in cu urmãtorul conþinut
12
4 2 3 1 6 5 7 8 9 11 10 100
se vor afiºa valorile 12 13 … 99*/

void interval(int v[], int d) {

	for (int i = 1; i < 101; i++) {
		int ok = 1;
		for (int j = 0; j < d; j++) {
			if (v[j] == i) {
				ok = 0;
			}
		}
		if (ok == 1) {
			cout << i << " ";
		}
	}

}

void ex4Var79() {

	int v[100], d;

	citire(v, d);
	interval(v, d);

}





















