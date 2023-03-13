#include "citire_afisare.h"


/*Subprogramul factori are doi parametri, n şi m, prin care primește câte un număr natural din intervalul
[1,109]. Subprogramul returnează numărul valorilor prime care se regăsesc atât în descompunerea în
factori primi a lui n, cât și în descompunerea în factori primi a lui m.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=750 şi m=490, atunci subprogramul returnează 2 (750=2353, 490=2572)*/

void factoriPrimi(int a, int b) {
    int ct = 0;
    int d;
    if (a < b) {
        d = a;
    }
    else {
        d = b;
    }
    
    for (int i = 2; i <= d; i++) {
        if (a % i == 0 && b % i == 0) {
            if (prim(i)) {
                ct++;
            }
        }
    }
    cout << ct;
}

void ex1Var3() {

    factoriPrimi(750, 490);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural, n (n∈[2,20]), şi construieşte
în memorie un tablou bidimensional cu n linii şi n coloane, având proprietăţile:
• toate elementele situate pe diagonala secundară sunt nule;
• fiecare linie conţine, începând cu diagonala secundară, de la dreapta la stânga, un şir strict crescător
de numere consecutive, iar începând cu diagonala secundară, de la stânga la dreapta, tot un şir strict
crescător de numere consecutive.
Programul afişează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
ecranului, cu elementele aflate pe aceeaşi linie separate prin câte un spaţiu.
Exemplu: dacă n=5 se afişează pe ecran tabloul alăturat. (10p.)
4 3 2 1 0
3 2 1 0 1
2 1 0 1 2
1 0 1 2 3
0 1 2 3 4
*/

void matrice(int n) {

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i - 1) {
                a[i][j] = n - i - j - 1;
            }
            else if (j > n - i - 1) {
                a[i][j] = i + j +1 - n;
            }
            else {
                a[i][j] = 0;
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

void ex2Var3() {

    matrice(5);

}

/*Fişierul bac.in conţine un şir de cel mult 106 numere întregi din intervalul [-109,109], separate prin
câte un spaţiu. Cel puţin un număr din șir este negativ.
Se cere să se afişeze pe ecran lungimea maximă a unei secvenţe a şirului care fie începe, fie se încheie
cu un număr negativ. O secvenţă este formată din termeni aflaţi pe poziţii consecutive în şir, iar
lungimea secvenței este egală cu numărul de termeni ai acesteia. Proiectați un algoritm eficient din
punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 12 25 -6 7 80 -75 101 -6 52 -124 87 99 210
pe ecran se afişează 11 (corespunzător secvenţei -6 7 80 -75 101 -6 52 -124 87 99 210).
a. Scrieți programul C/C++ corespunzător algoritmului proiectat*/

void secventa(int v[], int d) {

    int ct = 0;
    int p, u;
    for (int i = 0; i < d; i++) {
        if (v[i] < 0) {
            p = i;
            i = d + 1;
        }
    }

    for (int i = d - 1; i >= 0; i--) {
        if (v[i] < 0) {
            u = i;
            i = -1;
        }
    }

    for (int i = p; i <= u; i++) {
        ct++;
    }

    cout << ct;
}

void ex3Var3() {

    int v[100], d;

    citire(v, d);
    secventa(v, d);


}











