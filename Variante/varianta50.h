#include "citire_afisare.h"

/*Se generează în ordine strict crescătoare toate numerele de câte şase cifre care conţin:
cifra 1 o singură dată, cifra 2 de două ori şi cifra 3 de trei ori. Se obţin, în această ordine,
numerele: 122333, 123233, 123323, …, 333221. Ce număr se află imediat înaintea şi ce
număr se află imediat după numărul 332312 în şirul numerelor generate?*/

void ex2Var50() {



}

/*Scrieţi un program C/C++ care citeşte de la tastatură trei numere naturale nenule a, b şi
n, cu cel mult 3 cifre fiecare şi care afişează pe ecran toţi divizorii lui n din intervalul închis
determinat de a şi b folosind apeluri utile ale subprogramului divxy. Intervalul închis
determinat de a şi b este [a,b] dacă a<b sau [b,a] dacă b≤a. Numerele afişate sunt
separate prin câte un spaţiu. Dacă nu există niciun astfel de număr se afişează mesajul NU
EXISTA.
Exemplu: pentru a=85, b=10 şi n=40 se afişează: 10 20 40 (nu neapărat în această
ordine).*/

void divizoriInterval(int a, int b, int n) {

	for (int i = a; i <= b; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}

}

void ex3Var50() {

	divizoriInterval(10, 85, 40);

}

/*Fişierul bac.in conţine pe prima linie un număr natural n (0<n<5000), iar pe a doua linie,
separate prin câte un spaţiu, n numere naturale, formate din cel mult 4 cifre fiecare.
Scrieţi un program C/C++ care determină şi scrie în fişierul bac.out, toate numerele, citite de
pe a doua linie a fişierului bac.in, care apar de cel puţin două ori. Numerele determinate se
vor scrie în ordine crescătoare, pe aceeaşi linie, separate prin câte un spaţiu.
Exemplu: dacă fişierul bac.in conţine pe prima linie numărul 11, iar pe linia a doua
valorile 23 12 54 12 78 345 67 23 78 934 23
atunci fişierul bac.out va conţine: 12 23 78*/

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

void minim2ori(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (frecventaNumar(v, d, v[i]) >= 2) {
			cout << v[i] << " ";
		}
	}

}

void ex4Var50() {

	int v[100], d;

	citire(v, d);
	minim2ori(v, d);
}
















