#include "citire_afisare.h"

/*Un tablou bidimensional A cu m linii şi n coloane (1≤m≤100, 1≤n≤100) conţine pe prima linie
numerele 1,2,...,n, iar pe prima coloană numerele 1,2,...,m. Celelalte elemente ale
tabloului sunt date de relaţia: Ai,j=Ai-1,j+Ai,j-1. Scrieţi un program C/C++ care citeşte de la
tastatură numerele m şi n şi afişează pe ecran ultima cifră a elementului de pe ultima linie şi
ultima coloană a tabloului.
Exemplu: pentru m=3 şi n=4 se va afişa 5 deoarece elementele
tabloului A sunt:
(10p.)
1 2 3 4
2 4 7 11
3 7 14 25*/

void matrice(int n, int m) {
	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0) {
				a[i][j] = j+1;
			}
			else if (j == 0) {
				a[i][j] = i+1;
			}
			else {
				a[i][j] = a[i - 1][j] + a[i][j - 1];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void ex5Var23() {

	matrice(3, 4);
}


/*Scrieţi definiţia completă a subprogramului shift care primeşte prin intermediul
parametrului n o valoare naturală nenulă (n≤100), iar prin intermediul parametrului x, un
tablou unidimensional cu maximum 100 de componente. Fiecare componentă a acestui
tablou este un număr întreg care are cel mult 4 cifre. Subprogramul permută circular cu o
poziţie spre stânga primele n elemente ale tabloului x şi furnizează tabloul modificat tot prin
parametrul x.
Exemplu: dacă înainte de apel n=4 şi x=(1,2,3,4), după apel x=(2,3,4,1).*/

void permutareCircularaStanga(int v[], int d) {

	int aux = v[0];

	for (int i = 0; i < d - 1; i++) {
		v[i] = v[i + 1];
	}
	v[d - 1] = aux;

}

void ex3aVar23() {

	int v[100], d;

	citire(v, d);
	permutareCircularaStanga(v, d);
	afisare(v, d);


}

/*Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n
(n≤100), apoi cele n elemente ale unui tablou unidimensional x. Programul va inversa
ordinea elementelor tabloului x folosind apeluri utile ale subprogramului shift şi va afişa
pe ecran, separate prin câte un spaţiu, elementele tabloului rezultat în urma acestei
prelucrări.
Exemplu: dacă se citesc pentru n valoarea 5, iar tabloul x este (1,2,3,4,5) programul
va determina ca x să devină (5,4,3,2,1).*/

void vectorInvers(int v[], int d) {

	for (int i = d - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}

}

void ex3bVar23() {

	int v[100], d;

	citire(v, d);
	vectorInvers(v, d);
}

/*Fişierul text BAC.TXT conţine pe prima linie un număr natural nenul n (1≤n≤1000), iar pe
fiecare dintre următoarele n linii, câte două numere întregi a şi b (1≤a≤b≤32000), fiecare
pereche reprezentând un interval închis de forma [a,b]. Scrieţi un program C/C++ care
determină intervalele care au proprietatea că intersecţia cu oricare dintre celelalte n-1
intervale este vidă şi afişează pe câte o linie a ecranului, separate printr-un spaţiu,
numerele care reprezintă capetele intervalelor determinate.
Exemplu: dacă fişierul BAC.TXT are conţinutulalăturat,
4
17 20
2 6
10 15
8 16 
pe ecran se va afişa:
2 6    sau 17 20
17 20       2 6*/

void ex4Var23() {



}








