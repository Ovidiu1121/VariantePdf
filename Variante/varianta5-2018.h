#include "citire_afisare.h"


/*Subprogramul interval are un singur parametru, n, prin care primeşte un număr natural
(n∈[3,106]). Subprogramul returnează cel mai mic număr natural x (n<x) care NU este
prim, cu proprietatea că în intervalul [n,x] există un singur număr prim.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=8, subprogramul returnează numărul 12. */

int celMaiMicNr(int n) {

	for (int i = n; i < n * n; i++) {
		if (prim(i)) {
			return i + 1;
		}
	}
	return -1;
}

void ex3Var5() {

	cout << celMaiMicNr(8);

}


/*Primii termeni ai șirului definit alăturat
(unde n este un număr natural nenul)
sunt:
0, 3, 8, 15, 24, 35, 48, 63, 80 ....
fn= 
0																																																			 																																																					dacă n=1
3																																																			 																																																					dacă n=2
2∙fn-1-fn-2+2 altfel
Se citesc de la tastatură două numere naturale din intervalul [0,109], x și y,
reprezentând valorile a doi termeni aflați pe poziții consecutive în şirul dat (x<y), şi se
cere să se scrie în fişierul text bac.txt, în ordine strict descrescătoare, separați prin câte
un spațiu, toţi termenii şirului mai mici sau egali cu y.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare și al memoriei
utilizate.
Exemplu: dacă se citesc numerele
48 63
fişierul bac.txt conţine numerele
63 48 35 24 15 8 3 0*/

void sir(int a, int b) {

	bool flag = true;
	cout << a << " " << b << " ";
	while (flag) {

		int f = (-1)*(a - 2 - 2 * b);
		cout << f << " ";
		a = b;
		b = f;
		if (f == 0) {
			flag = false;
			return;
		}
	}

}

void ex4Var5() {

	sir(63, 48);

}















