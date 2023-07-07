#include "citire_afisare.h"


/*Subprogramul nrDiv are doi parametri, a și b (a≤b), prin care primeşte câte un număr
natural din intervalul [1,109]. Subprogramul returnează numărul valorilor din intervalul
[a,b] care pot fi scrise ca produs de două numere naturale consecutive.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă a=10 și b=40, subprogramul returnează 3 (valorile cu proprietatea cerută
sunt 12, 20 și 30).*/

bool produs(int n) {

	for (int i = 1; i < n / 2; i++) {
		if (i * (i + 1) == n) {
			return true;
		}
		else if (i * (i + 1) > n) {
			return false;
		}
	}

}

void interval(int a, int b) {


	for (int i = a; i <= b; i++) {
		if (produs(i) == 1) {
			cout << i << " ";
		}
	}
}

void ex3Var1() {

	interval(10, 40);

}


/*Se consideră şirul definit alăturat (unde n și x sunt
numere naturale nenule, iar x este impar). De
exemplu, pentru x=21 șirul este:
21, 22, 43, 44, 87, 88, 175, 176 ....





+ ⋅
+
=
=
, altfel n-2
1 2 f
, dacă n par n-1
f
x, dacă n
fn 1
1
Se citesc de la tastatură două numere naturale din intervalul [1,109], x și y, cu cel mult
nouă cifre, unde x are semnificația precizată mai sus, iar y este un termen al şirului dat, şi
se cere să se scrie în fişierul text bac.txt, în ordine strict descrescătoare, separați prin
câte un spațiu, toţi termenii şirului care sunt mai mici sau egali cu y.
Pentru determinarea termenilor ceruţi se utilizează un algoritm eficient din punctul de
vedere al memoriei şi al timpului de executare.
Exemplu: dacă x=21, iar y=175, fişierul bac.txt conţine numerele
175 88 87 44 43 22 21*/

void sir(int n) {
	cout << n << " ";
	while (n > 21) {
		if (n % 2 == 0) {
			n = n - 1;
			cout << n << " ";
		}
		else {
			n = n / 2 + 1;
			cout << n << " ";
		}
	}

}

void ex4Var1() {

	sir(175);

}

















