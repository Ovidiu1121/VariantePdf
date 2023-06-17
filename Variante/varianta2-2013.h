#include "citire_afisare.h"


/*Se consideră subprogramul sub, cu trei parametri:
• n, prin care primeşte un număr natural (2<n<50);
• v, prin care primeşte un tablou unidimensional cu n elemente, numere naturale cu cel
mult 4 cifre;
• x, prin care primeşte un număr natural cu cel mult 4 cifre. Cel puţin unul dintre
elementele tabloului are valoarea x.
Subprogramul modifică ordinea valorilor din tablou, astfel încât toate valorile egale cu x să
ocupe primele poziţii din v, iar celelalte valori să se regăsească în continuarea acestora.
Tabloul modificat este furnizat tot prin parametrul v.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=9, v=(2, 1, 0, 1, 7, 0, 1, 4, 5) şi x=1, atunci, după apel, o soluţie
posibilă este v=(1, 1, 1, 2, 0, 7, 0, 4, 5).*/

void inlocuire(int v[], int d, int x) {

	for (int i = 0; i < d; i++) {
		if (v[i] == x) {
			int j = 0;
			while (j < i) {
				if (v[j] != x) {
					int aux = v[i];
					v[i] = v[j];
					v[j] = aux;
				}
				j++;
			}
		}
	}

}

void ex3Var2() {

	int v[100], d;

	citire(v, d);
	inlocuire(v, d, 1);
	afisare(v, d);

}

/*Fişierul bac.txt conţine un şir de cel puţin trei şi cel mult 1000000 de numere naturale
cu cel mult nouă cifre. Numerele din şir sunt separate prin câte un spaţiu.
Se cere să se afişeze pe ecran, separate printr-un spaţiu, două numere distincte, anume
cel mai mic număr par cu două cifre și cel mai mare număr par cu două cifre care NU fac
parte din şir.
Dacă nu există două astfel de valori, pe ecran se afişează mesajul Nu exista.
Pentru determinarea numerelor cerute se utilizează un algoritm eficient din punctul de
vedere al timpului de executare.
Exemplu: dacă fişierul bac.txt conţine valorile
7 2 40 5 10 15 11 12 18 350
se afişează pe ecran numerele 14 98*/

void numere(int v[], int d) {

	int maxim = 0, minim = INT_MAX;

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0 && v[i] >= 10 && v[i] < 100) {
			if (v[i] > maxim) {
				maxim = v[i];
			}
			if (v[i] < minim) {
				minim = v[i];
			}
		}
	}
	int k = 10;

	while (minim <=k) {
		if (nrGasit(v, d, k) == false) {
			break;
		}
		k += 2;
	}
	int p = 98;

	while (maxim >= p) {
		if (nrGasit(v, d, p) == false) {
			break;
		}
		p -= 2;
	}
	cout << k << " "<<p;
}

void ex4Var2() {

	int v[100], d;

	citire(v, d);
	numere(v, d);


}














