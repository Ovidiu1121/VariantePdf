#include "citire_afisare.h"

/*Scrie�i un program C/C++ care cite�te de la tastatur� un num�r natural n (2<n<20) �i
construie�te �n memorie o matrice cu n linii �i n coloane, numerotate de la 1 la n, �n care
fiecare element aflat pe chenarul exterior al matricei este egal cu suma dintre indicele liniei
�i indicele coloanei pe care se afl�, iar fiecare dintre celelalte elemente este egal cu suma
celor trei �vecini� situa�i �n matrice pe linia anterioar�. Dou� elemente din matrice se numesc
vecine dac� se g�sesc al�turi pe linie, coloan� sau diagonal�. Chenarul exterior al unei
matrice este format din prima linie, ultima linie, prima coloan� �i ultima coloan�.
5.
Elementele matricei vor fi afi�ate pe ecran, c�te o linie a matricei
pe c�te o linie a ecranului cu c�te un spa�iu �ntre elementele
fiec�rei linii.
Exemplu: pentru n=5 se va ob�ine matricea al�turat�. (10p.)
2 3 4 5 6
3 9 12 15 7
4 24 36 34 8
5 64 94 78 9
6 7 8 9 10*/


void matrice(int n) {

	int a[100][100];

	int i1, j1, i2, j2, k;

	i1 = 0; j1 = 0; i2 = n - 1; j2 = n - 1;

	for (k = j1; k <= j2; k++) {
		a[i1][k] = k + 2;
	}
	for (k = i1 + 1; k <= i2; k++) {
		a[k][j2] = i2 + k+2;
	}
	for (k = j2 - 1; k >= i1; k--) {
		a[i2][k] = j2 + k+2;
	}
	for (k = i2 - 1; k > j1; k--) {
		a[k][j1] = k + 2;
	}

	for (int i = 1; i < n-1; i++) {
		for (int j = 1; j < n-1; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var20() {

	matrice(5);

}


/*Un algoritm genereaz� �n ordine descresc�toare, toate numerele de n cifre (n<9), cu cifrele
�n ordine strict cresc�toare, care nu au dou� cifre pare al�turate. Dac� pentru n=5, primele
cinci solu�ii generate sunt 56789, 45789, 45679, 45678, 36789, preciza�i care sunt
urm�toarele trei solu�ii generate, �n ordinea ob�inerii lor.*/

int s[100], n = 9, m = 5;

void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] <= s[i]) {
			return 0;
		}
	}
	for (int i = 1; i <= k; i++) {
		if (s[i] % 2 == 0 && s[i - 1] % 2 == 0 || s[i] % 2 == 0 && s[i + 1] % 2 == 0) {
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

	for (int i = n; i > 0; i--) {
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

void ex2Var20() {

	back(0);

}


/*Subprogramul nule are doi parametri: a, prin care prime�te un tablou unidimensional cu
maximum 100 de numere �ntregi, cu cel mult 4 cifre fiecare �i n, num�rul de elemente din
tablou. Subprogramul rearanjeaz� elementele tabloului unidimensional astfel �nc�t toate
valorile nule s� se afle la sf�r�itul tabloului. Ordinea �n cadrul secven�ei de elemente nenule
poate fi oricare. Tabloul modificat este furnizat tot prin parametrul a.
Exemplu: dac� n=6, a=(12,0,0,-3,-8,0), dup� apel, acesta ar putea fi:
a=(12,-3,-8,0,0,0).*/


void elementeNule(int v[], int d) {

	for (int i = d - 1; i >= 0; i--) {
		if (v[i] != 0) {
			int j = i;
			while (v[j] != 0 && j > 0) {
				j--;
			}
			if (j != 0) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void ex3Var20() {

	int v[100], d;

	citire(v, d);
	elementeNule(v, d);
	afisare(v, d);

}

/*�n fi�ierul nr1.txt este memorat� pe prima linie o valoare natural� n de cel mult 8 cifre,
iar pe linia urm�toare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict cresc�tor �i separate prin c�te un spa�iu. �n fi�ierul nr2.txt este memorat�
pe prima linie o valoare natural� m de cel mult 8 cifre, iar pe linia urm�toare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict cresc�tor �i separate prin
c�te un spa�iu. Se cere afi�area pe ecran, separate prin c�te un spa�iu, �n ordine strict
cresc�toare, a tuturor numerelor aflate pe a doua linie at�t �n primul c�t �i �n al doilea fi�ier.
Alege�i un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate �i al
timpului de executare.
Exemplu: pentru urm�toarele fi�iere:
nr1.txt nr2.txt
5 6
3 6 8 9 12 2 3 5 7 9 13
se va afi�a 3 9.*/

bool nrGasit(int v[], int d, int n) {

	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			return true;
		}
	}
	return false;
}

void nrIncluse(int v[], int d, int a[], int b) {

	for (int i = 0; i < d; i++) {
		if (nrGasit(a, b, v[i]) == true) {
			cout << v[i] << " ";
		}
	}

}

void ex4Var20() {

	int v[100], d;
	int a[6] = { 231,3,154,2,43,6 };

	citire(v, d);
	nrIncluse(v, d, a, 6);
}









