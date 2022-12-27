#include "citire_afisare.h"

//s2

/*Se consideră o matrice cu n linii şi m coloane (1≤n≤30, 1≤m≤30),
ce memorează numere întregi de cel mult 4 cifre fiecare. Scrieţi un
program C/C++ care citeşte de la tastatură valorile n, m şi
elementele matricei şi care afişează pe ecran, separate prin câte
un spaţiu, valorile minime de pe fiecare coloană, în ordine de la
ultima la prima coloană.
Exemplu: pentru n=4, m=4 şi matricea alăturată se vor afişa pe
ecran valorile 3 7 2 3.*/

void matrice(int a[100][100], int n, int m) {

	for (int j = m - 1; j >= 0; j--) {
		int min = a[0][j];
		for (int i = 1; i < n; i++) {
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}
		cout << min << " ";
	}
}

void ex5Var36() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	matrice(a, n, m);

}

//s3

/*Utilizăm metoda backtracking pentru generarea tuturor modalităţilor de a scrie numărul 9
ca sumă a cel puţin două numere naturale nenule distincte. Termenii fiecărei sume sunt în
ordine strict crescătoare. Soluţiile se generează în ordinea: 1+2+6, 1+3+5, 1+8, 2+3+4,
2+7, 3+6 şi 4+5. Se aplică exact aceeaşi metodă pentru scrierea lui 12. Scrieţi, în
ordinea generării, toate soluţiile de forma 2+...*/

int s[100], n = 9, m = 3;

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] >= s[i + 1]) {
			return 0;
		}
	}
	
	if (s[0] == 0) {
		return 0;
	}

	return 1;
}

int solutie(int k) {

	if (k == m - 1) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k) {

	for (int i = 0; i < n; i++) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex2Var36() {

	back(0);

}

/*Subprogramul cifra primeşte prin intermediul parametrului a un număr natural cu cel mult
4 cifre şi returnează ultima cifră pară a sa. Dacă numărul nu conţine cifre pare,
subprogramul returnează valoarea -1. De exemplu, dacă a=8345, subprogramul va
returna 4.*/

int ultimaCifraPara(int n) {
	int v[100], d = 0;

	while (n) {
		if ((n % 10) % 2 == 0) {
			v[d] = n % 10;
			d++;
		}
		n /= 10;
	}

	for (int i = 0; i < d;i++) {
		return v[i];
	}
	return 0;
}

void ex3aVar36() {

	cout << ultimaCifraPara(89523);

}

/*Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤15000), iar pe
a doua linie a fişierului se află un şir de n numere naturale, despărţite prin câte un spaţiu,
fiecare număr fiind format din cel mult 4 cifre.
Scrieţi un program C/C++ care citeşte numerele din fişier şi afişează pe ecran, folosind
apeluri utile ale subprogramului cifra, cel mai mare număr care se poate forma cu
ultimele cifre pare ale fiecărui element, dacă acestea există. Alegeţi o metodă de rezolvare
eficientă ca timp de executare. Dacă toate numerele de pe a doua linie a fişierului au
numai cifre impare, programul va afişa mesajul NU EXISTA.
Exemplu: dacă fişierul bac.in are conţinutul
alăturat, pe ecran se va afişa: 64220 
7
369 113 2 0 33 1354 42*/

void numarNouDinCifrePare(int v[], int d) {

	int nou = 0;

	for (int i = 0; i < d; i++) {
		
		int k = ultimaCifraPara(v[i]);
		if (k != 0) {
			nou = nou * 10 + k;
		}

	}
	cout << nou;
}

void ex3bVar36() {

	int v[100], d;

	citire(v, d);
	numarNouDinCifrePare(v, d);
}
















