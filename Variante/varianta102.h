#include "citire_afisare.h"


/*Două numere distincte a și b sunt numite d-fii ai unui număr natural n dacă a∙b=n.
Subprogramul fii are un singur parametru, n, prin care primește un număr natural (n[1,109]).
Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea că sunt d-fii ai
lui n. Fiecare pereche este afișată încadrată între paranteze rotunde, numerele din pereche fiind afișate în
ordine strict descrescătoare, separate printr-un spațiu. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12 se afișează pe ecran, nu neapărat în această ordine, (12 1)(6 2)(4 3)
iar dacă n=16 se afișează pe ecran (16 1)(8 2)*/

void fii(int n) {

	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			cout << "(" << i << "," << n / i << ")" << endl;
		}
	}
}

void ex1Var2() {

	fii(12);

}

/*Fişierul bac.in conţine un şir de numere naturale distincte, din intervalul [1,109]. Numerele din şir
sunt separate prin câte un spaţiu şi cel puţin trei dintre ele au penultima cifră 2 și ultima cifră 0.
Se cere să se afișeze pe ecran cele mai mari trei numere din şir cu proprietatea că au penultima cifră 2
și ultima cifră 0. Numerele determinate sunt afişate în ordine crescătoare, separate prin câte un spaţiu.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 9731 50 112 20 8 16 8520 3 2520 1520
pe ecran se vor afişa, în această ordine, numerele: 1520 2520 8520
a. Scrieți programul C/C++ corespunzător algoritmului proiectat*/

void numere(int v[], int dim) {
    int p = 0, d = 0, t = 0;

    for (int i = 0; i < dim; i++) {

        if (v[i] % 100 == 20) {
            if (v[i] > p) {
                t = d;
                d = p;
                p = v[i];
            }
            else if (v[i] > d) {
                t = d;
                d = v[i];
            }
            else if (v[i] > t) {
                t = v[i];
            }
        }

    }
    cout <<t << " " << d << " " << p;
}

void ex3Var2() {

    int v[100], d;

    citire(v, d);
    numere(v, d);

}













