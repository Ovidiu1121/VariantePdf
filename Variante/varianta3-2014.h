#include "citire_afisare.h"

/*Un interval cu proprietatea că există un singur număr natural, n (2≤n), pentru care valoarea
produsului 1·2·3·…·n aparține acestui interval este numit interval factorial al lui n.
Exemplu: [5,8] și [3,23] sunt intervale factoriale ale lui 3, dar [1,15] și [7,10] nu
sunt intervale factoriale ale niciunui număr.
Se consideră subprogramul interval, cu trei parametri:
• n, prin care primește un număr natural din intervalul [2,10].
• a și b, prin care furnizează câte un număr natural, astfel încât expresia b-a să aibă
valoare maximă, iar [a,b] să fie interval factorial al lui n.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=3, după apel a=3 și b=23*/


void ex3Var3() {


}


/*Un număr natural x, format din exact două cifre, este numit sub-număr al unui număr
natural y dacă cifrele lui x apar, în aceeași ordine, pe ranguri consecutive, în numărul y.
Exemplu: 21 este sub-număr al lui 12145, al lui 213, al lui 21, dar nu și al lui 123 sau al
lui 231.
Fișierul bac.txt conține cel mult 1000000 de numere naturale din intervalul [10, 109
],
separate prin câte un spațiu.
Se cere să se afișeze pe ecran, separate prin câte un spațiu, sub-numerele care apar de
cele mai multe ori în scrierea numerelor din fișier. Pentru determinarea sub-numerelor
cerute se utilizează un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fişierul bac.txt conţine numerele
393 17775787 72194942 12121774
atunci pe ecran se afișează valorile de mai jos, nu neapărat în această ordine:
77 21
*/

void subnumar(int v[], int d) {
	int aux, f[100]{}, ct = 0;
	for (int i = 0; i < d; i++) {
		while (v[i]) {
			int a = v[i] % 10;
			v[i] /= 10;
			int b = v[i] % 10;
			int j = 0;
			while (j < d - 1) {
				if (v[j]!= v[i]) {
					while (v[j]) {
						int c = v[j] % 10;
						v[j] /= 10;
						int d = v[j] % 10;
						if (a == c && b == d) {
							aux = 10 * b + a;
							f[aux]++;
							ct++;
							cout << aux << " ";
						}
					}
				}
				j++;
			}
		}
	}

	/*for (int i = 0; i < ct; i++) {
		cout << f[i] << " ";
	}*/
}

void ex4Var3() {

	int v[100], d;
	citire(v, d);
	subnumar(v, d);

}














