#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural
n (2<n<=10) şi construieşte în memorie o matrice A cu n linii şi n
coloane în care toate elementele de pe prima linie, prima şi ultima
coloană au valoarea 1 şi oricare alt element Aij din matrice este egal cu
suma a 3 elemente situate pe linia i-1: primul aflat pe coloana j-1, al
doilea pe coloana j, iar al treilea pe coloana j+1, ca în exemplu.
Matricea va fi afişată pe ecran, linie cu linie, numerele de pe aceeaşi
linie fiind separate prin câte un spaţiu.
Exemplu: pentru n=5 , se afişează matricea alăturată.
1  1  1  1 1
1  3  3  3 1
1  7  9  7 1
1 17 23 17 1
1 41 57 41 1 */

void matrice(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i == 0 || j == 0 || j == n - 1){
				a[i][j] = 1;
			}
			else{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
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

void ex5Var27() {

	matrice(5);

}


//s3

/*Pentru generarea în ordine crescătoare a numerelor cu n cifre formate cu elementele
mulţimii {0,2,8} se utilizează un algoritm backtracking care, pentru n=2, generează, în
ordine, numerele 20,22,28,80,82,88.
Dacă n=4 şi se utilizează acelaşi algoritm, precizaţi câte numere generate sunt divizibile
cu 100?*/

int s[100], n = 3, m = 4;

int v[3] = { 0,2,8 };
int ct = 0;

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

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
		s[k] = v[i];
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

void ex1Var27() {

	back(0);

}

/*Scrieţi definiţa completă a subprogramului nreal cu doi parametri x şi y, numere naturale
din intervalul [1;1000] ce returnează un număr real cu proprietatea că partea sa întreagă
este egală cu x, iar numărul format din zecimalele sale, în aceeaşi ordine, este egal cu y.
Exemplu: pentru x=12 şi y=543, subprogramul returnează valoarea 12.543.*/

void ex2Var27() {



}

/*Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n (2≤n≤100) şi pe
următoarea linie n numere reale pozitive, în ordine strict crescătoare, separate prin câte un
spaţiu.
a) Scrieţi un program C/C++ care, utilizând un algoritm eficient din punct de vedere al
memoriei utilizate, determină şi afişează pe ecran cel mai mare număr natural x cu
proprietatea că în orice interval deschis având drept capete oricare două dintre cele n numere
aflate pe linia a doua în fişierul NUMERE.IN se găsesc cel puţin x numere întregi.
Exemplu: dacă fişierul NUMERE.IN are conţinutul:
6
3.5 5.1 9.2 16 20.33 100
atunci se afişează 2
Explicaţie: în oricare dintre intervalele (3.5,5.1), (3.5,9.2), (3.5,16), (3.5,20.33),
(3.5,100), (5.1,9.2), (5.1,16), (5.1,20.33), (5.1,100), (9.2,16), (9.2,20.33),
(9.2,100), (16,20.33), (16,100), (20,33,100) există cel puţin două numere întregi.*/


void ex4Var27() {



}

















