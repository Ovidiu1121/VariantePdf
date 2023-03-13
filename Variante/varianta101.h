#include "citire_afisare.h"


/*Subprogramul putere are trei parametri:
• n, prin care primește un număr natural din intervalul [1,109];
• d și p, prin care furnizează divizorul prim, d, care apare la cea mai mare putere, p, în descompunerea în
factori primi a lui n; dacă există mai mulți astfel de divizori se afișează cel mai mare dintre ei.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=10780, atunci, în urma apelului, d=7 şi p=2 (10780=2257211)*/

void factorPrim(int n) {

	int d = 2, p = 0;

	while (n > 1) {
		if (n % d == 0) {
			int k = 0;
			while (n % d == 0) {
				k++;
				n /= d;
			}
			if (k > p) {
				p = k;
				d = d;
			}
		}
		d++;
		if (d * d > n) {
			if (n > 1) {
				if (p == 0) {
					p = 1;
					d = n;
				}
			}
			break;
		}
	}
	cout << d <<", "<< p;

}

void ex1Var1() {

	factorPrim(10780);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul [2,20], n și
k, şi construieşte în memorie un tablou bidimensional cu n linii şi n∙k coloane, numerotate începând cu
1, astfel încât fiecare linie i (i∈[1,n]) memorează un şir crescător de termeni cu proprietatea că
primul termen este i, fiecare valoare apare în şir de exact k ori și oricare doi termeni alăturați au valori
egale sau consecutive.
Programul afişează pe ecran tabloul construit, fiecare linie a
tabloului pe câte o linie a ecranului, cu valorile aflate pe aceeaşi
linie separate prin câte un spaţiu.
Exemplu: dacă n=4 și k=3, se afişează pe ecran tabloul alăturat.
(10p.)
1 1 1 2 2 2 3 3 3 4 4 4
2 2 2 3 3 3 4 4 4 5 5 5
3 3 3 4 4 4 5 5 5 6 6 6
4 4 4 5 5 5 6 6 6 7 7 7
5 5 5 6 6 6 7 7 7 8 8 8*/

void matrice(int n, int k) {

	int a[100][100];
	int ct = 0;

	for (int i = 1; i<= n; i++) {
		int f = i;
		for (int j = 1; j <= n*k; j++) {
			if (ct < k) {
				a[i][j] = f;
				ct++;
			}
			else {
				f++;
				ct = 0;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n * k; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex2Var1() {

	matrice(4,3);

}

/*Se consideră șirul 1, 1, 2, 5, 13, 34, 89, 233, 610 ....
definit astfel: f1=f2=1, fn=3∙fn-1-fn-2 (unde n este un număr natural n≥3):
Se citesc de la tastatură două numere naturale x și y (x≤y109), valorile a doi termeni aflați pe poziții
consecutive în şirul dat, şi se cere să se scrie în fişierul text bac.txt, în ordine descrescătoare,
separați prin câte un spațiu, toţi termenii şirului care sunt mai mici sau egali cu y. Proiectați un algoritm
eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă se citesc numerele 89 233
fişierul bac.txt conţine numerele 233 89 34 13 5 2 1 1
a. Scrieți programul C/C++ corespunzător algoritmului proiectat*/

void sir(int x, int y) {

	int f1 = 1, f2 = 1, k=0;
	cout << f1 << " " << f2 << " ";

	while (k < y) {
		k = 3 * f2 - f1;
		cout << k << " ";
		f1 = f2;
		f2 = k;
	}

}

void ex3Var1() {

	sir(89, 233);

}

