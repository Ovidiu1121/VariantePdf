#include "citire_afisare.h"

/*Se consideră subprogramul sub, cu trei parametri:
• n, prin care primeşte un număr natural (2<n<50);
• v, prin care primeşte un tablou unidimensional cu n elemente, numere naturale cu cel
mult 4 cifre;
• k, prin care primeşte un număr natural (1<k≤n).
Subprogramul returnează suma primelor k elemente cu valoare impară ale tabloului. Dacă
nu există k elemente impare în tablou, subprogramul returnează valoarea -1.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=8, v=(2, 7, 6, 8, 3, 7, 5, 1), k=3, atunci subprogramul returnează
valoarea 17 (7+3+7=17). */

void sumaElemente(int v[], int d, int k) {
	int ct = 1;
	int s = 0;

	for (int i = 0; i < d; i++) {
		if (ct <= k) {
			if (v[i] % 2 == 1) {
				s += v[i];
				ct++;
			}
		}
	}
	cout << s;
}

void ex3Var4() {

	int v[100], d;
	citire(v, d);
	sumaElemente(v, d, 3);

}

/*Fiind date două numere a şi b, îl numim pe a sufix al lui b dacă a este egal cu b sau dacă
b se poate obţine din a prin alipirea la stânga a unor noi cifre.
Exemplu: 12 este sufix al lui 12, iar 15 este sufix al lui 31415.
Fişierul bac.txt conţine pe prima linie un număr natural x, cu cel mult nouă cifre, iar pe a
doua linie un şir de cel puţin două şi cel mult 1000000 de numere naturale cu cel mult
nouă cifre. Numerele din şir sunt separate prin câte un spaţiu.
Se cere să se afişeze pe ecran ultimul termen al şirului care are ca sufix numărul x. Dacă
în șir nu există o astfel de valoare, pe ecran se afişează mesajul Nu exista.
Pentru determinarea numărului cerut se utilizează un algoritm eficient din punctul de
vedere al memoriei şi al timpului de executare.
Exemplu: dacă fişierul bac.txt conţine numerele
12
3445 89312 1245 12 67120 312 1234578
atunci pe ecran se afişează 312. */

bool sufix(int n, int sufix) {

	while (n&&sufix) {
		if (n % 10 != sufix % 10) {
			return false;
		}
		n /= 10;
		sufix /= 10;
	}
	return true;
}

void ultimulSufix(int v[], int d, int k) {

	for (int i = d - 1; i >= 0; i--) {
		if (sufix(v[i], k) == true) {
			cout << v[i];
			break;
		}
	}

}

void ex4Var4() {

	int v[100], d;

	citire(v, d);
	ultimulSufix(v, d,12);

}


















