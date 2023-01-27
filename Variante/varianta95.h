#include "citire_afisare.h"

/*Un program citeşte o valoare naturală nenulă pentru n şi apoi generează şi afişează, în
ordine crescătoare lexicografic, toate combinaţiile formate din n cifre care aparţin mulţimii
{0,1}. Astfel, pentru n=2, combinaţiile sunt afişate în următoarea ordine: 00, 01, 10, 11.
Dacă se rulează acest program şi se citeşte pentru n valoarea 9, imediat după combinaţia
011011011 va fi afişată combinaţia: */

int s[100], n = 2;
int f[2] = { 0,1 };
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
		s[k] = f[i];
		if (solutie(k)) {
			tipar();
		}
		else {
			back(k + 1);
		}
		
	}

}

void ex1Var95() {

	back(0);

}

/*Funcţia f primeşte prin intermediul parametrului n un număr natural nenul (2≤n≤200), iar
prin intermediul parametrului a un tablou unidimensional care conţine n valori întregi nenule
(fiecare dintre aceste valori întregi având cel mult patru cifre).
Funcţia returnează valoarea -1 dacă numărul de valori negative din tabloul a este strict mai
mare decât numărul de valori pozitive din tablou, valoarea 0 dacă numărul de valori
negative din a este egal cu numărul de valori pozitive din tablou şi valoarea 1 dacă numărul
de valori pozitive din tabloul a este strict mai mare decât numărul de valori negative din a.
Scrieţi definiţia completă a funcţiei f. */

int contorSemn(int v[], int d) {

	int pozitive = 0, negative = 0;

	for (int i = 0; i < d; i++) {
		if (v[i] < 0)negative++;
		else pozitive++;
	}

	if (pozitive == negative) {
		return 0;
	}
	else if (pozitive > negative) {
		return 1;
	}
	else {
		return - 1;
	}

}

void ex3Var95() {

	int v[100], d;

	citire(v, d);
	cout<<contorSemn(v, d);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul, S, având
maximum 9 cifre, şi printr-o metodă eficientă din punct de vedere al timpului de executare,
determină şi scrie în fişierul rez.dat trei valori naturale a căror sumă este egală cu S, şi al
căror produs este maxim. Cele trei valori vor fi scrise în ordine crescătoare pe prima linie a
fişierului rez.dat, separate prin câte un spaţiu.
Exemplu: dacă se citeşte valoarea 5, fişierul rez.dat va avea o linie cu conţinutul 1 2 2.*/

void functie(int n) {
	int a, b, c;
	if (n % 3 == 0) {
		a = n / 3;
		b = a;
		c = a;
	}
	else if (n % 3 == 1) {
		a = n / 3;
		b = a;
		c = a + 1;
	}
	else if (n % 3 == 2) {
		a = n / 3;
		b = a + 1;
		c = b;
	}

	cout << a << " " << b << " " << c;

}

void ex4Var95() {

	functie(5);

}















