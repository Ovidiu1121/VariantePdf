#include "citire_afisare.h"


/*Subprogramul Cifre are un singur parametru, n, prin care primește un număr natural
(n∈[0,109]). Subprogramul afișează pe ecran toate cifrele distincte care apar în scrierea
lui n, separate prin câte un spațiu.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=24207, se afișează cifrele 0 2 4 7, nu neapărat în această ordine.*/

void cifreDistincte(int n) {

	int v[100], d = 0;

	while (n) {
		if (nrGasit(v, d, n % 10)==false) {
			v[d] = n % 10;
			d++;
		}
		n /= 10;
	}
	sortareCrescator(v, d);
	for (int i = 0; i < d; i++) {
		cout << v[i] << " ";
	}
}

void ex3Var2() {

	cifreDistincte(24207);

}


/*Fișierul bac.txt conține numere naturale din intervalul [1,104]: pe prima linie numărul
n, pe a doua linie un șir de n numere ordonate strict descrescător, iar pe a treia linie două
numere, x și y (x≤y). Numerele de pe aceeași linie sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran cel mai mare număr din șir care aparține intervalului
[x,y]. Dacă nu există un astfel de număr, se afișează pe ecran mesajul nu exista.
Pentru determinarea numărului cerut se utilizează un algoritm eficient din punctul de
vedere al timpului de executare.
Exemplu: dacă fișierul conține numerele
5
100 49 16 7 2
10 30
atunci pe ecran se afișează
16 */

void interval(int v[], int d, int a, int b) {
	int maxim = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] >= a && v[i] <= b) {
			if (v[i] > maxim) {
				maxim = v[i];
			}
		}
	}
	cout << maxim;

}

void ex4Var2() {

	int v[100], d;

	citire(v, d);
	interval(v, d,10,30);

}

















