#include "citire_afisare.h"


/*Scrieţi un program C/C++ care citeşte de la tastură un număr natural n cu cel mult 8 cifre
(n≥10) şi care creează fişierul text NR.TXT ce conţine numărul n şi toate prefixele nenule
ale acestuia, pe o singură linie, separate prin câte un spaţiu, în ordine descrescătoare a
valorii lor.
Exemplu: pentru n=10305 fişierul NR.TXT va conţine numerele:
10305 1030 103 10 1 */

void prefixe(int n) {

	while (n) {
		cout << n << " ";
		n /= 10;
	}

}

void ex3Var5() {

	prefixe(10305);

}

/*Subprogramul f, cu un parametru:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 8 cifre (a>1)
- returnează cel mai mic divizor prim al valorii parametrului a.
Exemplu: pentru valoarea 45 a parametrului a, subprogramul va returna valoarea 3
deoarece a=32
*5, iar cel mai mic divizor prim al său este 3.
a) Scrieţi definiţia completă a subprogramului f. (4p.)
b) Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi apoi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din
şir fiind strict mai mari decât 1. Folosind apeluri utile ale subprogramului f, programul va
determina şi va afişa pe ecran toate numerele prime din şirul citit. Numerele determinate se
vor afişa pe o singură linie a ecranului, separate prin câte un spaţiu, în ordine crescătoare a
valorii lor. Dacă nu există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru n=7, şirul: 1125, 2, 314, 101, 37, 225, 12 pe ecran se va afişa:
2 37 101*/

void celMaiMicDiv(int n) {

	for (int i = 2; i < n; i++) {
		if (prim(i) && n % i == 0) {
			cout << i;
			break;
		}
	}

}

void nrPrime(int v[], int d) {
	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (prim(v[i])) {
			a[b] = v[i];
			b++;
		}
	}
	sortareCrescator(a,b);
	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}
}

void ex4Var5() {

	celMaiMicDiv(45);
	cout << endl;
	int v[100], d;
	citire(v, d);
	nrPrime(v, d);

}

















