#include "citire_afisare.h"

//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
după cum urmează:
- elementele aflate pe diagonala secundară a matricei vor primi valoarea 0
- elementele de pe prima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n
- elementele de pe a doua linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n-1
...
- elementele de pe ultima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea 1
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii (ca
în exemplu).
Exemplu: pentru n=4 se va afişa matricea alăturată.
4 4 4 0
3 3 0 3
2 0 2 2
0 1 1 1*/

void matrice3(int n) {

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == 3) {
                a[i][j] = 0;
            }
            else {
                a[i][j] = n - i;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}

void ex4Subiect2Var4() {

    matrice3(4);

}

//s3

/*Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult
100 de numere naturale, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++
care citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu,
în ordine descrescătoare, toate numerele din fişier care au cel mult 2 cifre. Dacă fişierul nu
conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA.*/

int contorCifre(int n) {

    int ct = 0;

    while (n) {
        ct++;
        n /= 10;
    }
    return ct;
}

void ordineDescrescatoare(int v[], int d) {

    for (int i = d - 1; i >= 0; i--) {
        if (contorCifre(v[i]) >= 2) {
            cout << v[i] << " ";
        }
    }

}

void ex3Subiect3Var4() {

    int v[100], d;

    citire(v, d);
    ordineDescrescatoare(v, d);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu exact 8 cifre,
fiecare cifră fiind nenulă, şi care determină şi afişează pe ecran, folosind apeluri utile ale
subprogramului cif, cel mai mic număr palindrom ce poate fi obţinut prin rearanjarea
tuturor cifrelor numărului n. Dacă nu se poate obţine un palindrom din toate cifrele numărului
n, programul va afişa pe ecran numărul 0. Un număr natural este palindrom dacă este egal
cu numărul obţinut prin scrierea cifrelor sale în ordine inversă.
Exemplu: dacă n=21523531 atunci se va afişa pe ecran numărul 12355321, iar dacă
n=12272351 atunci se va afişa pe ecran numărul 0.*/

void ex4Var4() {


}









