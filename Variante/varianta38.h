#include "varianta37.h"

//s2

/*Se consideră o matrice pătratică cu n linii şi n coloane (1≤n≤30), ce
memorează numere întregi nenule de cel mult două cifre fiecare.
Scrieţi un program C/C++ care citeşte de la tastatură valoarea n şi
elementele matricei şi care afişează pe ecran, ultima cifră a produsului
acelor elemente de pe diagonala secundară ce au proprietatea că sunt
valori minime pe coloanele lor. Dacă nu există astfel de elemente în
matrice, se va afişa mesajul NU EXISTA.
Exemplu: pentru n=4 şi matricea alăturată se va afişa pe ecran
valoarea 1 (3*7=21).*/


void ex5Var38() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);


}

//s3

/*Utilizăm metoda backtracking pentru generarea tuturor modalităţilor de a scrie numărul 9
ca sumă a cel puţin două numere naturale nenule distincte. Termenii fiecărei sume sunt
în ordine strict crescătoare. Soluţiile se generează în ordinea: 1+2+6, 1+3+5, 1+8,
2+3+4, 2+7, 3+6 şi 4+5. Se aplică exact aceeaşi metodă pentru scrierea lui 8. Câte
soluţii vor fi generate?*/

void ex1Var38() {


}

/*Scrieţi în limbajul C/C++ definiţia completă a subprogramul Del care are doi parametri: x,
un număr întreg de cel mult 9 cifre, şi y, un număr natural nenul de o cifră. Subprogramul
determină eliminarea tuturor cifrelor lui x mai mari strict decât y şi furnizează numărul
obţinut tot prin intermediul parametrului x. Dacă toate cifrele lui x sunt mai mari strict decât
y, atunci x va primi valoarea -1.
Exemplu: dacă x=37659 şi y=6, după apel x=365, iar y=6.*/

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

/*Se consideră subprogramul inter, cu doi parametri: x şi y (numere întregi formate din cel
mult patru cifre fiecare); subprogramul interschimbă valorile a două variabile transmise prin
intermediul parametrilor x şi y.*/

void interschimbare(int a, int b) {

	int aux = a;
	a = b;
	b = aux;

	cout << a << " " << b;

}

void ex4aVar38() {

	interschimbare(3, 5);

}














