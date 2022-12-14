#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, ale cărei
elemente primesc valori după cum urmează:
- elementele aflate pe diagonala secundară sunt toate nule;
- elementele de pe coloana i (1≤i≤n), aflate deasupra diagonalei secundare, au valoarea
egală cu i;
- elementele de pe linia n-i+1 (1≤i≤n), aflate sub diagonala secundară, au valoarea egală
cu i.
5.
Programul afişează pe ecran matricea construită, câte o linie a matricei pe
câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un
spaţiu.
Exemplu: pentru n=4 se va afişa matricea alăturată.
1 2 3 0
1 2 0 3
1 0 2 2
0 1 1 1*/

void matrice(int n) {

	int a[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <n; j++) {
			 if (i + j < 3) {
				a[i][j] = j+1;
			}
			else if(i+j>3) {
				a[i][j] = n - i;
			 }
			else {
				 if (j + i == 3) {
					 a[i][n - i - 1] = 0;
				 }
			 }
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void ex5Var13() {

	matrice(4);

}


/*Se consideră şirul 1, 2,1, 3,2,1, 4,3,2,1, ...
construit astfel: prima grupă este formată din numărul 1, a doua grupă este formată din
numerele 2 şi 1, iar grupa a k-a, este formată din numerele k, k-1,..., 1.
Se cere să se citescă de la tastatură un număr natural n (n≤1000) şi să se afişeze pe ecran
cel de al n-lea termen al şirului dat.*/

void ex3() {



}

/*Se consideră subprogramul P care are doi parametri:
– n, prin intermediul căruia primeşte un număr natural de cel mult 9 cifre
– c, prin intermediul căruia primeşte o cifră.
Subprogramul va furniza tot prin intermediul parametrului n numărul obţinut din n prin
eliminarea tuturor apriţiilor cifrei c. Dacă, după eliminare, numărul nu mai conţine nicio cifră
sau conţine doar cifre 0, rezultatul returnat va fi 0.*/

int eliminareCifra(int n, int c) {

	int v[100], d = 0;

	while (n) {
		if (n % 10 != c) {
			v[d] = n % 10;
			d++;
		}
		n /= 10;
	}
	int k = 0;
	for (int i = d - 1; i >= 0; i--) {
		k = k * 10 + v[i];
	}
	return k;
}

void ex4aVar13() {

	cout << eliminareCifra(2324228, 2);

}

/*Pe prima linie a fişierului text BAC.IN se găsesc, separate prin câte un spaţiu, mai multe
numere naturale de cel mult 9 cifre fiecare. Scrieţi programul C/C++ care citeşte numerele
din acest fişier, utilizând apeluri ale subprogramului P elimină toate cifrele impare din fiecare
dintre aceste numere şi apoi scrie în fişierul text BAC.OUT numerele astfel obţinute,
separate prin câte un spaţiu. Dacă un număr din fişierul BAC.IN nu conţine nicio cifră pară
nenulă, acesta nu va mai apărea deloc în fişierul de ieşire. (8p.)
Exemplu: dacă fişierul BAC.IN conţine numerele 25 7 38 1030 45127 0 35 60 15,
atunci BAC.OUT va avea conţinutul: 2 8 42 60.*/

int eliminareCifreImpare(int n) {

	int v[100], d = 0;

	while (n) {
		if ((n % 10) % 2 == 0) {
			v[d] = n % 10;
			d++;
		}
		n /= 10;
	}
	int k = 0;
	for (int i = d - 1; i >= 0; i--) {
		k = k * 10 + v[i];
	}
	return k;
}

void stergereImpareVec(int v[], int d) {

	for (int i = 0; i < d; i++) {
		int k=eliminareCifreImpare(v[i]);
		if (k != 0) {
			cout << k << " ";
		}
	}

}

void ex4bVar13() {

	int v[100], d;

	citire(v, d);
	stergereImpareVec(v, d);

}












