#include "varianta36.h"



/*Scrieţi un program C/C++ care citeşte numerele naturale nenule n şi k (k≤n≤100) şi un
tablou unidimensional cu n elemente numere întregi, fiecare având cel mult 4 cifre.
Programul modifică tabloul, permutând circular, cu k poziţii spre stânga, elementele
acestuia şi afişează pe ecran, separate prin câte un spaţiu, elementele tabloului obţinut.
Exemplu: dacă n=4, k=3 şi tabloul v=(1,2,3,4), atunci se vor afişa în ordine
elementele: 4 1 2 3.*/

void permutareDupaK(int v[], int d, int k) {

	int ct = 0;

	do {
		permutareCircularaStanga(v, d);
		ct++;
	} while (ct < k);

}

void ex3Var37() {

	int v[100], d;

	citire(v, d);
	permutareDupaK(v, d, 3);
	afisare(v, d);
}

/*Scrieţi doar antetul subprogramului nrdiv, care primeşte prin intermediul parametrului x
un număr natural nenul cu cel mult 4 cifre, şi returnează numărul de divizori primi ai lui x.*/

int contorNrDivizoriPrimi(int n) {

	int ct = 0;

	for (int i = 2; i <= n; i++) {
		if (n % i == 0 && prim(i)) {
			ct++;
		}
	}
	return ct;
}

void ex4aVar37() {

	int n;
	cout << "n=";
	cin >> n;
	cout<<contorNrDivizoriPrimi(n);

}

/*Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a
doua linie a fişierului se află un şir format din n numere naturale nenule, despărţite prin
câte un spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++
care citeşte numerele din fişier şi care afişează pe ecran, folosind apeluri utile ale
subprogramului nrdiv, prima şi ultima valoare din şirul celor n numere citite, care au un
număr par de divizori primi. Numerele afişate vor fi separate printr-un spaţiu.
Exemplu: dacă fişierul bac.in are conţinutul alăturat, pe
ecran se va afişa: 20 10
7
30 105 20 140 7 10 5*/

void nrParDivPrimi(int v[], int d) {

	for (int i = 0; i < d; i++) {
		int k = contorNrDivizoriPrimi(v[i]);
		if (k % 2 == 0) {
			cout << v[i]<<" ";
			for (int j = d - 1; j >= 0; j--) {
				int f = contorNrDivizoriPrimi(v[j]);
				if (f % 2 == 0) {
					cout << v[j];
					return;
				}
			}
		}
	}

}

void ex4bVar37() {

	int v[100], d;

	citire(v, d);
	nrParDivPrimi(v, d);

}













