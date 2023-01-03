#include "citire_afisare.h"


/*Se consideră subprogramul dist2, care primeşte prin intermediul parametrilor xa, ya şi
respectiv xb, yb, coordonatele carteziene întregi (abscisă, ordonată) pentru două puncte
din plan, A şi respectiv B. Subprogramul returnează pătratul distanţei dintre cele două
puncte.
a) Scrieţi în limbajul C/C++ definiţia completă a subprogramului dist2.
b) Scrieţi un program C/C++ care citeşte de la tastatură 8 valori întregi reprezentând
coordonatele carteziene pentru patru puncte din plan şi afişează mesajul Da dacă cele
patru puncte pot fi vârfurile unui pătrat, iar în caz contrar afişează mesajul Nu,folosind
apeluri utile ale subprogramului dist2.
Exemplu: dacă coordonatele punctelor sunt cele alăturate
atunci se va afişa mesajul Da (6p.)
0 0
3 0
3 3
0 3*/

double dist2(int x1, int y1, int x2, int y2) {

	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

}

void puncteCarteziene(int x1, int y1,int x2,int y2, int x3, int y3,int x4,int y4 ) {

	if (dist2(x1, y1, x2, y2) == dist2(x2, y2, x3, y3) && dist2(x3, y3, x4, y4) == dist2(x4, y4, x1, y1) && dist2(x1, y1, x3, y3) == dist2(x2, y2, x4, y4)) {
		cout << "Da" << endl;
	}
	else {
		cout << "Nu" << endl;
	}

}

void ex3Var51() {

	puncteCarteziene(0, 0, 3, 0, 3, 3, 0, 3);

}


/*Fişierul text date.in conţine pe prima linie un număr natural nenul n (n≤100), iar pe a
doua linie n numere naturale nenule, separate prin câte un spaţiu, fiecare număr având
maximum 4 cifre. Scrieţi un program C/C++ care citeşte toate numerele din fişierul text
date.in, construieşte în memorie un tablou unidimensional a, cu cele n elemente din fişier
şi afişează pe ecran perechile (ai, aj) , 1≤i<j≤n, cu proprietatea că elementele fiecăreia
dintre aceste perechi au aceeaşi paritate. Fiecare pereche se va afişa pe câte o linie a
ecranului, elementele perechii fiind separate prin câte un spaţiu. În cazul în care nu există
nicio pereche, se va afişa valoarea 0.
Exemplu: dacă fişierul date.in are conţinutul alăturat, 
5
16 22 3 6 1
se vor afişa:
16 22
16 6
22 6
3 1 (10p.) */

void matrice(int v[], int d) {

	int a[100][100],n=0;
	int x = 0, y;

	for (int i = 0; i < d; i++) {
		int j = i+1;
		while (j < d) {
			y = 0;
			if (v[i] % 2 == 0 && v[j] % 2 == 0 || v[i] % 2 == 1 && v[j] % 2 == 1) {
				a[x][y] = v[i];
				y++;
				a[x][y] = v[j];
				x++;
				n++;
			}
			j++;
		}

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void ex4Var51() {

	int v[100], d;

	citire(v, d);
	matrice(v, d);

}

















