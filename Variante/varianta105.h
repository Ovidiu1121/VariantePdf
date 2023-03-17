#include "citire_afisare.h"


/*Un număr este scris în baza de numerație b (b≤10) dacă cifrele sale aparțin intervalului [0,b-1].
Subprogramul baza are un singur parametru, n, prin care primește un număr natural (n[0,109]).
Subprogramul returnează cea mai mică bază din intervalul [2,10] căreia i-ar putea corespunde
scrierea lui n. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=50731, subprogramul returnează numărul 8.*/

void ex1Var5() {



}

/*Fișierul bac.txt conține un șir de cel mult 106 numere întregi din intervalul [-103,103], separate prin
câte un spațiu. Se cere să se afișeze pe ecran suma maximă obținută adunând numere de pe poziții
consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de vedere al memoriei
utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile 4 -6 7 2 -1 4 -10 -3 9 2 -2
se afișează pe ecran numărul 12
*/

void sumaMaximaSecventa(int v[], int d) {
	int maxim = 0;
	int s = v[0];

    for (int i = 1; i < d; i++) { 
        s += v[i];
        if (s > maxim) {
            maxim = s;
        }
        if (s < 0) {
            s = 0;
        }
    }
    cout << maxim;
}

void ex3Var5() {

    int v[100], d;

    citire(v, d);
    sumaMaximaSecventa(v, d);

}
























