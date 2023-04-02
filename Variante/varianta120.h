#include "citire_afisare.h"

/*Subprogramul transformareBaza10 are doi parametri, b și n, prin care primește câte un număr
natural (b[2,10], n[0,109]). Subprogramul returnează suma tuturor produselor de forma c∙bk,
unde c este cifra de pe poziția k în scrierea numărului n; pozițiile sunt numerotate de la dreapta la
stânga, iar cifra unităților este pe poziția 0.
Scrieți definiția completă a subprogramului.
Exemplu: dacă b=2 și n=10010, subprogramul returnează 18 (18=1∙24+0∙23+0∙22+1∙21+0∙20).*/

int transformareBaza10(int b, int n) {
    int s = 0, k;
    int putere = 1;

    while (n) {
        k = n % 10;
        s += k * putere;
        putere *= b;
        n /= 10;
    }

    return s;
}

void ex1Var20() {

    cout<<transformareBaza10(2, 10010);

}

/*Fișierul bac.txt conține un șir de cel mult 106 numere naturale din intervalul [0,103], separate prin
câte un spațiu. Se cere să se afișeze pe ecran suma maximă obținută adunând numere cu aceeași
paritate, aflate pe poziții consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de
vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile 10 115 1 5 2 2 2 4 7 3 100 20 2 7
se afișează pe ecran numărul 122
*/

bool paritateDif(int a, int b) {

    if (a % 2 == 0 && b % 2 == 0 || a % 2 == 1 && b % 2 == 1) {
        return false;
    }
    return true;
}

void secventa(int v[], int d) {
    int s, smax = 0;

    for (int i = 0; i < d; i++) {
        int j = i;
        s = 0;
        while (j < d - 1 && paritateDif(v[j], v[j + 1]) == false) {
            s += v[j];
            j++;
        }
        if (s > smax) {
            smax = s;
        }
        i = j;
    }
    cout << smax;
}

void ex3Var20() {

    int v[100], d;
    citire(v, d);
    secventa(v, d);
}














