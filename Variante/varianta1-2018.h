#include "citire_afisare.h"

/*Se consideră subprogramul divizori, cu patru parametri:
• n, prin care primeşte un număr natural (n∈[2,106]);
• x, y și z, prin care furnizează câte un divizor al lui n (0<x<y<z) cu proprietatea că
x+y+z=n, sau valoarea 0, prin fiecare dintre aceștia, dacă n nu are astfel de divizori.
Scrieţi definiţia completă a subprogramului.
Exemplu: pentru numărul n=24, în urma apelului, x=4, y=8 şi z=12, iar pentru numărul
n=9, în urma apelului, x=0, y=0 şi z=0*/

void divizori(int n) {

	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0) {
			for (int j = 2; j < n / 2; j++) {
				int a = n - i - j;
				if (n % j == 0 && n % a == 0) {
					cout << i << " " << j << " " << a << endl;
				}
			}
		}
	}

}

void ex3Var1() {

	divizori(24);

}


/*Un număr natural x, format din exact două cifre, este numit sub-număr al unui număr
natural y dacă cifrele lui x apar, în aceeași ordine, pe ranguri consecutive, în numărul y.
Exemplu: 21 este sub-număr al lui 12145, al lui 213, al lui 21, dar nu și al lui 123 sau al
lui 231.
Fișierul bac.txt conține cel mult 106
 numere naturale din intervalul [10, 109
], separate
prin câte un spațiu.
Se cere să se afișeze pe ecran, separate prin câte un spațiu, sub-numerele care apar o
singură dată în scrierea numerelor din fișier, sau mesajul nu exista dacă nu există
niciun astfel de sub-număr. Proiectați un algoritm eficient din punctul de vedere al timpului
de executare.
Exemplu: dacă fişierul bac.txt conţine numerele
391 7772 4358 23972
atunci pe ecran se afișează valorile de mai jos, nu neapărat în această ordine:
91 43 35 58 23 97 */

bool subnumar(int x, int n) {

	while (n) {
		int a = x % 10, b = n % 10;
		if (a == b) {
			x /= 10;
			n /= 10;
			if (x % 10 != n % 10) {
				return false;
			}
			else {
				return true;
			}
		}
		else {
			n /= 10;
		}
	}

}

int size(int n) {

	int ct = 0;
	while (n) {
		ct++;
		n /= 10;
	}
	return ct;
}

void subnumere(int v[], int d) {

	for (int i = 0; i < d; i++) {
		int nr = v[i];
		while (nr) {
			int c = nr%10;
			nr /= 10;
			int k = 0;
			k = c + (nr % 10) * 10;
			int j = 0;
			bool flag = true;
			while (j < d - 1) {
				if (v[j] != v[i] && subnumar(k, v[j]) == true) {
					flag = false;
				}
				j++;
			}
			if (flag == true) {
				cout << k << " ";
			}
			if (size(nr) > 2) {
				nr /= 10;
			}
		}
	}

}

void ex4Var1() {

	int v[100], d;
	citire(v, d);

	subnumere(v, d);
}
















