#include "citire_afisare.h"


/*Un număr natural nenul, n, se numește număr abundent dacă S(n)/n>S(k)/k, pentru orice număr
natural nenul k (k≤n-1), unde s-a notat cu S(i) suma divizorilor pozitivi ai numărului natural nenul i.
Subprogramul abundent are un singur parametru, n, prin care primește un număr natural (n∈[2,106]).
Subprogramul returnează valoarea 1, dacă n este un număr abundent, sau valoarea 0, în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: pentru n=6, subprogramul returnează valoarea 1 (S(6)/6=2, iar cel mai mare raport obținut
pentru valori strict mai mici decât 6 este S(4)/4=1.75), iar pentru n=7 sau n=8, subprogramul
returnează valoarea 0 (S(7)/7=1.14, S(8)/8=1.87).*/

int suma(int n) {

	int s = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}

bool nrabundent(int n) {

	double k = suma(n) / n;

	for (int i = 1; i < n - 1; i++) {
		if ((double)suma(i) /i > k) {
			return false;
		}
	}
	return true;
}

void ex1Var1() {

	cout << nrabundent(8);

}

/*Pentru a identifica punctele în care se concentrează apa în albia unui râu în cazul secetei, se determină
talvegul acesteia – linia care unește punctele cele mai adânci ale albiei. În acest scop s-au stabilit ns
secțiuni transversale pe cursul apei, numerotate începând de la 1, și în cadrul fiecărei secțiuni s-a măsurat
adâncimea apei în np puncte, numerotate începând de la 1. Din fiecare secțiune, în ordine, se include în
talveg cel mai adânc punct al acesteia, iar dacă în secțiune sunt mai multe puncte aflate la aceeași
adâncime, maximă, se va lua în considerare doar primul dintre ele, ca în exemplu.
Scrieți un program C/C++ care citește de la tastatură două numere naturale, ns și np (ns∈[1,103],
np∈[1,50]), și cele ns∙np elemente ale unui tablou bidimensional, valori naturale din intervalul [0,102].
Fiecare linie a tabloului corespunde câte unei secțiuni, în ordinea numerotării acestora, iar
valorile memorate pe linie reprezintă adâncimile celor np puncte stabilite pentru acea
secțiune, în ordinea numerotării lor. Programul afișează pe ecran, pentru fiecare secțiune, o
pereche formată din numărul de ordine al secțiunii și numărul de ordine al punctului său care
s-a inclus în talveg. Numerele din fiecare pereche sunt afișate separate prin câte un
caracter : (două puncte), iar fiecare pereche este urmată de un spațiu.
Exemplu: pentru ns=6, np=4 și tabloul alăturat, se afișează pe ecran valorile:
1:3 2:2 3:2 4:2 5:4 6:3
2 4 5 3
2 6 6 3
1 5 2 5
1 3 3 3
3 4 3 5
0 1 2 1*/

int pozMaximLinie(int a[100][100], int m, int l) {
	int maxim = 0;

	for (int i = 0; i < m; i++) {
		if (a[l][i] > maxim) {
			maxim = a[l][i];
		}
	}

	for (int i = 0; i < m; i++) {
		if (a[l][i] == maxim) {
			return i+1 ;
		}
	}
	return -1;
}

void perechi(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		cout << i+1 << ":" << pozMaximLinie(a, n, i) << endl;
	}

}

void ex2Var1() {

	int a[100][100], n, m;
	citireMatrice(a,n,m);
	perechi(a, n, m);

}

/*Un număr natural x este numit prefix al unui număr natural y dacă se obține din acesta prin eliminarea a
cel puțin unei cifre de la dreapta sa, și este numit sufix al lui y dacă se obține din acesta prin eliminarea
a cel puțin unei cifre de la stânga sa.
Exemplu: 15 este prefix pentru 154 sau 1521, este sufix pentru 3415 sau 5115, dar nu este nici prefix,
nici sufix pentru 15.
Fișierul bac.txt conține maximum 106 numere naturale din intervalul [10,104), separate prin câte un
spațiu. Se cere să se afișeze pe ecran numărul valorilor de două cifre care apar de același număr de ori
ca sufix, respectiv ca prefix al numerelor din șirul aflat în fișier. Proiectați un algoritm eficient din punctul
de vedere al timpului de executare.
Exemplu: dacă fișierul are conținutul
342 1684 2134 5434 111 98 98 3405 3412 7016 8634 1010 102 310
se afișează pe ecran: 4 (pentru valorile 10, 11, 16, 34).*/

bool sufix(int n, int k) {

	while (n) {
		if (n % 10 != k % 10) {
			return false;
		}
		n /= 10;
		k /= 10;
	}
	return true;
}

int invers(int n) {

	int nou=0;

	while (n) {
		nou = nou * 10 + n % 10;
		n /= 10;
	}
	return nou;
}

bool prefix(int n, int k) {
	
	n = invers(n);
	k = invers(k);

	while (n) {
		if (n % 10 != k % 10) {
			return false;
		}
		n /= 10;
		k /= 10;
	}
	return true;
}

int primeleDouaCifre(int n) {

	int k = 0;
	int aux = n;
	while (aux != 0) {
		aux /= 10;
		k++;
	}

	int nou = 1;
	for (int i = 0; i < k - 2; i++) {
		nou *= 10;
	}
	int prefix = n / nou;

	return prefix;
}

void contor(int v[], int d) {
	int ct = 0, prefixe = 0, sufixe = 0;

	for (int i = 0; i < d; i++) {
		int pref = primeleDouaCifre(v[i]);
		int suf = v[i] % 100;
		for (int j = 0; j < d; j++) {
			if (prefix(pref, j) == true) {
				prefixe++;
			}
			if (sufix(suf, j) == true) {
				sufixe++;
			}
		}
		if (sufixe == prefixe) {
			ct++;
		}
	}
	cout << ct;
}

void ex3Var1() {
	
	int v[100], d;
	citire(v, d);
	contor(v, d);

}






