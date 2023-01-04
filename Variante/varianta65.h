#include "citire_afisare.h"


//s2

/*Scrieţi un program în limbajul C/C++ care citeşte de la tastatură două valori naturale n şi m
(1≤n≤24, 1≤m≤24) şi construieşte în memorie un tablou bidimensional cu n linii şi m coloane
format din toate numerele naturale de la 1 la n*m, ca în exemplu. Programul va afişa pe
ecran, pe n linii, tabloul obţinut, elementele fiecărei linii fiind separate prin câte un spaţiu.
1 2 3 4 5  
10 9 8 7 6
11 12 13 14 15 
20 19 18 17 16*/

void ex5Var65() {

   

}

//s3

/*Se generează, prin metoda backtracking, toate modalităţile de aşezare a numerelor
naturale de la 1 la 5 astfel încât oricare două numere consecutive să nu se afle pe poziţii
alăturate. Dacă primele două soluţii sunt: (1,3,5,2,4) şi (1,4,2,5,3), care este prima
soluţie generată care începe cu 2?*/


int s[100], n = 5, m = 5;

void tipar() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 0;
		}
	}


	for (int i = 0; i < k - 1; i++) {
		if (s[i] == s[i + 1] + 1) {
			return 0;
		}
	}

	return 1;
}

int solutie(int k) {

	if (k == m - 1) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k) {

	for (int i = 1; i <= n; i++) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex1Var64() {

	back(0);

}

/*Subprogramul sfx primeşte prin singurul său parametru, x, un număr natural din intervalul
[100,2000000000] şi returnează valoarea 1 dacă ultimele trei cifre ale numărului sunt în
ordine strict descrescătoare sau valoarea 0 în caz contrar.
Exemplu: dacă x=24973 se va returna valoarea 1.
a) Scrieţi definiţia completă a subprogramului sfx. (5p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n format din exact
6 cifre şi verifică, utilizând apeluri ale subprogramului sfx, dacă acest număr are toate cifrele
în ordine strict descrescătoare. Programul va afişa mesajul Da în caz afirmativ şi mesajul Nu
în caz contrar.
Exemplu: dacă n=756543 se va afişa Nu, iar dacă n=976532 se va afişa Da.*/

bool ordineStrictDescrescatoare(int n) {

	int a = n % 10; n /= 10;
	int b = n % 10; n /= 10;

	if (a > b) {
		return 0;
	}
	else {
		if (b > n % 10) {
			return 0;
		}
	}
	return 1;
}

bool toateCifreleDescresc(int n) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	for (int i = d - 1; i > 0; i--) {
		if (v[i] < v[i - 1]) {
			return 0;
		}
	}
	return 1;
}

void ex3Var65() {

	cout << toateCifreleDescresc(756543);

}

/*Pentru un şir de numere naturale, numim ”pol” al şirului un termen din şir care are doi vecini,
termenul precedent şi termenul următor din şir, şi valoarea termenului respectiv este strict
mai mare decât valoarea fiecăruia dintre cei doi vecini ai săi.
a) Fişierul text date.in conţine un şir de cel mult 10000 de numere naturale având
maximum 6 cifre fiecare, numere separate prin câte un spaţiu. Scrieţi un program C/C++
care citeşte toate numerele din fişier şi afişează numărul de ”poli“ ai şirului citit, folosind un
algoritm eficient din punctul de vedere al memoriei utilizate. (6p.)
Exemplu: dacă fişierul date.in are următorul conţinut:
51 20 100 43 43 618 5000 31 2020 114 116 4
atunci pe ecran se afişează 4 (cele patru numere subliniate reprezintă ”poli“ ai şirului)*/

int pol(int v[], int d) {

	int ct = 0;

	for (int i = 1; i < d - 1; i++) {
		if (v[i] > v[i - 1] && v[i] >  v[i + 1]) {
			ct++;
		}
	}
	return ct;
}

void ex4Var65() {

	int v[100], d;

	citire(v, d);
	cout << pol(v, d);

}








