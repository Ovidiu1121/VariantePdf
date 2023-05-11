#include "citire_afisare.h"


/*Subprogramul nrfp are doi parametri:
• n, prin care primește un număr natural (n[2,105]);
• m, prin care furnizează numărul din intervalul închis [2,n] care are cei mai mulți factori primi; dacă
există mai multe numere cu această proprietate, subprogramul îl returnează pe cel mai mare dintre ele.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=100 atunci, în urma apelului, m=90. */

int nrFactoriPrimi(int n) {
    int ct = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            ct++;
            n /= i;
        }
    }
    if (n > 1) {
        ct++;
    }
    return ct;
}

int interval(int n) {
    int maxim = 0;
    int m;
    for (int i = 2; i <= n; i++) {
        int factoriPrimi = nrFactoriPrimi(i);
        if (factoriPrimi > maxim) {
            maxim = factoriPrimi;
            m = i;
        }
        else if (factoriPrimi == maxim) {
            m = max(m, i);
        }
    }
    return m;
}

void ex1Var8() {

    cout<<interval(100);

}

/*Scrieți un program C/C++ care citește de la tastatură numărul natural n
(n[5,50]) și elementele unui tablou bidimensional cu n linii și n
coloane, numere naturale din intervalul [0,102]. Programul afișează pe
ecran suma numerelor din zona delimitată de cele două diagonale și
ultima coloană a tabloului, ca în exemplu.
Exemplu: pentru n=7 și tabloul alăturat, se afișează pe ecran 12.
1 2 3 4 5 5 6
7 8 9 0 3 1 2
4 6 8 0 1 1 3
8 6 3 6 2 4 7
5 7 9 2 2 5 8
1 4 7 0 5 3 6
9 2 5 8 5 9 1 */

void matrice(int a[100][100], int n, int m){

    int s = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j<n - 1 && j>i && i + j > n - 1) {
                cout << a[i][j] << " ";
            }
        }
    }

}

void ex2Var8() {
    
    int a[100][100], n, m;

    citireMatrice(a, n, m);
    matrice(a, n, m);

}

/*Fișierul bac.txt conține un șir de cel mult 106 numere naturale din intervalul [0,109].
Se cere să se determine și să se afișeze pe ecran, separate printr-un spațiu, ultimele două numere
impare (nu neapărat distincte) din șirul aflat în fișier, sau mesajul nu exista, dacă nu există două
astfel de numere. Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului
de executare.
Exemplu: dacă fișierul conține valorile 122 1635 628 1413 1647 900 3001 4252 */

void ultimeleDouaImpare(int v[], int d) {
    int prim, doi, k;

    for (int i = d - 1; i >= 0; i--) {
        if (v[i] % 2 == 1) {
            doi = v[i];
            k = i;
            i = -1;
        }
    }

    for (int i = k - 1; i >= 0; i--) {
        if (v[i] % 2 == 1) {
            prim = v[i];
            i = -1;
        }
    }
    cout << prim << " " << doi;
}

void ex3Var8() {

    int v[100], d;

    citire(v, d);
    ultimeleDouaImpare(v, d);

}














