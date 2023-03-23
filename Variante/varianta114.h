#include "citire_afisare.h"


/*Două numere a și b (a<b) sunt numite divizori pereche ai unui număr natural n dacă a∙b=n.
Subprogramul perechi are un singur parametru, n, prin care primește un număr natural (n[2,109]).
Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu paritate diferită cu
proprietatea că sunt divizori pereche ai lui n. Fiecare pereche este afișată încadrată între paranteze drepte,
numerele din pereche fiind afișate în ordine strict crescătoare, separate printr-un spațiu, iar dacă nu există
astfel de perechi, se afișează pe ecran mesajul nu exista. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12 se afișează pe ecran, nu neapărat în această ordine, [1 12][3 4]
iar dacă n=9 se afișează pe ecran nu exista */

void divizoriPereche(int n) {

	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			cout << "(" << i << "," << n / i << ")" << endl;
		}
	}

}

void ex1Var14() {

	divizoriPereche(12);

}

/*Fișierul bac.in conține un șir de numere naturale distincte, din intervalul [1,109]. Numerele din șir
sunt separate prin câte un spațiu și cel puțin trei dintre ele au penultima cifră 2 și ultima cifră 0.
Se cere să se afișeze pe ecran cele mai mici trei numere din șir cu proprietatea că au penultima cifră 2
și ultima cifră 0. Numerele determinate sunt afișate în ordine crescătoare, separate prin câte un spațiu.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele 9731 50 112 20 8 16 8520 3 2520 1520
pe ecran se vor afișa, în această ordine, numerele: 20 1520 2520*/

void celeMaiMiciNr(int v[], int d) {

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < d; i++) {

        if (v[i] % 100 == 20) {
            if (v[i] > a) {
                c = b;
                b = a;
                a = v[i];
            }
            else if (v[i] > b) {
                c = b;
                b = v[i];
            }
            else if (v[i] > c) {
                c = v[i];
            }
        }

    }
    cout << a << " " << b << " " << c;

}

void ex3Var14() {

    int v[100], d;

    citire(v, d);
    celeMaiMiciNr(v, d);

}


















