#include "citire_afisare.h"

/*Folosind tehnica bactracking un elev a scris un program care generează toate numerele de
câte n cifre (0<n≤9), cifrele fiind în ordine strict crescătoare. Dacăn este egal cu 5, scrieți
în ordine crescătoare toate numerele având cifra unităților 6, care vor fi generate de
program.*/

int s[100], n = 9, m = 5;

void tipar() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	if (k == m - 1) {
		if (s[k] != 6) {
			return 0;
		}
	}

	for (int i = 0; i < k; i++) {
		if (s[k] <= s[i]) {
			return 0;
		}
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

	int val;

	for (val = 1; val <= n; val++) {
		s[k] = val;
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

void ex2Var7() {

	back(0);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤100)şi cele
3*n elemente ale tabloului unidimensional v, fiecare element fiind un număr natural cu cel
mult patru cifre fiecare. Tabloul este împărţit în trei zone, cu câte n elemente: prima zonă
conţine primele n elemente din tablou, a doua zonă conţine următoarele n elemente din
tablou, restul elementelor fiind în zona a treia. Programul va interschimba primul element
par (dacă există) al zonei unu cu ultimul element impar (dacă există) al zonei trei şi apoi va
scrie pe prima linie a fişierului text BAC.TXT toate elementele tabloului, separate prin câte
un spaţiu. În cazul în care unul dintre aceste două elemente, care urmează a fi
interschimbate, nu există, programul nu va efectua nici o modificare asupra tabloului dat.
Exemplu: pentru n=3 şi v=(1 2 3 4 5 6 7 8 9), fişierul BAC.TXT va conţine:
1 9 3 4 5 6 7 8 2*/

void ex3Var7() {

	int v[100], d;

	citire(v, d);

}

/*Se consideră şirul definit de relaţia de
recurenţă alăturată:fn=n daca n<=5
fn=2*fn-1 daca n>5
a) Scrieţi definiţia completă a unui subprogram sub, care primeşte prin intermediul
singurului său parametru n un număr natural de maximum 8 cifre, şi care returnează cel
mai mare termen al şirului f care este mai mic sau cel mult egal cu n.
Exemplu: dacă n=83 atunci subprogramul va returna valoarea 80.*/

int f(int n) {

	if (n <= 5) {
		return n;
	}
	else {
		return 2 * f(n - 1);
	}

}

void ex4aVar7() {

	cout << f(83);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural s (s≤10000000)
şi determină scrierea lui s ca sumă de termeni distincţi ai şirului dat folosind apeluri utile ale
subprogramului sub. Numerele astfel determinate se vor scrie pe ecran, pe aceeaşi linie,
separate prin câte un spaţiu. i
Exemplu: dacă valoarea citită de la tastatură este 63, se va afişa:
40 20 3*/

void ex4bVar7() {



}














