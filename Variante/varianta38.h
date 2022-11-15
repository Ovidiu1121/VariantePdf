#include "varianta37.h"


/*Scrie�i �n limbajul C/C++ defini�ia complet� a subprogramul Del care are doi parametri: x,
un num�r �ntreg de cel mult 9 cifre, �i y, un num�r natural nenul de o cifr�. Subprogramul
determin� eliminarea tuturor cifrelor lui x mai mari strict dec�t y �i furnizeaz� num�rul
ob�inut tot prin intermediul parametrului x. Dac� toate cifrele lui x sunt mai mari strict dec�t
y, atunci x va primi valoarea -1.
Exemplu: dac� x=37659 �i y=6, dup� apel x=365, iar y=6.*/

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

/*Se consider� subprogramul inter, cu doi parametri: x �i y (numere �ntregi formate din cel
mult patru cifre fiecare); subprogramul interschimb� valorile a dou� variabile transmise prin
intermediul parametrilor x �i y.*/

void interschimbare(int a, int b) {

	int aux = a;
	a = b;
	b = aux;

	cout << a << " " << b;

}

void ex4aVar38() {

	interschimbare(3, 5);

}














