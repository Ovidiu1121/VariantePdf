#include "citire_afisare.h"


/*Se consideră subprogramul radical, cu trei parametri:
• n, prin care primeşte un număr natural (n∈[1,109]);
• x și y, prin care furnizează două numere naturale cu proprietatea că √n poate fi scris
sub forma x ∙ y, unde x are o valoare maximă.
Scrieţi definiţia completă a subprogramului.
Exemplu: pentru numărul n=15000, în urma apelului, x=50 şi y=6, iar pentru numărul
n=9, în urma apelului, x=3 şi y=1*/

void ex3Var2() {

   

}

/*Se consideră un șir ai cărui termeni sunt numere naturale nenule, de o singură cifră.
Numim număr asociat al acestui șir un număr natural format cu termenii șirului, în ordinea
în care aceștia apar în șir.
Exemplu: numărul asociat șirului 1, 2, 5, 3, 2 este 12532.
Fişierul text bac.txt conţine numere naturale din intervalul [1,9]: pe prima linie două
numere, x și y, iar pe a doua linie un șir de cel puţin trei şi cel mult 105
 termeni. Numerele
aflate pe aceeași linie a fișierului sunt separate prin câte un spațiu.
Se cere inserarea valorilor x și y în șirul aflat pe a doua linie fișierului, astfel încât numărul
asociat șirului obținut să fie minim. Termenii șirului obținut se afișează pe ecran, separați
prin câte un spațiu.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de
executare.
Exemplu: dacă fişierul bac.txt conţine numerele
9 6
1 7 5
atunci, pentru că numerele asociate șirurilor care se pot obține sunt 96175, 69175,
61975, 61795, 61759, 91675, 19675, 16975, 16795, 16759, 91765, 19765, 17965,
17695, 17659, 91756, 19756, 17956, 17596, 17569, pe ecran se afişează șirul:
1 6 7 5 9 */


void inserare(int v[], int& d, int p, int nou) {
	
	for (int i = d - 1; i >= p; i--) {
		v[i + 1] = v[i];
	}
	v[p] = nou;
	d++;

}

void numarAsociat(int v[], int d, int a[], int b) {

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < b; j++) {
			if (v[i] >= a[j] && v[i] <= a[i + 1]) {
				inserare(a, b, i + 1, v[i]);
				i++;
			}
		}
	}

	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}

}

void ex4Var2() {

	int v[2] = { 9,6 };
	int a[3] = { 1,7,5 };

	numarAsociat(v, 2, a, 3);

}














