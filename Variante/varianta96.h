#include "citire_afisare.h"


/*Un program citeşte o valoare naturală nenulă pentru n şi apoi generează şi afişează, în
ordine descrescătoare lexicografic, toate combinaţiile de n cifre care aparţin mulţimii
{0,1}. Astfel, pentru n=2, combinaţiile sunt afişate în următoarea ordine: 11, 10, 01, 00.
Dacă se rulează acest program şi se citeşte pentru n valoarea 8, imediat după combinaţia
10101000 va fi afişată combinaţia:*/

int s[100], n = 2;
int v[2] = { 1,0 };

void tipar() {
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << s[i];
	}

}

int solutie(int k) {

	if (k == (n - 1)) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k) {

	for (int i = 0; i < n; i++) {
		s[k] = v[i];
		if (solutie(k)) {
			tipar();
		}
		else {
			back(k + 1);
		}

	}

}

void ex1Var96() {

	back(0);

}

/*Funcţia verif primeşte prin intermediul a trei parametri, notaţi a, b şi c, trei valori naturale
nenule, fiecare de maximum patru cifre. Funcţia returnează valoarea 1 dacă cele trei valori
pot constitui laturile unui triunghi şi valoarea 0 în caz contrar.
a) Scrieţi definiţia completă a funcţiei verif. (5p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură şase valori naturale nenule, fiecare
de maximum patru cifre, apoi verifică, utilizând apeluri utile ale funcţiei verif, dacă primele
trei numere citite pot constitui laturile unui triunghi şi dacă ultimele trei numere citite pot
constitui laturile unui triunghi; în caz afirmativ, programul afişează pe ecran mesajul
congruente dacă cele două triunghiuri sunt congruente sau mesajul necongruente dacă
cele două triunghiuri nu sunt congruente; dacă cel puţin unul dintre cele două triplete de
valori nu pot constitui laturile unui triunghi, programul va afişa pe ecran mesajul nu*/

bool verif(int a, int b, int c) {

	if (a + b > c && a + c > b && b + c > a) {
		return 1;
	}
	return 0;
}

void ex3Var96() {

	cout << verif(2, 2, 3);

}

/*Fişierul BAC.DAT conţine pe prima linie, separate printr-un spaţiu, două valori naturale n şi m
(2≤n≤1000, 2≤m≤1000), pe a doua linie n valori întregi şi pe a treia linie m valori întregi.
Valorile de pe a doua şi de pe a treia linie apar în fişier în ordine strict crescătoare, sunt
separate prin câte un spaţiu şi au cel mult 4 cifre fiecare.
Se cere afişarea pe ecran a două valori, dintre cele aflate în poziţii consecutive pe a treia
linie a fişierului, care determină intervalul închis în care se află un număr maxim de valori de
pe a doua linie a fişierului. Se va utiliza o metodă eficientă din punct de vedere al timpului de
executare şi al spaţiului de memorie utilizat. Se garantează că cel puţin un număr aflat pe a
doua linie a fişierului aparţine unuia dintre intervalele determinate de numerele de pe a treia
linie a fişierului.
Exemplu: dacă fişierul BAC.DAT are conţinutul
alăturat, programul va afişa: 1 9
10 4
-1 1 3 4 5 6 10 15 16 117
0 1 9 20
Explicaţie: cele patru numere de pe a treia linie a fişierului determină trei intervale:
[0,1], [1,9], [9,20]; în intervalul [1,9] se află 5 valori de pe a doua linie a fişierului,
acesta fiind numărul maxim de valori aflate în unul dintre cele trei intervale.
*/

void interval(int v[], int d, int a[], int b) {
	int ct, maxim = 0;
	int x, y;
	for (int i = 0; i < b-1; i++) {
		ct = 0;
		for (int j = 0; j < d; j++) {
			if (v[j] >= a[i] && v[j] <= a[i + 1]) {
				ct++;
			}
		}
		if (ct > maxim) {
			maxim = ct;
			x = a[i];
			y = a[i + 1];
		}
	}
	cout << x << " " << y;
}

void ex4Var96() {

	int v[10] = { -1,1,3,4,5,6,10,15,16,117 };
	int a[4] = { 0,1,9,20 };

	interval(v, 10, a, 4);

}














