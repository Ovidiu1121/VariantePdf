#include "citire_afisare.h"

//a2

/*Scrieţi un program în limbajul C/C++ care citeşte de la tastatură două valori naturale n şi m
(1≤n≤24, 1≤m≤24) şi construieşte în memorie un tablou bidimensional cu n linii şi m coloane
format din toate numerele naturale de la 1 la n*m, ca în exemplu. Programul va afişa pe
ecran, pe n linii, tabloul obţinut, elementele fiecărei linii fiind separate prin câte un spaţiu.
Exemplu: pentru n=5 şi m=4 se va afişa:
1 6 11 16
2 7 12 17
3 8 13 18
4 9 14 19
5 10 15 20
(*/

void matrice(int n, int m) {

	int a[100][100];
	int k = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[j][i] = k;
			k++;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void ex5Var63() {

	matrice(4, 5);

}

//s3

/*Se generează, prin metoda backtracking, toate partiţiile mulţimii A={1,2,3} obţinându-se
următoarele soluţii: {1}{2}{3}; {1}{2,3}; {1,3}{2}; {1,2}{3}; {1,2,3}. Se observă
că dintre acestea, prima soluţie e alcătuită din exact trei submulţimi. Dacă se foloseşte
aceeaşi metodă pentru a genera partiţiile mulţimii {1,2,3,4} stabiliţi câte dintre soluţiile
generate vor fi alcătuite din exact trei submulţimi.*/

void ex1Var63() {



}

/*Subprogramul verif primeşte prin singurul său parametru, x, un număr natural nenul cu
cel mult 9 cifre şi returnează valoarea 1 dacă numărul conţine cel puţin o secvenţă de 3
cifre impare alăturate şi 0 în caz contrar.
Exemplu: dacă x=7325972 se va returna valoarea 1.
a) Scrieţi definiţia completă a subprogramului verif. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n cu exact
6 cifre şi, folosind apeluri utile ale subprogramului verif, verifică dacă n are primele trei
cifre impare. Programul afişează pe ecran mesajul Da în caz afirmativ şi mesajul Nu în caz
contrar.*/

bool verif(int n) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	for (int i = 1; i < d-1; i++) {
		if (v[i - 1] % 2 == 1 && v[i] % 2 == 1 && v[i + 1] % 2 == 1) {
			return true;
		}
	}
	return false;
}

bool primeleTreiIMpare(int n) {

	int v[100], d = 0;

	while (n) {
		v[d] = n % 10;
		d++;
		n /= 10;
	}

	for (int i = d - 1; i >=d-4; i--) {
		if (v[i] % 2 == 0) {
			return false;
		}
	}
	return true;
}

void ex3Var63() {

	cout << verif(18336);

}

/*Pentru un şir de numere naturale, numim ”nod” al şirului un termen din şir care are doi
vecini, termenul precedent şi termenul următor din şir, şi valoarea termenului respectiv este
strict mai mică decât suma valorilor celor doi vecini ai săi.
a) Fişierul text date.in conţine un şir de cel puţin două şi cel mult 10000 de numere
naturale având maximum 6 cifre fiecare, numere separate prin câte un spaţiu. Scrieţi un
program C/C++ care citeşte toate numerele din fişier şi afişează numărul de ”noduri“ ale
şirului citit, folosind un algoritm eficient din punctul de vedere al memoriei utilizate. (6p.)
Exemplu: dacă fişierul date.in are următorul conţinut:
51 20 100 43 43 618 5000 31 2020 114 116 4
atunci pe ecran se afişează 6 (cele şase numere subliniate reprezintă ”noduri“ ai şirului)*/

int noduri(int v[], int d) {
	int ct = 0;
	for (int i = 1; i < d - 1; i++) {
		if (v[i] < v[i - 1] + v[i + 1]) {
			ct++;
		}
	}
	return ct;
}

void ex4Var63() {

	int v[100], d;

	citire(v, d);
	cout << noduri(v, d);

}









