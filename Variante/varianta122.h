#include "citire_afisare.h"


/*Subprogramul factori are doi parametri, n și m, prin care primește câte un număr natural din intervalul
[1,109]. Subprogramul returnează numărul valorilor prime care apar la aceeași putere atât în
descompunerea în factori primi a lui n, cât și în descompunerea în factori primi a lui m.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=16500 și m=10780, atunci subprogramul returnează 2 (16500=2235311,
10780=2257211). */

int factori(int n, int m) {
    int ct = 0;
    int aux = n;
    int aux2 = m;

    for (int i = 2; i * i <= n; i++) {
        int e1 = 0;
        while (aux % i == 0) {
            aux /= i;
            e1++;
        }

        int e2 = 0; 
        while (aux2 % i == 0) {
            aux2 /= i;
            e2++;
        }

        if (e1 > 0 && e2 > 0 && e1 == e2) {
            ct++;
        }
    }

    return ct;
}

void ex1Var2() {

    cout<<factori(16500, 10780);

}

/*Scrieți un program C/C++ care citește de la tastatură un număr natural, n (n∈[2,20]), și construiește
în memorie un tablou bidimensional cu n linii și n coloane, astfel încât fiecare linie a sa are proprietățile:
• elementul situat pe diagonala secundară are valoarea n;
• începând de la diagonala secundară, spre stânga, elementele formează un șir strict descrescător de
numere consecutive, iar începând de la diagonala secundară, spre dreapta, elementele formează tot
un șir strict descrescător de numere consecutive.
Programul afișează pe ecran tabloul construit, fiecare linie a tabloului pe câte o linie a
ecranului, cu elementele aflate pe aceeași linie separate prin câte un spațiu.
Exemplu: dacă n=5 se afișează pe ecran tabloul alăturat.
1 2 3 4 5
2 3 4 5 4
3 4 5 4 3
4 5 4 3 2
5 4 3 2 1 */

void matrice(int n) {

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j + 1 == n) {
                a[i][j] = n;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n) {
                a[i][j] = i + j + 1;
            }
            else if(i+j>=5){
                a[i][j] = a[i][j - 1] - 1;
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

void ex2Var2() {

    matrice(5);

}

/*Fișierul bac.in conține un șir de cel mult 106 numere întregi din intervalul [-109,109], separate prin
câte un spațiu. Cel puțin un număr din șir este pozitiv.
Se cere să se afișeze pe ecran lungimea maximă a unei secvențe a șirului care fie începe, fie se încheie
cu un număr pozitiv. O secvență este formată din termeni aflați pe poziții consecutive în șir, iar lungimea
secvenței este egală cu numărul de termeni ai acesteia. Proiectați un algoritm eficient din punctul de
vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele -15 -7 4 -7 21 -5 -200 -26 52 -24 -7 -9 -20
pe ecran se afișează 11 (corespunzător secvenței 4 -7 21 -5 -200 -26 52 -24 -7 -9 -20)*/

void secventa(int v[], int d) {
    int k1, k2;

    for (int i = 0; i < d; i++) {
        if (v[i] > 0) {
            k1 = i;
            break;
        }
    }
    for (int i = d - 1; i >= 0; i--) {
        if (v[i] > 0) {
            k2 = i;
            break;
        }
    }
    int ct = 0;
    for (int i = k1; i < k2; i++) {
        ct++;
    }
    cout << ct;
}

void ex3Var2() {

    int v[100], d;

    citire(v, d);
    secventa(v, d);

}












