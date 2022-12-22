#include "citire_afisare.h"


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

/*Utilizând metoda backtracking, sunt generate n ordine crescătoare toate numerele de 3
cifre, astfel încât cifrele sunt în ordine crescătoare, iar cifrele aflate pe poziţii consecutive
sunt de paritate diferită. Ştiind că primele trei soluţii generate sunt, în această ordine, 123,
125, 127, scrieţi toate numerele generate care au suma cifrelor egală cu 12.*/

int s[100], n = 9, m = 3;

void tipar() {
    cout << endl;
    for (int i = 0; i < m; i++) {
        cout << s[i] << " ";
    }

}

int sumaCifre(int n) {

    int s = 0;

    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int valid(int k) {
    int suma = 0;
    for (int i = 0; i < k; i++) {
        if (s[k] <= s[i]) {
            return 0;
        }
    }
    for (int i = 0; i < k; i++) {
        if (s[i] % 2 == 0 && s[i + 1] % 2 == 0 || s[i] % 2 == 1 && s[i + 1] % 2 == 1) {
            return 0;
        }
    }

    for (int i = 0; i < k; i++) {
        suma += s[i];
    }
    if (suma != 12) {
        return 0;
    }
    return 1;
}

int solutie(int k) {

    if (k == m - 1) {
        return 1;
    }
    else {
        return 0;
    }

}

void back(int k) {

    for (int i = 1; i <= n; i++) {
        s[k] = i;
        if (valid(k)) {
            if (solutie(k)) {
                tipar();
            }
            else {
                back(k + 1);
            }
        }
    }

}

void ex2Var9() {

    back(0);

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

bool nrGasit(int v[], int d, int n) {

    for (int i = 0; i < d; i++) {
        if (v[i] == n) {
            return true;
        }
    }
    return false;
}

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













