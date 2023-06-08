#include "citire_afisare.h"


/*Subprogramul inserare are doi parametri:
 n, prin care primeşte un număr natural (2≤n≤20);
 a, prin care primeşte un tablou unidimensional care memorează un şir de n numere
naturale, fiecare cu cel mult 4 cifre. Cel puŃin un element al tabloului este număr par.
Subprogramul modifică tabloul astfel încât după fiecare termen par al şirului inserează
valoarea 2011 şi furnizează, tot prin parametrii n şi a, valorile actualizate ale datelor
primite.
ScrieŃi în limbajul C/C++ definiŃia completă a subprogramului.
Exemplu: dacă n=7 şi a=(1,4,5,3,82,6,2) atunci, după apel,
n=11 şi a=(1,4,2011,5,3,82,2011,6,2011,2,2011)*/

void inserare(int v[], int& d, int poz, int x) {
	
	for (int i = d - 1; i >= poz; i--) {
		v[i + 1] = v[i];
	}
	v[poz] = x;
	d++;

}

void inserareDupaPare(int v[], int &d) {
	int ct = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			ct++;
			inserare(v, d, i+1, 2011);
			i++;
		}
	}
	cout << d<<endl;
}

void ex3Var1() {

	int v[100], d;
	citire(v, d);
	inserareDupaPare(v, d);
	afisare(v, d);

}

/*Se citesc de la tastatură două numere naturale s1 şi s2 (0<s1≤18, 0≤s2≤18) şi se cere
scrierea în fişierul BAC.TXT, fiecare pe câte o linie, în ordine strict crescătoare, a tuturor
numerelor naturale cu exact 5 cifre, pentru care suma primelor două cifre este egală cu
s1, iar suma ultimelor două cifre este egală cu s2. Pentru determinarea numerelor
indicate se utilizează un algoritm eficient din punct de vedere al timpului de executare.
Exemplu: dacă s1=8, iar s2=7, atunci 35725 este unul dintre numerele care respectă
proprietatea cerută (3+5=8 şi 2+5=7). */

bool sumaCifre(int a, int b, int n) {

	int aux = n;
	int ct = 0;

	while (aux) {
		ct++;
		aux /= 10;
	}
	int k = 0, s1 = 0, s2 = 0;
	while(n) {
		if (k < 2) {
			s1 += n % 10;
		}
		if (ct - k <= 2 && ct - k >0) {
			s2 += n % 10;
		}
		k++;
		n /= 10;
	}
	if (s1 != b || s2 != a) {
		return false;
	}
	return true;
}

void nr(int s1,int s2) {

	for (int i = 10000; i <= 99999; i++) {
		if (sumaCifre(s1, s2, i) == true) {
			cout << i << " ";
		}
	}

}

void ex4Var1() {

	nr(8, 7);

}













