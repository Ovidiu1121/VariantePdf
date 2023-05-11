#include "citire_afisare.h"


/*Subprogramul numar are trei parametri:
• n și c, prin care primește câte un număr natural (n[0,109], c[0,9]);
• m, prin care furnizează numărul obținut din n, prin eliminarea din acesta a tuturor cifrelor egale cu c, sau
-1 dacă toate cifrele lui n sunt egale cu c. Cifrele nule nesemnificative sunt ignorate, ca în exemplu.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=50752 sau n=72 și c=5, după apel m=72, dacă n=500 și c=5, după apel m=0, iar
dacă n=55 și c=5, după apel m=-1. */

void eliminareCifre(int n, int c) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}
	int nou = 0;
	int flag = 0;
	for (int i = d - 1; i >= 0; i--) {
		if (v[i] != c && v[i] != 0) {
			nou = nou * 10 + v[i];
		}
		if (i == 0 && nou == 0) {
			if (v[i] == c || v[i] == 0) {
				flag = 1;
			}
		}
	}
	if (flag == 0) {
		cout << nou;
	}
	else {
		cout << -1;
	}
}

void ex1Var6() {

	eliminareCifre(55, 5);

}

/*Scrieți un program C/C++ care citește de la tastatură un număr natural, n (n∈[3,20]), și construiește
în memorie un tablou bidimensional cu n linii și n coloane, având proprietățile:
• toate elementele situate pe diagonala secundară sunt nule;
• prima linie conține un șir strict descrescător de numere consecutive, iar ultima linie conține un șir strict
crescător de numere consecutive;
• fiecare dintre celelalte linii conține, începând cu prima poziție, până la diagonala secundară inclusiv, de la
stânga la dreapta, un șir strict descrescător de numere consecutive, iar începând de la diagonala secundară,
inclusiv, până la ultima poziție, de la stânga la dreapta, un șir strict crescător de numere consecutive.
Programul afișează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
ecranului, cu elementele aflate pe aceeași linie separate prin câte un spațiu.
Exemplu: dacă n=4 se afișează pe ecran tabloul alăturat.
3 2 1 0
2 1 0 1
1 0 1 2
0 1 2 3*/

void matrice(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j == n - 1) {
				a[i][j] = 0;
			}
			else if (i + j < n - 1) {
				a[i][j] = n - i - j - 1;
			}
			else if (i + j > n - 1) {
				a[i][j] = i + j - n + 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void ex2Var6() {

	matrice(4);

}

/*Fișierul bac.in conține un șir de cel puțin patru și cel mult 105 numere întregi nenule din intervalul
[-109,109], dintre care trei sunt negative, iar restul pozitive. Numerele sunt separate prin câte un
spațiu. O secvență este formată din termeni aflați pe poziții consecutive în șir, iar lungimea secvenței
este egală cu numărul de termeni ai acesteia.
Se cere să se afișeze pe ecran lungimea unei secvențe din șirul aflat în fișier care conține o singură
valoare negativă și un număr maxim de valori pozitive. Proiectați un algoritm eficient din punctul de
vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele 15 21 -61 9 870 -23 11 5 8 -81 5 14
pe ecran se afișează 6 (corespunzător secvențelor 9 870 -23 11 5 8 sau 11 5 8 -81 5 14).*/

void secventa(int v[], int d) {
	int secventaMax = 0, secventa = 0;
	int ct;
	for (int i = 0; i < d; i++) {
		int j = i;
		 ct = 0;
		while (j < d - 1) {
			if (v[j] < 0) {
				ct++;
			}
			if (ct == 2) {
				j = d;
			}
			j++;
			secventa++;
			if (secventa > secventaMax) {
				secventaMax = secventa;
			}
		}
		i = j;
	}
	cout << secventaMax;
}

void ex3Var6() {

	int v[100], d;

	citire(v, d);
	secventa(v, d);
}










