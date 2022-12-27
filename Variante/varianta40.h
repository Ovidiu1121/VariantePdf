#include "citire_afisare.h"

/*Utilizăm metoda backtracking pentru generarea tuturor modalităţilor de a scrie numărul 6 ca
sumă a cel puţin două numere naturale nenule. Termenii fiecărei sume sunt în ordine
crescătoare. Soluţiile se generează în ordinea: 1+1+1+1+1+1, 1+1+1+1+2, 1+1+1+3,
1+1+4, 1+5, 2+2+2, 2+4 şi 3+3. Se aplică exact aceeaşi metodă pentru scrierea lui 9.
Câte soluţii de forma 2+... vor fi generate?*/

void ex1Var40() {



}

/*Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a
doua linie a fişierului se află un şir format din n numere naturale, despărţite prin câte un
spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++ care
citeşte numerele din fişier şi care afişează pe ecran mesajul DA dacă elementele pare în şir
sunt în ordine crescătoare, iar cele impare sunt în ordine descrescătoare şi mesajul NU în
caz contrar. Alegeţi un algoritm eficient ca timp de executare şi spaţiu de memorie utilizat.*/

bool numereImpareDesrescator(int v[], int d) {

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 1) {
			a[b] = v[i];
			b++;
		}
	}

	for (int i = 0; i < b - 1; i++) {
		if (a[i] < a[i + 1]) {
			return false;
		}
	}
	return true;
}

bool numerePareCrescator(int v[], int d) {

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			a[b] = v[i];
			b++;
		}
	}

	for (int i = 0; i < b - 1; i++) {
		if (a[i] > a[i + 1]) {
			return false;
		}
	}
	return true;
}

bool nrPareSiImpare(int v[], int d) {

	if (numerePareCrescator(v, d) == 0 || numereImpareDesrescator(v, d) == 0) {
		return false;
	}
	return true;
}

void ex3Var40() {

	int v[100], d;

	citire(v, d);
	cout<<nrPareSiImpare(v, d);

}


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n<10000) şi
care, folosind apeluri ale subprogramului sdiv verifică dacă suma divizorilor lui n este un
număr prim. În caz afirmativ, programul va afişa pe ecran mesajul Da şi în caz contrar va
afişa mesajul NU.
Exemplu: dacă n=206, atunci programul va afişa: NU (1+2+103+206=312, iar 312 nu
este un număr prim).*/

int sumaDiv(int n) {

	int s = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}

bool sumaDivizoriPrima(int n) {

	int k = sumaDiv(n);

	if (prim(k)) {
		return true;
	}
	return false;
}

void ex4Var40() {

	cout << sumaDivizoriPrima(206);

}



















