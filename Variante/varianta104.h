#include "citire_afisare.h"

/*Două numere a și b sunt numite generatoare ale unui număr natural n dacă a∙b+[a/b]=n, unde s-a notat
cu [c] partea întreagă a numărului real c.
Subprogramul generatoare are un singur parametru, n, prin care primește un număr natural
(n[2,109]). Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea
că sunt generatoare ale lui n și că primul număr din pereche este par. Numerele din fiecare pereche sunt
separate prin simbolul minus (-), iar perechile sunt separate prin câte un spațiu. Dacă nu există astfel de
perechi, se afișează pe ecran mesajul nu exista. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2020 se afișează pe ecran
2-1010 4-505 10-202 20-101 96-21 200-10 606-3 808-2 1010-1*/

void perechi(int n) {

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i < n / i) {
                int k = i * (n / i) + i / (n / i);
                if (k == n && i % 2 == 0) {
                    cout << i << "-" << (n / i) << " ";
                }
            }
        }
    }
}

void ex1Var4() {

    perechi(2020);

}

/*Într-un tablou bidimensional, cu elemente având valori numai în mulţimea {0,1}, numim coloane
„complementare” două coloane cu proprietatea că oricare două elemente ale acestora, aflate pe
aceeaşi linie, sunt diferite.
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din
intervalul [2,20], m şi n, şi elementele unui tablou bidimensional cu m linii şi n
coloane, numere naturale din mulţimea {0,1}. Programul afişează pe ecran numărul
de coloane ale tabloului care sunt „complementare" cu prima coloană a acestuia.
Exemplu: dacă m=3, n=6, pentru tabloul alăturat se afişează pe ecran 3.*/

void coloaneComplementare(int a[100][100], int n, int m) {

    int ct = 1;
    for (int j = 1; j < n; j++) { 
        bool flag = true;
        for (int i = 0; i < m; i++) {
            if (a[i][0] == a[i][j]) { 
                flag = false;
                break;
            }
        }
        if (flag==true) {
            ct++;
        }
    }
    cout << ct;
}

void ex2Var4() {

    int a[100][100], n, m;

    citireMatrice(a, n, m);
    coloaneComplementare(a, n, m);

}

/*Fişierul bac.txt conţine, în ordine descrescătoare, cel puţin două şi cel mult 106 numere naturale
din intervalul [0,109], separate prin câte un spaţiu. Se cere să se afişeze pe ecran, în ordine strict
descrescătoare, separate prin câte un spaţiu, numai numerele care apar în fişier de exact două ori.
Dacă nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm
eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 100 50 50 50 49 49 36 16 16 12 10 10 9 7 7
pe ecran se afişează, în această ordine, numerele 49 16 10 7
a. Scrieți programul C/C++ corespunzător algoritmului proiectat*/

int frecventaNumar(int v[], int d, int n) {

    int fc[100]{};

    for (int i = 0; i < d; i++) {
        fc[v[i]]++;
    }

    return fc[n];
}

void contorNr(int v[], int d) {
    int a[100], b = 0;

    for (int i = 0; i < d; i++) {
        if (frecventaNumar(v, d, v[i]) == 2) {
            if (nrGasit(a, b, v[i]) == false) {
                a[b] = v[i];
                b++;
           }
        }
    }
    for (int i = 0; i < b; i++) {
        cout << a[i] << " ";
    }
}

void ex3Var4() {

    int v[100], d;

    citire(v, d);
    contorNr(v, d);

}












