#include "varianta20.h"


/*Scrieţi definiţia completă a unui subprogram i_prim care primeşte prin singurul său
parametru, n, un număr natural din intervalul [2,30000] şi returnează diferenţa minimă
p2-p1 în care p1 şi p2 sunt numere prime şi p1≤n≤p2.
Exemplu: dacă n=20 atunci i_prim(n)=4, valoare obţinută pentru p1=19 şi p2=23.*/

int primDupaNr(int n) {

	for (int i = n+1; i < n + 10; i++) {
		if (prim(i) == true) {
			return i;
		}
	}
	return -1;
}

int primINainteNr(int n) {

	for (int i = n - 1; i > n - 10; i--) {
		if (prim(i) == true) {
			return i;
		}
	}
	return -1;
}

int diferentaPrime(int n) {

	int a = primDupaNr(n);
	int b = primINainteNr(n);

	if (a > b) {
		return a - b;
	}
	else {
		return b - a;
	}

}

void ex3Var21() {

	cout << diferentaPrime(20);

}

/*Fişierul text BAC.TXT conţine pe prima linie două numere naturale n şi k separate de un
spaţiu (3≤n≤10000, 2≤k≤n/2), iar pe a doua linie un şir de n numere naturale x1, x2, ...,
xn separate prin câte un spaţiu, fiecare număr din acest şir având cel mult patru cifre.
a) Scrieţi un program C/C++ care citeşte numerele din fişier şi determină, utilizând o
metodă eficientă din punct de vedere al timpului de executare, cel mai mic indice i (1≤i≤nk+
1) pentru care media aritmetică a numerelor xi, xi+1, ..., xi+k-1 este maximă. Programul
afişează valoarea lui i pe ecran.
Exemplu: pentru fişierul alăturat se afişează 2, deoarece media
maximă se obţine pentru 9, 4, 7. 
8 3
2 9 4 7 5 2 9 9*/


void ex4Var21() {



}
















