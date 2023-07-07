#include "citire_afisare.h"


/* Subprogramul identice are doi parametri, a și b, prin care primește câte un număr
natural (10≤a≤b≤106
). Subprogramul afișează pe ecran toate numerele naturale din
intervalul [a,b] care au toate cifrele identice. Numerele afișate sunt separate prin câte un
spațiu, iar dacă nu există astfel de numere, se afişează pe ecran mesajul nu exista.
Scrieţi definiţia completă a subprogramului.
Exemplu: pentru a=700 și b=1500 se afișează pe ecran
777 888 999 1111.*/

bool cifreIdentice(int n) {

	int a = n % 10;

	while (n) {
		if (n % 10 != a) {
			return false;
		}
		n /= 10;
	}
	return true;
}

void interval(int a, int b) {

	for (int i = a; i <= b; i++) {
		if (cifreIdentice(i) == true) {
			cout << i << " ";
		}
	}

}

void ex3Var3() {

	interval(700, 1500);

}

/*Numim inserare a unui șir A într-un șir B introducerea, între două elemente ale șirului B, a
tuturor elementelor lui A, pe poziții consecutive, în ordinea în care apar în A.
Fișierul bac.in conține numere naturale din intervalul [1,106]: pe prima linie numerele m
și n, iar pe fiecare dintre următoarele două linii câte un șir de m, respectiv de n numere
întregi ordonate strict crescător. Numerele aflate pe aceeași linie a fișierului sunt
separate prin câte un spațiu, iar numerotarea elementelor în șiruri începe de la 1.
Se cere să se afișeze pe ecran poziția din al doilea șir începând de la care poate fi inserat
primul șir, astfel încât șirul obținut să fie strict crescător. Dacă nu există o astfel de poziție,
se afișează pe ecran mesajul imposibil.
Proiectați un algoritm eficient din punctul de vedere al spațiului de memorie utilizat şi al
timpului de executare.
Exemplu: dacă fișierul conține numerele
4 6
15 16 17 19
7 10 12 20 30 40
se poate obține șirul 7, 10, 12, 15, 16, 17, 19, 20, 30, 40 și se afișează pe ecran 4
iar dacă fișierul conține numerele
4 6
15 16 17 19
7 14 18 20 30 40
sau numerele
4 6
1 2 3 4
7 15 18 20 30 40
se afișează pe ecran mesajul imposibil
*/

void ex4VAr3() {

}

















