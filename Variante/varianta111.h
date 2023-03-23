#include "citire_afisare.h"

/*Subprogramul patrate are doi parametri, x și y, prin care primește câte un număr natural
(1≤x≤y≤109). Subprogramul afişează pe ecran o expresie aritmetică reprezentând suma numerelor din
intervalul [x,y] care au proprietatea că sunt pătrate perfecte, urmate de valoarea acestei sume.
Termenii sumei sunt într-o ordine oarecare și sunt separați prin câte un simbol plus (+), iar valoarea
sumei este precedată de simbolul egal (=), ca în exemplu. Dacă nu există niciun astfel de termen, se
afișează pe ecran mesajul nu exista.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=10 și y=50 se poate afișa pe ecran 16+25+36+49=126*/

void patratePerfecte(int a, int b) {
	int s = 0;

	for (int i = a; i <= b; i++) {
		if ((int)sqrt(i) == sqrt(i)) {
			cout << i << "+";
			s += i;
		}
	}
	cout << "=" << s;
}

void ex1Var11() {

	patratePerfecte(10, 50);

}

/*Fişierul bac.txt conţine un şir crescător de cel mult 106 numere naturale din intervalul [0,109],
separate prin câte un spaţiu. Se cere să se afişeze pe ecran fiecare număr distinct din şir, urmat de
numărul de apariţii ale acestuia în şir. Numerele afișate sunt separate prin câte un spațiu. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fişierul bac.txt conține numerele 0 0 0 5 5 5 5 7 7 11 20 20
se afișează 0 3 5 4 7 2 11 1 20 2
*/

void aparitii(int v[], int d) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	for (int i = 0; i < d; i++) {
		if (f[i] >= 1) {
			cout << i << " "<<f[i]<<" ";
		}
	}

}

void ex3Var11() {

	int v[100], d;

	citire(v, d);
	aparitii(v, d);

}













