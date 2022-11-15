#include "varianta30.h"



/*Scrieţi definiţia completă a subprogramului suma care primeşte ca parametru un tablou
unidimensional x cu cel mult 100 de elemente, numere reale, un număr natural n ce
reprezintă numărul efectiv de elemente ale tabloului x (n≤100), şi un număr natural m (n≥m).
Subprogramul returnează suma obţinută din cele mai mici m elemente ale tabloului x.*/

void sumaNrMaicMici(int v[], int d, int m) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] < m) {
			s += v[i];
		}
	}
	cout << s;
}

void ex3Var31() {

	int v[100], d;

	citire(v, d);
	sumaNrMaicMici(v, d, 50);

}

/*În fişierul numere.txt se află memorate, pe prima linie un număr natural n (1≤n≤100), iar
pe fiecare dintre următoarele n linii, câte două numere întregi x,y (-100≤x≤y≤100),
reprezentând capetele câte unui segment [x,y] desenat pe axa Ox de coordonate.
a) Scrieţi în limbajul C/C++ un program eficient din punct de vedere al timpului de executare
şi al spaţiului de memorare, care citeşte din fişier datele existente, determină segmentul
rezultat în urma intersecţiei tuturor celor n segmente date şi afişează pe ecran două numere
despărţie printr-un spaţiu ce reprezintă capetele segmentului cerut. Dacă segmentele nu au
nici un punct comun se va afişa pe ecran valoarea 0. 
Exemplu: dacă fişierul numere.txt are conţinutul alăturat,
5
-7 10
3 20
-5 5
0 12
-8 30 se va afişa pe ecran 3 5 */


void ex4Var31() {



}













