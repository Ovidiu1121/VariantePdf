#include "citire_afisare.h"

/*Subprogramul nrDivPrimi are un singur parametru, n, prin care primește un număr natural
(n[2,109]). Subprogramul returnează numărul divizorilor care, în descompunerea în factori primi a lui
n, apar la o putere impară.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=9000, subprogramul returnează 2 (9000=233253).*/

void putereImpara(int n) {

    int d = 2, p = 0, k = 0;

    while (d * d <= n) {
        if (n % d == 0) {
            p = 0;
            while (n % d == 0) {
                n /= d;
                p++;
            }
            if (p % 2 == 1) {
                k++;
            }
        }
        d++;
    }
    cout << k;
}

void ex1Var16() {

    putereImpara(9000);

}

/*Scrieți un program C/C++ care citește de la tastatură două numere naturale din intervalul [2,102],
n și m, și construiește în memorie un tablou bidimensional cu n linii și m coloane, cu proprietatea că
parcurgându-l linie cu linie de sus în jos și fiecare linie de la stânga la dreapta, se obține șirul primelor
n*m pătrate perfecte impare, ordonat strict descrescător, ca în exemplu.
Elementele tabloului obținut se afișează pe ecran, fiecare linie a tabloului pe câte o linie
a ecranului, valorile de pe aceeași linie fiind separate prin câte un spațiu.
Exemplu: pentru n=2, m=3 se obține tabloul alăturat. 
121 81 49
25 9 1*/

void matrice(int n, int m) {

    int a[100][100];
    int k = 1;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            a[i][j] = pow(k, 2);
            k = k + 2;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void ex2Var16() {

    matrice(2, 3);

}

/*Fișierul bac.in conține numere naturale: pe prima linie două numere din intervalul [1,106], m și n, pe
a doua linie un șir de m numere din intervalul [1,109], iar pe a treia linie un șir de n numere din
intervalul [1,109]. Numerele aflate pe aceeași linie a fișierului sunt separate prin câte un spațiu, și
ambele șiruri sunt ordonate crescător.
Se cere să se afișeze pe ecran, în ordine strict crescătoare, un șir format dintr-un număr maxim de
termeni care aparțin cel puțin unuia dintre cele două șiruri, astfel încât oricare două elemente aflate pe
poziții consecutive să fie de paritate diferită. Numerele afișate sunt separate prin câte un spațiu.
Proiectați un algoritm eficient din punctul de vedere al timpului de
executare.
Exemplu: dacă fișierul are conținutul alăturat, se afișează pe ecran
2 3 4 5 8 11 14 sau 2 3 4 5 10 11 14
8 5
2 4 5 8 8 11 14 14
3 4 5 5 10*/

bool paritateDif(int a, int b) {

    if (a % 2 == 0 && b % 2 == 0 || a % 2 == 1 && b % 2 == 1) {
        return false;
    }
    return true;
}

void vectori(int v[], int d, int a[], int b) {
    
    sortareCrescator(v, d);
    sortareCrescator(a, b);

    int i = 1, j = 1, x[100], y = 1;
    if (v[0] < a[0]) {
        x[0] = v[0];
    }
     else {
        x[0] = a[0];
    }

    

}

void ex3Var16() {



}












