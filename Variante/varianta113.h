#include "citire_afisare.h"


/*Subprogramul putere are trei parametri:
• n, prin care primește un număr natural din intervalul [2,109];
• d și p, prin care furnizează divizorul prim, d, care apare la cea mai mică putere, p, în descompunerea în
factori primi a lui n; dacă există mai mulți astfel de divizori se afișează cel mai mic dintre ei.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=10780, atunci, în urma apelului, d=5 şi p=1 (10780=2257211).*/

void ex1Var13() {



}

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul
[2,20], n și k, şi construieşte în memorie un tablou bidimensional cu n∙k linii şi n
coloane, numerotate începând cu 1, astfel încât fiecare coloană i (i∈[1,n]) memorează
un şir crescător de termeni cu proprietatea că primul termen este i, fiecare valoare apare
în şir de exact k ori și oricare doi termeni alăturați au valori egale sau consecutive.
Programul afişează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
ecranului, cu valorile aflate pe aceeaşi linie separate prin câte un spaţiu.
Exemplu: dacă n=4 și k=3, se afişează pe ecran tabloul alăturat.
1 2 3 4
1 2 3 4
1 2 3 4
2 3 4 5
2 3 4 5
2 3 4 5
3 4 5 6
3 4 5 6
3 4 5 6
4 5 6 7
4 5 6 7
4 5 6 7
*/

void matrice(int n, int k) {

	int a[100][100];

	for (int j = 1; j <= n * k; j++) {
		int ct = 1;
		int aux = j;
		for (int i = 1; i <= n; i++) {
			if (ct % 3 == 0) {
				a[i][j] = aux;
				aux++;
				ct++;
			}
			else {
				a[i][j] = aux;
				ct++;
			}
		}
	}

	for (int j = 1; j <= n * k; j++) {
		for (int i = 1; i <= n; i++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex2Var13() {

	matrice(4, 3);

}

/*Șirul de mai jos este definit astfel: f1=1, f2=2, fn=3∙fn-1-2∙fn-2 (unde n este un număr natural n≥3).
1, 2, 4, 8, 16, 32....
Se citește de la tastatură un număr natural x (x≤109), valoare a unui termen al șirului dat, şi se cere să
se scrie în fişierul text bac.txt, în ordine descrescătoare, separați prin câte un spațiu, toţi termenii
şirului care sunt mai mici sau egali cu x. Proiectați un algoritm eficient din punctul de vedere al
memoriei utilizate şi al timpului de executare.
Exemplu: dacă se citește numărul 16
fişierul bac.txt conţine numerele 16 8 4 2 1*/

int f(int n) {

	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else {
		return 3 * f(n - 1) - 2 * f(n - 2);
	}

}

void ex3Var13() {

	int i = 1;
	int k = f(i);
	int v[100], d = 0;

	while (k <= 16) {
		v[d] = k;
		d++;
		i++;
		k = f(i);
	}

	for (int i = d - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}

}













