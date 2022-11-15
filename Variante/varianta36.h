#include "varianta35.h"


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
















