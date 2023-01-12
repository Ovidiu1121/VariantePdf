#include "citire_afisare.h"

//s2

/*Scrieţi programul C/C++ care citeşte de la tastatură o valoare naturală n (2≤n≤24),
construieşte în memorie şi apoi afişează pe ecran o matrice a, cu n linii şi n coloane,
simetrică faţă de diagonala secundară. Elemente matricei situate deasupra diagonalei
secundare, inclusiv diagonala secundară, sunt toate numerele naturale de la 1 la
2
n(n + 1).
5.
Elementele fiecărei linii, de la stânga la dreapta şi ale fiecărei coloane, de
sus în jos, situate deasupra diagonalei secundare, inclusiv cele de pe
diagonala secundară, sunt în ordine strict crescătoare, ca în exemplu.
Matricea se va afişa pe ecran, câte o linie a matricei pe o linie a ecranului,
elementele fiecărei linii fiind separate între ele prin câte un spaţiu.
Exemplu: pentru n = 4 se va afişa matricea alăturată. (10p.)
1 3 6 10
2 5 9 6
4 8 5 3
7 4 2 1*/

void matrice(int n) {

	int a[100][100];
	int k = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i; j++) {

			a[i][j] = i + j * j + k;
			a[n - 1 - i][n - 1 - j] = a[i][j];
			
		}
		k++;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var72() {

	matrice(4);

}


//s3

/*Se generează în ordine crescătoare toate numerele de 4 cifre, cu cifre distincte, astfel încât
diferenţa în valoare absolută dintre prima şi ultima, respectiv a doua şi a treia cifră este
egală cu 2. Primele 11 soluţii generate sunt, în ordine: 1023, 1203, 1243, 1423, 1463,
1573, 1643, 1683, 1753, 1793, 1863. Care dintre următoarele numere se va genera
imediat înaintea numărului 9317?*/

int s[100], n = 4, m = 9;

void tipar() {

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	cout << endl;
}

int valid(int k) {

	if (s[0] == 0) {
		return 0;
	}

	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 0;
		}
	}

	if (k >= 4) {
		if (abs(s[0] - s[3]) != 2 && abs(s[1] - s[2]) != 2) {
			return 0;
		}
	}

	return 1;
}

int solutie(int k) {

	if (k == n - 1) {
		return 1;
	}
	return 0;
}

void back(int k) {

	for (int i = 0; i <= m; i++) {
		s[k] = i;
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

void ex1Var72() {

	back(0);

}


/*a) Scrieţi definiţia completă a subprogramului Ecuatie care primeşte prin parametrii a, b şi
c trei numere întregi, a ≠ 0, de cel mult patru cifre fiecare, reprezentând coeficienţii ecuaţiei
de gradul al II-lea: ax 2 +bx+c=0. În funcţie de soluţiile ecuaţiei subprogramul va returna:
• cea mai mare dintre soluţii dacă ecuaţia are două soluţii reale distincte, dintre care cel
puţin una pozitivă.
• una dintre soluţii dacă ecuaţia are două soluţii egale şi pozitive.
• -32000 în celelalte cazuri. (10p.)
b) Se consideră şirul s: 1, 1, 2, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 1, 2,... .
Pentru un număr natural k, 0<k≤10000, se cere să se determine valoarea elementului ce
se află pe poziţia k în şirul s.
Exemplu: pentru k=5 numărul cerut este 2.
Scrieţi un program C/C++ care citeşte de la tastatură valoarea numărului natural k şi, prin
apeluri utile ale funcţiei Ecuatie, determină valoarea elementului ce se află pe poziţia k în
şirul s, folosind un algoritm eficient din punctul de vedere al spaţiului de memorie alocat şi
al timpului de executare. Valoarea astfel determinată se va scrie în fişierul text sir.out.*/

int ecuatie(int a, int b, int c) {

	int d = pow(b, b) + 4 * a * c;
	int x1, x2;

	if (d > 0) {
		x1 = (-b + sqrt(d)) / 2;
		x2 = (-b - sqrt(d)) / 2;
		if (x1 > x2) {
			return x1;
		}
		else {
			return x2;
		}
	}
	else if (d == 0) {
		x1 = -(b / 2 * a);
		x2 = x1;
		return x1;
	}
	else {
		return -32000;
	}

}

void ex3Var72() {

	cout << ecuatie(1, 4,-12);

}













