#include "varianta9.h"


/*Scrieţi definiţia completă a subprogramului sub cu trei parametri: n (număr natural,
5<n≤30000), a şi b; subprogramul furnizează prin intermediul parametrilor a şi b cele mai
mari două numere prime distincte mai mici decât n.
Exemplu: dacă n= 28 la apelul subprogramului se va furniza prin parametrul a valoarea
23 şi prin parametrul b valoarea 19.*/

void numerePrime(int n) {
	int ct = 0;
	for (int i = n; i >= 2; i--) {
		if (prim(i) == 1) {
			cout << i << " ";
			ct++;
		}
		if (ct == 2) {
			return;
		}
	}

}

void solutie27() {

	numerePrime(20);

}


/*Evidenţa produselor vândute de o societate comercială este păstrată în fişierul
PRODUSE.TXT. Pentru fiecare vânzare se cunosc: tipul produsului (un număr natural de cel
mult 4 cifre), cantitatea vândută exprimată in kilograme (un număr natural mai mic sau egal
cu 100) şi preţul unui kilogram (un număr natural mai mic sau egal cu 100).
Fişierul PRODUSE.TXT are cel mult 200000 de linii şi fiecare linie conţine trei numere
naturale, separate prin câte un spaţiu, ce reprezintă, în această ordine tipul, cantitatea şi
preţul de vânzare al unui produs la momentul vânzării respective.
a) Să se scrie un program C/C++ care, utilizând un algoritm eficient din punct de vedere al
timpului de executare, determină pentru fiecare tip de produs vândut suma totală obţinută
în urma vânzărilor. Programul va afişa pe câte o linie a ecranului tipul produsului şi suma
totală obţinută, separate prin câte un spaţiu, ca în exemplu.
Exemplu: dacă fişierul PRODUSE.TXT are conţinutul alăturat
3 1 5
1 20 5
2 10 3
1 10 5,
programul va afişa perechile următoare, nu neapărat în această ordine:
1 150
2 30
3 5 
*/

void Xsolutie28() {



}


















