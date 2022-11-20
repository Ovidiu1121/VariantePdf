#include "varianta45.h"



/*Fişierul bac.txt conţine pe prima linie un număr natural n (n≤100), iar pe a doua linie,
separate prin câte un spaţiu, n numere naturale nenule, cu cel mult 4 cifre fiecare. Scrieţi
programul C/C++ care citeşte de la tastatură un număr natural k (k≤25), construieşte în
memorie şi afişează pe ecran un tablou unidimensional ce conţine, în ordinea în care au
fost citite, numerele de pe a doua linie a fişierului bac.txt care au cel puţin k divizori.
Exemplu: pentru k=5 şi fişierul bac.txt cu conţinutul alăturat,
6
100 9 400 56 7 10 tabloul care se afişează este:
100 400 56*/

void kDivizori(int v[], int d, int k) {

	for (int i = 0; i < d; i++) {
		int a = contorDivizori(v[i]);
		if (a >= k) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var46() {

	int v[100], d;

	citire(v, d);
	kDivizori(v, d,5);
}

/*Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (10≤n≤109) şi
verifică, folosind apeluri utile ale subprogramului cifre, dacă în scrierea în baza 10 a lui n
se găseşte cel puţin o cifră care să fie media aritmetică a celorlalte cifre din componenţa lui
n.Programul afişează pe ecran mesajul DA în caz afirmativ şi mesajul NU în caz contrar.
Exemplu: pentru n=27989 programul va afişa mesajul DA, deoarece în scrierea lui n apare
cifra 7 care este media aritmetică a celorlalte cifre din scrierea lui n: 7=(2+9+8+9)/4.
Pentru n=7351 se va afişa mesajul NU.*/

void ex4Var46() {



}

















