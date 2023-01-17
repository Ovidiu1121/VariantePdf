#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤20),
elementele unei matrice cu n linii şi n coloane, numere întregi din intervalul [-100,100] şi
afişează pe ecran media aritmetică a elementelor strict pozitive ale matricei, care sunt
situate deasupra diagonalei principale, ca în exemplu. Dacă nu există elemente strict
pozitive situate deasupra diagonalei principale, programul va afişa mesajul „NU EXISTA”.
 5.
Exemplu: pentru n=4 şi matricea alăturată se afişează valoarea
2.75 (sunt luate în considerare doar elementele marcate).
 (10p.)
 -1 2 -4 5
 0 6 3 1
 2 4 2 0
 3 -5 1 -3*/

void medieAritmetica(int a[100][100], int n, int m) {

    int s = 0;
    int ct = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < j) {
                if (a[i][j] > 0) {
                    s += a[i][j];
                    ct++;
                }
            }
        }
    }
    cout << float(s / ct);
}

void ex5Var88() {

    int a[100][100], n, m;

    citireMatrice(a, n, m);
    medieAritmetica(a, n, m);

}

//s3

/*Scrieţi definiţia completă a subprogramului numar, cu patru parametri, care primeşte prin
intermediul parametrului n un număr natural format din cel mult 9 cifre, iar prin intermediul
parametrilor c1 şi c2 câte o cifră cu proprietatea c1<c2; subprogramul furnizează prin
intermediul celui de al patrulea parametru, x, o valoare obţinută prin eliminarea din numărul
primit prin parametrul n a fiecărei cifre cuprinse în intervalul închis [c1, c2]. Dacă toate
cifrele lui n aparţin acestui interval, valoarea furnizată prin x va fi 0.
Exemplu: pentru n=162448, c1=4 şi c2=7, valoarea furnizată prin x va fi 128 */

void interval(int n, int c1, int c2) {
    int v[100], d = 0;
    while (n) {
        if (n % 10 < c1 || n % 10 > c2) {
            v[d] = n % 10;
            d++;
        }
        n /= 10;
    }

    for (int i = d - 1; i >= 0; i--) {
        cout << v[i];
    }

}

void ex3Var88() {

    interval(162448, 4, 7);


}


/*Fişierul text bac.txt conţine cel mult 10000 de numere naturale din intervalul închis
[0,9], dintre care cel puţin unul este prim. Numerele se află pe mai multe rânduri, cele de
pe acelaşi rând fiind separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care determină şi afişează pe ecran cel mai mare număr prim
care apare în fişier şi numărul de apariţii ale acestuia, utilizând un algoritm eficient din punct
de vedere al timpului de executare şi al spaţiului de memorie utilizat. Programul afişează pe
ecran cele două valori determinate, separate printr-un spaţiu.
Exemplu: dacă fişierul conţine numerele: 5 8 9 1 9 5 1 1 2 2 se va afişa 5 2.*/

int frecventaNumar(int v[], int d, int n) {

    int f[100]{};

    for (int i = 0; i < d; i++) {
        f[v[i]]++;
    }

    return f[n];
}

void primMax(int v[], int d) {

    int maxim = 0;

    for (int i = 0; i < d; i++) {
        if (prim(v[i])) {
            if (v[i] > maxim) {
                maxim = v[i];
            }
        }
    }

    cout << maxim << " " << frecventaNumar(v, d, maxim);

}

void ex4Var88() {

    int v[100], d;

    citire(v, d);
    primMax(v, d);


}