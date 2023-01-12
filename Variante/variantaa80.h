#include "citire_afisare.h"

/*Fiºierul text bac.in conþine cel mult 1000 de numere naturale cu cel mult patru cifre
fiecare, despãrþite prin câte un spaþiu. Scrieþi programul C/C++ care citeºte numerele din
fiºier ºi afiºeazã pe ecran, în ordine crescãtoare, acele numere din fiºier care au toate cifrele
egale. Dacã fiºierul nu conþine niciun astfel de numãr, se va afiºa pe ecran mesajul NU
EXISTA.
Exemplu: dacã fiºierul bac.in conþine numerele: 30 44 111 7 25 5 atunci pe ecran
se va afiºa 5 7 44 111.*/

bool toateCifreleEgale(int n) {
	int k = n % 10;
	n /= 10;

	while (n) {
		if (n % 10 != k) {
			return false;
		}
		n /= 10;
	}
	return true;
}

void crescator(int v[], int d) {
	sortareCrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (toateCifreleEgale(v[i]) == true) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var80() {

	int v[100], d;

	citire(v, d);
	crescator(v, d);

}

/*a) Scrieþi definiþia completã a unui subprogram divi cu doi parametri, care primeºte prin
intermediul parametrului n un numãr natural nenul cu cel mult 6 cifre ºi returneazã prin
intermediul parametrului d cel mai mic divizor propriu al lui n sau 0 in cazul în care n nu are
niciun divizor propriu. De exemplu, pentru n=15, d va avea valoarea 3. (4p.)
b) Scrieþi programul C/C++ care citeºte de la tastaturã un numãr natural nenul n
(1<n<1000000) ºi afiºeazã pe ecran cel mai mare numar natural mai mic decât n care îl
divide pe n. Se vor folosi apeluri utile ale subprogramului divi.
Exemple: dacã n=120, se afiºeazã pe ecran 60, iar dacã n=43, se afiºeazã 1.*/

int divi(int n) {

	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0) {
			return i;
		}
	}
	return -1;
}

int celMaiMareDivizor(int n) {

	if (prim(n)) {
		return 1;
	}

	int i = 2;

	while (i < n / 2) {
		if (n % i == 0) {
			return n / i;
		}
		i++;
	}
	return -1;
}

void ex4Var80() {

	cout << divi(15)<<endl;
	cout << celMaiMareDivizor(45);
}


















