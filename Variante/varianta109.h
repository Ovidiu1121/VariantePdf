#include "citire_afisare.h"


/*Subprogramul suma are doi parametri:
• n, prin care primește un număr natural din intervalul [0,109];
• s, prin care furnizează suma cifrelor impare distincte din scrierea acestuia.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=4713835, după apel s=16 (16=7+1+3+5), iar dacă n=48, după apel s=0*/

void suma(int n)
{

	int v[10]{}, s = 0, k = 0;

	while (n > 0) 
	{
		int ok = 0;
		for (int i = 1; i <= 4; i++) {
			if (n % 10 == v[i]) {
				ok = 1;
			}
		}
		if (ok == 0 && n % 2 == 1) {
			k++;
			v[k] = n % 10;
			s = s + n % 10;
		}
		n /= 10;

	}
	cout << s;
}

void ex1Var9() {
	
   suma(4713835);

}

/*Numim k-secvență într-un șir de numere naturale, o succesiune de termeni aflați pe poziții consecutive
în șir, cu proprietatea că sunt divizibili cu numărul natural nenul k. Lungimea secvenței este egală cu
numărul de termeni ai săi.
Fișierul bac.txt conține numere naturale din intervalul [0,109]: pe prima linie un număr nenul k, iar
pe a doua linie un șir de cel mult 106 numere, separate prin câte un spațiu. Cel puțin un termen din șir
este divizibil cu k. Se cere să se afișeze pe ecran două valori, separate printr-un spațiu, reprezentând
lungimea maximă a unei k-secvențe din șirul aflat în fișier, respectiv numărul de astfel de secvențe.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul are conținutul alăturat,
se afișează 4 2
5
2 10 5 20 21 0 10 60 15 3 9 20 20 5 45
*/

void secventa(int v[], int d, int k) {

	int ct, secventaMax = 0, nrSecventeMax = 0;

	for (int i = 0; i < d; i++) {
		int j = i;
		ct = 0;
		while (v[j] % k == 0 && j < d - 1) {
			ct++;
			j++;
			if (ct>secventaMax) {
				secventaMax = ct;
			}
		}
		i = j;
	}
	cout << secventaMax;
}

void ex3Var9() {

	int v[100], d;

	citire(v, d);
	secventa(v, d, 5);

}




















