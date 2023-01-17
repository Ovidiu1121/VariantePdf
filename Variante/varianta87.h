#include "citire_afisare.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤20),
elementele unei matrice cu n linii şi n coloane, numere întregi din intervalul [-100,100] şi
afişează pe ecran media aritmetică a elementelor strict pozitive ale matricei, care sunt
situate sub diagonala principală, ca în exemplu. Dacă nu există elemente strict pozitive
situate sub diagonala principală, programul va afişa mesajul „NU EXISTA”.
5.
Exemplu: pentru n=4 şi matricea alăturată se afişează valoarea 2.5
(sunt luate în considerare doar elementele marcate). (10p.)
-1 2 4 5
0 6 3 1
2 4 2 0
3 -5 1 -3*/

void medieAritmetica(int a[100][100], int n, int m) {

	int s = 0;
	int d = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] >= 0) {
				s += a[i][j];
				d++;
			}
		}
	}
	cout << double(s / d);
}

void ex5Var87() {

	int a[100][100], n, m;
	citireMatrice(a, n, m);
	medieAritmetica(a, n, m);
}

/*Scrieţi definiţia completă a subprogramului reduce, cu doi parametri, care primeşte prin
intermediul parametrilor a şi b două numere naturale formate din cel mult 9 cifre fiecare.
Funcţia returnează o valoare obţinută din numărul a prin însumarea acelor cifre diferite de 0
ale numărului a care NU divid numărul b. Dacă nu există asemenea cifre, se va returna
valoarea 0.
Exemplu: pentru a=184465709 şi b=18, cifrele corespunzătoare cerinţei sunt 8, 4, 4, 5 şi
7, deci valoarea returnată va fi 28 (28=8+4+4+5+7). Dacă a=2402804 şi b=8000,
valoarea returnată va fi 0.*/

void reduce(int a, int b) {
	int s = 0;
	while (a) {
		if(a%10!=0){
			if (b % (a % 10) != 0) {
				s+=a % 10;
			}
		}
		a /= 10;

	}
	cout << s;
}

void ex3Var87() {

	reduce(184465709, 18);

}

/*Fişierul text bac.txt conţine un şir de cel mult 2009 numere naturale, cu cel mult nouă
cifre fiecare, pe mai multe rânduri, numerele de pe acelaşi rând fiind separate prin câte un
spaţiu.
a) Scrieţi un program C/C++ care afişează pe ecran cel mai mic număr din fişier pentru care
suma cifrelor pare este egală cu suma cifrelor impare, precum şi numărul de apariţii în fişier
ale acestui număr, folosind o metodă eficientă din punctul de vedere al timpului de
executare. Cele două valori vor fi afişate pe o linie a ecranului, separate printr-un spaţiu.
Exemplu: dacă în fişier avem numerele 22031 9021 22031 1021 2011 10012 1021
457008 99882 atunci pe ecran se vor afişa numerele: 1021 2.*/

bool cifrePareEgalCifreIMpare(int n) {

	int sp = 0, si = 0;

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			sp += v[i];
		}
		else {
			si += v[i];
		}
	}
	if (sp == sp) {
		return true;
	}
	return false;
}

int frecventaNumar(int v[], int d, int n) {

	int f[10000]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void nrMinim(int v[], int d) {

	int minim = 10000;

	for (int i = 0; i < d; i++) {
		if (v[i] < minim) {
			if (cifrePareEgalCifreIMpare(v[i]) == true) {
				minim = v[i];
			}
		}
	}
	cout << minim << " " << frecventaNumar(v,d,minim);
}

void ex4Var87() {

	int v[100], d;

	citire(v, d);
	nrMinim(v, d);

}















