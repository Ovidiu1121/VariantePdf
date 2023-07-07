#include "citire_afisare.h"


/* Subprogramul duplicare are doi parametri:
• n, prin care primeşte un număr natural (n∈[1,104]);
• d, prin care furnizează numărul obţinut prin duplicarea fiecărei cifre pare a lui n sau -1
dacă acesta nu are nicio cifră pară.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=2380, după apel d=2238800.*/

void duplicare(int n) {

	int a = 0, aux = 0, c = n % 10;

	while (n) {
		if (n % 10 == 0) {
			aux = aux * 100;
		}
		else if (n % 10 % 2 == 0) {
			aux = aux * 100 + n % 10 * 10 + n % 10;
		}
		else {
			aux = aux * 10 + n % 10;
		}
		n /= 10;
	}
	
	while (aux) {
		a = a * 10 + aux % 10;
		aux /= 10;
	}
	if (c == 0) {
		a = a * 100;
	}
	cout << a;
}

void ex3Var5() {

	duplicare(2380);

}

/*Fişierul bac.txt conţine un şir de cel mult 106
 numere naturale distincte din intervalul
[0,109]. Numerele din şir sunt separate prin câte un spaţiu.
Se cere să se determine cei mai mari doi termeni pari din şir care sunt precedaţi de doar
trei termeni impari. Termenii determinați se afișează pe ecran, în ordine strict crescătoare,
separați printr-un spațiu, iar dacă în şir nu există doi astfel de termeni, se afişează pe
ecran mesajul Nu exista.
Pentru determinarea termenilor ceruţi se utilizează un algoritm eficient din punctul de
vedere al spațiului de memorie şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele
4 3 5 312 27 30 14 212 11 15 17 400
se afişează pe ecran numerele
30 212
(4 este precedat de 0 numere impare, 312 este precedat de 2 numere impare, 30, 14 și
212 sunt precedate de 3 numere impare, iar 400 este precedat de 6 numere impare;
dintre numerele 30, 14 și 212 cele mai mari sunt 30 și 212). */

void maxPare(int v[], int d) {

	int maxim = 0, maxim2 = 0;
	int ct = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 1) {
			ct++;
		}
		if (ct == 3) {
			if (v[i] % 2 == 0) {
				if (v[i] > maxim) {
					maxim2 = maxim;
					maxim = v[i];
				}
				else {
					if (v[i] > maxim2) {
						maxim2 = v[i];
					}
				}
			}
		}
		if(ct>3){
			if (maxim == 0 || maxim2 == 0) {
				cout << "nu exista";
				return;
			}
			else {
				cout << maxim << " " << maxim2;
				return;
			}
		}
	}

}

void ex4Var5() {

	int v[100], d;
	citire(v, d);
	maxPare(v, d);

}

















