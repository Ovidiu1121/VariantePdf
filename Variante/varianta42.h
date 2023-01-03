#include "citire_afisare.h"

/*Utiliz�nd metoda backtracking se genereaz� toate permut�rile mul�imii {1,2,3,4}. Dac�
primele trei permut�ri generate sunt, �n acest� ordine: 1234, 1243, 1324 preciza�i care
este permutarea generat� imediat dup� 3412.*/

int s[100], n = 4;

void tipar() {
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] == s[k]) {
			return 0;
		}
	}
	return 1;
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

	for (int i = 1; i <= n; i++) {
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

void ex1Var42() {

	back(0);

}

/*Scrie�i defini�ia complet� a unui subprogram P, cu trei parametri, care prime�te prin
intermediul primului parametru, a, un tablou unidimensional de cel mult 100 de numere
�ntregi, cu cel mult 4 cifre fiecare, prin intermediul celui de-al doilea parametru, n, num�rul
efectiv de elemente ale tabloului, iar prin parametrul k, un num�r natural (k<101) �i
returneaz� cea mai mare sum� cu k termeni care se poate ob�ine adun�nd k elemente ale
tabloului.
Exemplu: dac� n=6 �i k=4, iar �irul este format din elementele (5, 2, 5, 4, 1, 3),
atunci la apel se va returna 17.*/


void ex3Var42() {

	int v[100], d;

	citire(v, d);

}


/*Scrie�i un program C/C++ care determin� �n mod eficient, din punct de vedere al timpului
de executare, numerele ce apar o singur� dat� �n a doua linie a fi�ierului. Aceste numere
vor fi afi�ate pe ecran �n ordine cresc�toare, separate prin c�te un spa�iu.
Exemplu: dac� fi�ierul numere.txt are urm�torul con�inut:
7
3 5 2 1 5 23 1
atunci pe ecran se va afi�a: 2 3 23.*/

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void frecventa1(int v[], int d) {


	for (int i = 0; i < d; i++) {
		int k = frecventaNumar(v, d, v[i]);
		if (k == 1) {
			cout << v[i] << " ";
		}
	}
}

void ex4Var42() {

	int v[100], d;

	citire(v, d);
	frecventa1(v, d);

}















