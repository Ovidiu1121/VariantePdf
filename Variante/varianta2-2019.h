#include "citire_afisare.h"


/*Subprogramul inserare are un singur parametru, n, prin care primeşte un număr natural
(n∈[10,105)). Subprogramul furnizează prin același parametru numărul obținut din n prin inserarea,
între oricare două cifre alăturate ale sale, a valorii absolute a diferenței acestora. Scrieți definiția
completă a subprogramului.
Exemplu: dacă n=7255, atunci, după apel, n=7523505.*/

void inserare(int v[], int &d, int n, int poz) {

	for (int i = d-1; i >=poz; i--) {
		v[i+1] = v[i];
	}
	v[poz] = n;
	d++;
}

int size(int n) {

	int ct = 1;

	while (n) {
		ct++;
		n /= 10;
	}
	return ct;
}

void inserareCifra(int n) {

	int aux = 0;
	int p = 1;
	while (n) {
		int c = n % 10;
		n /= 10;
		if (size(n) == 1) {
			aux = aux * 10 + c;
			break;
		}
		if (aux%10==0) {
			aux = aux * p * 10 +c * 10 + abs(n % 10 - c);
		}
		else {
			aux = aux * p + c * 10 + abs(n % 10 - c);
		}
		p *= 10;
	}

	int nou = 0;

	while (aux) {
		nou = nou * 10 + aux % 10;
		aux /= 10;
	}

	cout << nou;
}

void ex1Var2() {

	inserareCifra(7255);

}


/*Un șir format din 2·n numere naturale se numește paritar dacă fiecare dintre primii săi n termeni fie
are aceeași paritate cu oricare dintre ultimii săi n termeni, fie este strict mai mic decât oricare număr
de paritate diferită aflat printre aceștia.
Fișierul bac.txt conține numere naturale din intervalul [0,106]: pe prima linie un număr nenul, n,
iar pe a doua linie un șir de 2·n numere, separate prin câte un spațiu. Se cere să se afișeze pe ecran
mesajul DA, în cazul în care șirul aflat în fișier este paritar, sau mesajul NU, în caz contrar. Proiectați
un algoritm eficient din punctul de vedere al timpului de executare și al memoriei utilizate.
Exemplu: dacă fișierul are unul dintre conținuturile de mai jos, se afișează pe ecran mesajul DA.
5
20 3 11 4 15 25 49 18 53 16
5
20 3 11 4 15 25 49 81 53 61*/


void ex3Var2() {



}

















