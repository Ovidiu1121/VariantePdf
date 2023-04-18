#include "citire_afisare.h"


/*Un joc online cu n jetoane poate fi jucat de un grup de k (k≥2) jucători, numai dacă toate cele n jetoane
pot fi distribuite în mod egal celor k jucători.
Subprogramul joc are un singur parametru, n, prin care primește un număr natural (n[2,104]),
reprezentând numărul de jetoane ale unui joc de tipul precizat. Subprogramul returnează numărul
valorilor distincte pe care le poate avea k pentru acest joc.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12, atunci subprogramul returnează numărul 5 (cele 12 jetoane se pot distribu*/

void joc(int n) {
	int ct = 0;

	for(int i = 2; i <= n; i++)
	{
		if (n % i == 0) {
			ct++;
		}
	}
	cout << ct;
}

void ex1Var4() {

	joc(12);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură numere naturale din intervalul [2,102]: m, n şi
elementele unui tablou bidimensional cu m linii şi n coloane. Programul afișează pe ecran, pentru fiecare
linie a sa, cea mai mare dintre valorile strict mai mici decât 21 memorate în aceasta, sau mesajul
nu exista, dacă nu există nicio astfel de valoare pe linia respectivă. Numerele, respectiv mesajele,
sunt afișate pe linii separate ale ecranului, în ordinea liniilor corespunzătoare din tablou.
Exemplu: pentru m=3, n=5 și tabloul alăturat se afişează pe ecran
16
nu exista
9 (10p.)
6 16 21 4 90
92 26 36 95 80
5 2 9 7 3*/

void maxLinie(int a[100][100], int n, int m) {

	int maxim;

	for (int i = 0; i < n; i++) {
		maxim = 0;
		for (int j = 0; j < m; j++) {
			if (a[i][j] > maxim && a[i][j] < 21) {
				maxim = a[i][j];
			}
		}
		if (maxim) {
			cout << maxim << endl;
		}
		else {
			cout << "nu exista" << endl;
		}
	}

}

void ex2Var4() {

	int a[100][100], n, m;
	citireMatrice(a, n, m);

	maxLinie(a, n, m);


}

/*Fişierele bac1.txt și bac2.txt conţin numere naturale din intervalul [1,105]: fișierul bac1.txt
conține pe prima linie un număr n1, iar pe a doua linie un șir de n1 numere, iar fișierul bac2.txt
conține pe prima linie un număr n2, iar pe a doua linie un șir de n2 numere. Numerele aflate pe
aceeași linie a unui fișier sunt ordonate crescător și sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran, în ordine crescătoare, separate prin câte un spațiu, numerele divizibile
cu 5 care se găsesc doar în unul dintre șirurile aflate în cele două fișiere. Dacă nu există niciun astfel de
număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient din punctul de vedere
al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul
bac1.txt conţine numerele
7
1 2 3 4 7 20 60
iar fişierul bac2.txt
conţine numerele
9
3 5 7 8 9 10 12 20 24
pe ecran se afișează, în această ordine, numerele 5 10 60.
*/

void divizibilitate(int v[], int d, int a[], int b) {

	for (int i = 0; i < d; i++) {
		if (v[i] % 5 == 0) {
			if (nrGasit(a, b, v[i]) == false) {
				cout << v[i] << " ";
			}
		}
	}

	for (int i = 0; i < b; i++) {
		if (a[i] % 5 == 0) {
			if (nrGasit(v, d, a[i]) == false) {
				cout << a[i] << " ";
			}
		}
	}

}

void ex3Var4() {

	int v[100], d;
	citire(v, d);
	int a[9] = { 3,5,7,8,9,10,12,20,24 }, b = 9;

	divizibilitate(v, d, a, b);
}














