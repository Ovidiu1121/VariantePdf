#include "varianta37.h"


/*Scrieþi în limbajul C/C++ definiþia completã a subprogramul Del care are doi parametri: x,
un numãr întreg de cel mult 9 cifre, ºi y, un numãr natural nenul de o cifrã. Subprogramul
determinã eliminarea tuturor cifrelor lui x mai mari strict decât y ºi furnizeazã numãrul
obþinut tot prin intermediul parametrului x. Dacã toate cifrele lui x sunt mai mari strict decât
y, atunci x va primi valoarea -1.
Exemplu: dacã x=37659 ºi y=6, dupã apel x=365, iar y=6.*/

int eliminareCifreNr(int x, int y) {

	int nou = 0;

	while (x) {
		if (x % 10 <=y) {
			nou = nou * 10 + x % 10;
		}
		x /= 10;
	}
	int aux = 0;

	while (nou) {
		aux = aux * 10 + nou % 10;
		nou /= 10;
	}

	return aux;
}

void ex3Var38() {

	cout << eliminareCifreNr(37659,6);

}

/*Se considerã subprogramul inter, cu doi parametri: x ºi y (numere întregi formate din cel
mult patru cifre fiecare); subprogramul interschimbã valorile a douã variabile transmise prin
intermediul parametrilor x ºi y.*/

void interschimbare(int a, int b) {

	int aux = a;
	a = b;
	b = aux;

	cout << a << " " << b;

}

void ex4aVar38() {

	interschimbare(3, 5);

}














