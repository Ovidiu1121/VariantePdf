#include "citire_afisare.h"

/*Un elev a scris un program care, folosind metoda backtracking, generează toate numerele
de câte 5 cifre, cifrele fiind în ordine strict crescătoare. Scrieţi toate numerele generate de
program care au prima cifră 5.*/

int s[100], n = 9, m = 5;

void tipar() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] <= s[i]) {
			return 0;
		}
	}
	if (s[0] != 5) {
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

	for (int i = 1; i <= n; i++) {
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

void ex2Var10() {

	back(0);

}

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

void ex3Var10() {

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

void ex4Var10() {



}

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi p
(2≤n≤20, 1≤p≤20) şi construieşte în memorie un tablou bidimensional cu n linii şi p
coloane. Tabloul va fi construit astfel încât, parcurgând matricea linie cu linie de sus în jos şi
fiecare linie de la stânga la dreapta, să se obţină şirul primelor n*p pătrate perfecte pare,
ordonat strict crescător, ca în exemplu. Tabloul astfel construit va fi afişat pe ecran, fiecare
linie a tabloului pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=2, p=3 programul va afişa tabloul alăturat:
0 4 16
36 64 100*/

bool patratPerfect(int n) {

	if (sqrt(n) == (int)sqrt(n)) {
		return true;
	}
	return false;
}

void ex5Var10() {

	int n, m;
	
	cin >> n >> m;


}














