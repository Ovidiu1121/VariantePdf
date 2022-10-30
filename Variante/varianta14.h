#include "varianta13.h"


/*Se citeşte de la tastatură un număr natural n (n≤500) şi apoi n cifre separate prin spaţii. Se
cere să se afişeze pe ecran cele n cifre citite, în ordine crescătoare, separate prin câte un
spaţiu.
Exemplu: pentru n=19 şi cifrele 3 3 0 9 2 1 2 1 3 7 1 5 2 7 1 0 3 2 3 se va
afişa pe ecran 0 0 1 1 1 1 2 2 2 2 3 3 3 3 3 5 7 7 9.
a) Descrieţi pe scurt un algoritm de rezolvare al problemei, eficient din punct de vedere al
spaţiului de memorie utilizat şi al timpului de executare, explicând în ce constă eficienţa
metodei alese.*/

void ex3Var14() {

	int v[100], d;

	citire(v, d);
	sortareCrescator(v, d);
	afisare(v, d);
	
}

/*Fişierul text BAC.TXT conţine mai multe numere naturale, cu cel mult 6 cifre fiecare, câte
un număr pe fiecare linie a fişierului.
4.
Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi le
afişează pe ecran, în aceeaşi ordine, câte cinci pe fiecare linie, separate prin câte
un spaţiu, cu excepţia ultimei linii care poate conţine mai puţin de cinci numere.
Programul va afişa apoi pe ecran, pe o linie separată, câte numere din fişier au
suma cifrelor pară.
Exemplu: dacă fişierul are conţinutul alăturat,
11
21
30
40
51
16
17
10
1
pe ecran se vor afişa numerele
de mai jos:
11 21 30 40 51
16 17 10 1
4 */

int sumaCifre(int n) {

	int s = 0;

	while (n) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

void sumaCifrePara(int v[], int d) {

	int ct = 0, s = 0, k = 0;
	
	for (int i = 0; i < d; i++) {
		cout << v[i] << " ";
		k++;
		int s = sumaCifre(v[i]);
		if (s % 2 == 0) {
			ct++;
		}
		if (k == 5) {
			cout << endl;
		}
	}
	cout << "\n" << ct;
}

void ex4Var14() {

	int v[100], d;

	citire(v, d);
	sumaCifrePara(v, d);
}





















