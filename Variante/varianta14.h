#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul, cu maximum
8 cifre, construieşte în memorie şi afişează apoi pe ecran o matrice pătratică, având
numărul de linii şi de coloane egal cu numărul de cifre ale numărului dat, completată cu
cifrele numărului citit.
Astfel, elementele de pe prima coloană a matricei vor fi toate egale cu
cifra unităţilor numărului dat, elementele de pe a doua coloană a
matricei vor fi toate egale cu cifra zecilor numărului dat, şi aşa mai
departe, ca în exemplu.
Exemplu: dacă se citeşte numărul 1359, matricea construită va fi cea
alăturată.*/

void matrice(int n) {

	int v[100], d = 0;
	int ct = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	int a[100][100];

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			a[i][j] = v[j];
		}
	}

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var14() {

	matrice(1359);

}

/*Se citeşte de la tastatură un număr natural n (n≤500) şi apoi n cifre separate prin spaţii. Se
cere să se afişeze pe ecran cele n cifre citite, în ordine crescătoare, separate prin câte un
spaţiu.
Exemplu: pentru n=19 şi cifrele 3 3 0 9 2 1 2 1 3 7 1 5 2 7 1 0 3 2 3 se va
afişa pe ecran 0 0 1 1 1 1 2 2 2 2 3 3 3 3 3 5 7 7 9.
a) Descrieţi pe scurt un algoritm de rezolvare al problemei, eficient din punct de vedere al
spaţiului de memorie utilizat şi al timpului de executare, explicând în ce constă eficienţa
metodei alese.*/

void sortareCrescator(int v[], int d) {

	for (int i = 0; i < d - 1; i++) {
		for (int j = i + 1; j < d; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

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





















