#include "citire_afisare.h"


/*Numerele naturale x și y sunt numite în armonie dacă suma lor aparține intervalului deschis definit de
suma divizorilor lui x, respectiv suma divizorilor lui y.
Subprogramul armonie are doi parametri, x şi y, prin care primește câte un număr natural din intervalul
[1,106]. Subprogramul returnează valoarea 1, dacă x și y sunt în armonie, sau valoarea 0 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=8, iar y=12 subprogramul returnează 1 (1+2+4+8=15, 1+2+4+6+12=25, iar
8+12=20(15,25)), iar dacă x=8 și y=13, subprogramul returnează 0 (1+2+4+8=15, 1+13=14, iar
8+13=21(14,15)).*/

bool armonie(int a, int b) {

	int s = a + b;
	int sa=0, sb=0;

	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			sa += i;
		}
	}

	for (int i = 1; i <= b; i++) {
		if (b % i == 0) {
			sb += i;
		}
	}
	if (s >= sa && s <= sb) {
		return true;
	}
	return false;
}

void ex1Var10() {

	cout << armonie(8, 13);

}


/*O valoare filtrează două șiruri dacă există doi termeni care au acea valoare, unul fiind în primul șir, iar
celălalt în al doilea șir.
Scrieți un program C/C++ care citește de la tastatură numere naturale din intervalul [2,20]: m, n și
elementele unui tablou bidimensional cu m linii și n coloane, cu proprietatea că nu există două elemente
egale situate pe aceeași linie sau pe aceeași coloană.
Programul afișează pe ecran valorile care pot filtra șirul format din primele n-1 elemente
de pe prima linie, respectiv șirul format din ultimele m-1 elemente ale ultimei coloane a
tabloului, ca în exemplu. Valorile sunt afișate într-o ordine oarecare, separate prin câte
un spațiu, sau mesajul nu exista, dacă nu există astfel de valori.
Exemplu: pentru m=5, n=4 și tabloul alăturat, se afișează pe ecran, nu neapărat în
această ordine, numerele 4 7
4 5 7 2
2 7 3 6
7 6 4 0
6 9 8 7
8 0 5 4*/

void matrice(int a[100][100], int n, int m) {

	bool flag = false;

	for (int i = 0; i < n - 1; i++) {
		int x = a[0][i];
		for (int j = 0; j < m - 1; j++) {
			for (int k = i + 1; k < n; k++) {
				if (x == a[j][k]) {
					cout << x << " ";
					flag = true;
					break;
				}
			}
			if (flag) {
				break;
			}
		}
	}
	for (int i = 0; i < m - 1; i++) {
		int x = a[i][n - 1];
		for (int j = 0; j < n - 1; j++) {
			for (int k = i + 1; k < m; k++) {
				if (x == a[k][j]) {
					cout << x << " ";
					flag = true;
					break;
				}
			}
			if (flag) {
				break;
			}
		}
	}
}

void ex2Var10() {

	int a[100][100], n, m;

	citireMatrice(a, n, m);
	matrice(a, n, m);

}

/*Fişierul bac.txt conține un șir de cel mult 105 numere naturale din intervalul [1,109], separate prin
câte un spaţiu.
Se cere să se afişeze pe ecran cea mai mică poziţie pe care ar putea-o ocupa primul termen al șirului
aflat în fişier în şirul format cu aceleași valori, ordonat crescător. Proiectați un algoritm eficient din
punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 15 7 15 17 6 4
se afişează pe ecran 4 (15 se află pe a patra și pe a cincea poziție în şirul 4, 6, 7, 15, 15, 17)*/

void pozitie(int v[100], int d) {

	int k = v[0];

	sortareCrescator(v, d);

	for (int i = 0; i < d; i++) {
		if (v[i] == k) {
			cout << i;
			break;
		}
	}

}

void ex3Var10() {

	int v[100], d;

	citire(v, d);
	pozitie(v, d);

}














