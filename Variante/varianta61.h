#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n≤15) şi
construieşte în memorie o matrice pătrată cu n linii şi n coloane în care ultima linie conţine,
în ordine, numerele 1,2,3,..,n, elementele situate deasupra diagonalei principale sunt
nule şi oricare alt element este obţinut prin însumarea elementelor vecine cu el, aflate pe
linia imediat următoare, pe aceeaşi coloană cu el sau pe una din coloanele alăturate.
Programul va afişa pe ecran matricea obţinută pe n linii, elementele fiecărei linii fiind
separate prin câte un spaţiu.
Exemplu: pentru n=4 pe ecran se va afişa:
(10p.)
27 0 0 0
9 18 0 0
3 6 9 0
1 2 3 4*/

void matrice(int n) {

	int a[100][100];

	for (int i = n-1; i >=0; i--) {
		for (int j = 0; j <n; j++) {
			if (i == n - 1) {
				a[i][j] = j + 1;
			}
			else {
				if (i < j) {
					a[i][j] = 0;
				}
				else {
					a[i][j] = a[i][j - 1] + a[i + 1][j] + a[i - 1][j - 1];
				}
			}
		}
	}

	for (int i = 0; i <n; i++) {
		for (int j = 0; j <n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var61() {

	matrice(4);

}

//s3

/*Subprogramul cifra primeşte prin parametrul x un număr real nenul pozitiv şi furnizează
prin parametrul y valoarea cifrei unităţilor părţii întregi a lui x.
Exemplu: dacă x=34.567, după apel y=4.
a) Scrieţi definiţia completă a subprogramului cifra. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură două numere reale cu cel mult două
zecimale, numere reprezentând mediile semestriale obţinute de un elev. Programul stabileşte,
folosind apeluri utile ale subprogramului cifra, dacă cele două medii citite se află în aceeaşi
categorie de medii sau nu. Precizăm că orice medie, în funcţie de intervalul în care se
încadrează, face parte din una dintre categoriile: [3,3.99], [4,4.99], [5,5.99],
[6,6.99], [7,7.99], [8,8.99] sau [9,10]. În cazul în care ambele medii fac parte din
aceeaşi categorie, programul va afişa mesajul Da, altfel va afişa mesajul Nu.*/

int cifraUnitatilor(float n) {

	return ((int)n) % 10;

}

bool medii(float a, float b) {

	if ((int)a % 10 == (int)b % 10) {
		return false;
	}
	return true;
}

void ex3Var61() {

	cout << medii(51.32, 32.322);

}

















