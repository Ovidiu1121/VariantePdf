#include "citire_afisare.h"

/*Un număr natural nenul se numește subperfect dacă este strict mai mic decât suma
divizorilor săi proprii (divizori naturali diferiți de 1 și de el însuși).
Exemplu: 12 este număr subperfect pentru că 12<2+3+4+6.
Se consideră subprogramul subperfect, cu doi parametri, a și b, prin care primeşte câte
un număr natural (2≤a<b≤109
). Subprogramul afișează pe ecran, separate prin câte un
spațiu, în ordine descrescătoare, toate numerele subperfecte din intervalul [a,b]. Dacă în
interval nu există astfel de numere, subprogramul afișează pe ecran mesajul nu exista.
Scrieţi definiţia completă a subprogramului.
Exemplu: pentru a=10 și b=20, se afișează pe ecran: 20 18 12*/

bool subperfect(int n) {
	int s = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	if (n < s) {
		return true;
	}
	return false;
}

void nrSubperfecte(int a, int b) {

	for (int i = b; i >=a; i--) {
		if (subperfect(i) == true) {
			cout << i << " ";
		}
	}

}

void ex3Var1() {

	nrSubperfecte(10, 20);

}

/*Fișierul bac.txt conține pe prima linie un număr natural, n (1≤n≤106
), iar pe a doua linie
cel mult 1000000 de numere naturale de forma 2
p
 (0≤p≤9), separate prin câte un spațiu.
Se cere să se afișeze pe ecran numărul care ar apărea pe poziția n în șirul ordonat
descrescător obținut din toate numerele aflate pe a doua linie a fișierului. Dacă șirul are
mai puțin de n termeni, se afișează pe ecran mesajul Nu exista.
Pentru determinarea numărului cerut se utilizează un algoritm eficient din punctul de
vedere al timpului de executare.
Exemplu: dacă fişierul bac.txt conţine numerele
5
16 32 1 64 128 32 128 32
atunci pe ecran se afișează valoarea
32 */

void pozitieN(int v[], int d, int n) {

	sortareDescrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (n == i) {
			cout << v[i];
			return;
		}
	}

}

void ex4Var1() {

	int v[100], d;

	citire(v, d);
	pozitieN(v, d, 5);

}























