#include "varianta8.h"


/*Se consideră tabloul bidimensional cu n linii şi n coloane ce conţine numere naturale cu cel
mult patru cifre fiecare. Scrieţi programul C/C++ care citeşte de la tastatură numărul natural
n (2≤n≤23) şi cele n*n elemente ale tabloului şi apoi afişează pe ecran elementele primului
pătrat concentric, separate prin câte un spaţiu. Pătratul este parcurs în sensul acelor de
ceasornic începând din colţul său stânga-sus, ca în exemplu. Primul pătrat concentric este
format din prima şi ultima linie, prima şi ultima coloană a tabloului.
Exemplu: pentru n=5 şi tabloul alăturat, se va
afişa:
1 2 3 4 5 1 6 2 7 6 5 4 3 7 2 6

1 2 3 4 5
6 7 8 9 1
2 3 4 5 6
7 8 9 1 2
3 4 5 6 7 */



void citireMatrice(int a[100][100], int& n, int& m) {

    ifstream read("in.txt");

    read >> n;
    read >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            read >> a[i][j];
        }
    }

}

void afisareMatrice(int a[100][100], int n, int m) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}

void chenarExterior(int a[100][100], int n, int m) {
    int i1, j1, i2, j2, k;

    i1 = 0; j1 = 0; i2 = n - 1; j2 = m - 1;

    for (k = j1; k <= j2; k++) {
        cout << a[i1][k] << " ";
    }
    for (k = i1 + 1; k <= i2; k++) {
        cout << a[k][j2] << " ";
    }
    for (k = j2 - 1; k >= i1; k--) {
        cout << a[i2][k] << " ";
    }
    for (k = i2 - 1; k > j1; k--) {
        cout << a[k][j1] << " ";
    }


}

void ex5Subiect2Var9() {

    int a[100][100], n, m;

    citireMatrice(a, n, m);
    chenarExterior(a, n, m);


}

/*Scrieţi definiţia completă a subprogramului sub cu doi parametri: n (număr natural,
0<n≤50) şi k (număr natural, 0<k≤20). Subprogramul determină afişarea pe o linie nouă a
ecranului, în ordine descrescătoare, a primelor n numere naturale nenule divizibile cu k.
Numerele vor fi separate prin câte spaţiu.
Exemplu: dacă n=3 şi k=5 la apelul subprogramului se va afişa pe ecran:
15 10 5*/

void primeleKNumere(int n, int k) {
    int ct = 0;

    for (int i = k; i < 1000; i++) {

        if (i % k == 0) {
            cout << i << " ";
            ct++;
        }

        if (ct == n) {
            return;
        }
    }

}

void ex3Subiect3Var9() {

    primeleKNumere(3, 5);

}

/*Se consideră fişierul BAC.TXT ce conţine cel mult un milion de numere naturale separate
prin spatii, fiecare număr având cel mult nouă cifre.
a) Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi determină,
folosind un algoritm eficient din punct de vedere timpului de executare, cele mai mari două
numere de trei cifre care nu se află în fişier. Cele două numere vor fi afişate pe ecran în
ordine descrescătoare, cu un spaţiu între ele. Dacă nu pot fi determinate două astfel de
numere, programul va afişa pe ecran valoarea 0.
Exemplu: dacă fişierul BAC.TXT conţine numerele:
12 2345 123 67 989 6 999 123 67 989 999
atunci programul va afişa
998 997*/

void celeMaiMariNumere(int v[], int d) {
    int ct = 0;

    for (int i = 999; i >= 100; i--) {
        if (nrGasit(v, d, i) == 0) {
            cout << i << " ";
            ct++;
        }
        if (ct == 2) {
            return;
        }
    }

}

void ex4Subiect3Var9() {

    int v[100], d;

    citire(v, d);
    celeMaiMariNumere(v, d);

}













