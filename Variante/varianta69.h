#include "citire_afisare.h"



//s2

/*Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤50) şi n* n
numere naturale de cel mult 5 cifre ce reprezintă elementele unui tablou bidimensional a, cu
n linii şi n coloane, şi verifică dacă matricea este triunghiulară superior. Programul va afişa
pe ecran mesajul corespunzător: „Este triunghiulară superior” respectiv „Nu
este triunghiulară superior”. O matrice se numeşte triunghiulară superior dacă
toate elementele aflate sub diagonala principală a ei sunt nule. (10p.)
Exemplu: pentru n=3 şi matricea alăturată se va afişa mesajul:
Este triunghiulară superior
1 2 3
0 5 6
0 0 9*/

int matrice(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i > j) {
				if (a[i][j] != 0) {
					return 0;
				}
			}
		}
	}
	return 1;
}

void ex5Var69() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	cout<<matrice(a, n, m);

}

//s3

/*a) Să se scrie definiţia completă a subprogramului calcul, care primeşte prin intermediul
parametrului întreg n un număr natural de cel mult 9 cifre şi returnează valoarea absolută a
diferenţei dintre numărul de cifre pare şi numărul de cifre impare conţinute de n.
Exemplu: dacă n=92465, în urma apelului se va returna valoarea 1 (2 cifre impare, 3 cifre
pare). (5p.)
b) Să se scrie în limbajul C/C++ un program care citeşte de la tastatură un număr natural n
de cel mult 7 cifre şi, utilizând apeluri ale subprogramului calcul, determină şi afişează pe
ecran cel mai mic număr natural m, m≥n, care are tot atâtea cifre pare câte cifre impare.
Exemple: dacă se citeşte n=5513, atunci se afişează m=5520, iar dacă se citeşte n=311,
atunci se afişează m=1001.*/

int valoareAbsoluta(int n) {

	int cPare=0, cImpare = 0;

	while (n) {
		if (n % 10 % 2 == 0) {
			cPare++;
		}
		else {
			cImpare++;
		}
		n /= 10;
	}

	return cPare - cImpare;
}

int contorCifre(int n) {

	int ct = 0;

	while (n) {
		ct++;
		n /= 10;
	}
	return ct;
}

bool cifrePareEgalCifreImpare(int n) {

	int cPare = 0, cImpare = 0;

	while (n) {
		if (n % 10 % 2 == 0) {
			cPare++;
		}
		else {
			cImpare++;
		}
		n /= 10;
	}

	if (cImpare == cPare) {
		return true;
	}
	return false;
}

int cifrePareSiImpare(int n) {

	if (contorCifre(n) == 3) {
		return 1001;
	}
	else {

		for (int i = n; i < n * 2; i++) {
			if (cifrePareEgalCifreImpare(i)==true) {
				return i;
			}
		}
	}
	return -1;
}

void ex3Var69() {

	cout <<valoareAbsoluta(92465)<<endl;
	cout << cifrePareSiImpare(5513);
}

/*Fişierul text NUMERE.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie, n numere naturale cu cel mult 9 cifre fiecare. Aceste numere sunt dispuse în
ordine crescătoare şi separate între ele prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din
punct de vedere al timpului de executare, afişează pe ecran, separate prin câte un spaţiu, în
ordine crescătoare, numerele pare de pe a doua linie a fişierului, urmate de cele impare în
ordine descrescătoare. (6p.)
Exemplu: dacă fişierul NUMERE.TXT are
conţinutul alăturat
6
212 412 5111 71113 81112 101112
atunci programul va afişa pe ecran 212 412 81112 101112 71113 5111*/

void munte(int v[], int d) {

	sortareCrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			cout << v[i] << " ";
		}
	}
	sortareDescrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 1) {
			cout << v[i] << " ";
		}
	}
}

void ex4Var69() {

	int v[100], d;

	citire(v, d);
	munte(v, d);
}












