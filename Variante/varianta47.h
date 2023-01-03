#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale m şi n
(0<m≤10, 0<n≤10) şi elementele unui tablou bidimensional cu m linii şi n coloane care
reţine numere naturale mai mici decât 100; programul va construi şi va afişa pe ecran un
nou tablou bidimensional cu n linii şi m coloane, obţinut din primul prin rotirea acestuia în
sens trigonometric cu 90o, ca în exemplu. (10p.)
Exemplu: pentru m=4,
n=5 şi tabloul:
21 22 23 24 25
26 27 28 29 30
31 32 33 34 35
36 37 38 39 40
se va afişa: 
25 30 35 40
24 29 34 39
23 28 33 38
22 27 32 37
21 26 31 36*/

void ex5Var47() {



}

//s3

/*Fişierul text bac.txt conţine pe prima linie un număr natural n (n<100), iar pe a doua
linie, separate prin câte un spaţiu, n numere naturale de cel mult 8 cifre fiecare.
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural k (k<50) precum
şi numerele din fişierul bac.txt şi afişează pe ecran, cu câte un spaţiu între ele, toate
numerele de pe a doua linie a fişierului care sunt puteri ale lui k. Un număr natural x este
putere a lui k dacă există un număr natural y astfel încât x=k
y. Dacă nu există un
asemenea număr pe a doua linie a fişierului, se afişează pe ecran mesajul NU.
Exemplu: dacă se citeşte de la tastatură k=2, iar
fişierul are conţinutul alăturat
8
32 56 317 809 256 2 1 60, atunci pe ecran se
afişează numerele:
32 256 2 1 */

bool putere(int a, int k) {
	int ct = 0;
	int aux = a;
	while (a!=1) {
		ct++;
		a = a / k;
	}
	if (pow(k, ct) == aux) {
		return true;
	}
	return false;
}

void puteriVector(int v[], int d, int k) {

	for (int i = 0; i < d; i++) {
		if (putere(v[i], k) == 1) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var47() {

	int v[100], d;

	citire(v, d);
	puteriVector(v, d, 2);

}

/*Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<25), apoi
un şir de n numere naturale nenule cu cel mult 9 cifre fiecare şi care afişează pe ecran,
separate prin câte un spaţiu, numerele din şir care au suma cifrelor maximă, folosind
apeluri utile ale subprogramului cif.
Exemplu: dacă pentru n=8 se citeşte şirul de numere 274 56018 354 8219 293 287
932 634 atunci, pe ecran, se afişează numerele 56018 8219.*/

int sumaCifre(int n) {

	int s = 0;

	while (n) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

void sumaCifreMaxVec(int v[], int d) {

	int maxim = 0;

	for (int i = 0; i < d; i++) {
		int s = sumaCifre(v[i]);
		if (s > maxim) {
			maxim = s;
		}
	}

	for (int i = 0; i < d; i++) {
		if (sumaCifre(v[i]) == maxim) {
			cout << v[i] << " ";
		}
	}
}

void ex4Var47() {

	int v[100], d;

	citire(v, d);
	sumaCifreMaxVec(v, d);
}














