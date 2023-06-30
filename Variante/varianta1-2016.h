#include "citire_afisare.h"

/*Subprogramul Cifre are un singur parametru, n, prin care primește un număr natural
(n∈[0,109]). Subprogramul returnează numărul cifrelor care apar o singură dată în
scrierea lui n. Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=9272017, subprogramul returnează valoarea 3*/

void frecventaCifre(int n) {

	int f[10]{};
	int d = 0;

	while (n) {
		f[n % 10]++;
		n /= 10;
		d++;
	}
	int ct = 0;

	for (int i = 0; i < 10; i++) {
		if (f[i] == 1) {
			ct++;
		}
	}
	cout << ct;
}

void ex3Var1() {

	frecventaCifre(9272017);

}


/*Fişierul date.in conţine un şir de cel mult un milion de numere naturale din intervalul
[0,109], separate prin câte un spațiu. Șirul are cel puțin doi termeni pari și cel puțin doi
termeni impari.
Se cere să se afișeze pe ecran mesajul DA dacă șirul aflat în fișier are un subșir ordonat
strict crescător, format din toți termenii impari ai săi, și un subșir ordonat strict
descrescător, format din toți termenii pari ai săi. Dacă nu există două astfel de subșiruri,
programul afișează pe ecran mesajul NU. Pentru verificarea proprietății cerute utilizați un
algoritm eficient din punctul de vedere al timpului de executare și al memoriei necesare.
Exemplu: dacă fişierul conţine numerele
8 1 6 3 5 4 7
se afişează pe ecran mesajul
DA
iar dacă fișierul conține numerele
2 1 6 3 5 4 7
se afişează pe ecran mesajul
NU*/

void subsir(int v[], int d) {

	for (int i = 0; i < d; i++) {
		int j = i, k = i + 1;
		if (v[0] % 2 == 1) {
			int x = v[0];
			int y = -1;
			while (i < d - 1) {
				if (v[i] % 2 == 0) {
					y = v[i];
					break;
				}
				i++;
			}
			while (j < d) {
				if (v[j] % 2 == 1) {
					if (v[j] > x) {
						cout << "Nu";
						return;
					}
					else {
						x = v[j];
					}
				}
				j++;
			}
			while (k < d) {
				if (v[k] % 2 == 0) {
					if (v[k] < y) {
						cout << "Nu";
						return;
					}
					else {
						y = v[k];
					}
				}
				k++;
			}
		}
		cout << "Da";
		return;
	}
}

void ex4Var1() {

	int v[100], d;

	citire(v, d);
	subsir(v, d);

}
















