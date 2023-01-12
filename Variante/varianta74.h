#include "citire_afisare.h"


//s2

/*Se consideră şirul lui Fibonacci, definit astfel: f0 = 0, f1 = 1, fn = fn-1 + fn-2, dacă n>1.
Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală n (2≤n≤24),
construieşte în memorie şi afişează pe ecran o matrice a cu n linii şi n coloane ale cărei
elemente sunt numere naturale, fiecare reprezentând ultima cifră a câte unui termen al
şirului lui Fibonacci, începând de la termenul de indice 1 şi până la termenul de indice n2, în
ordine, linie cu linie de sus în jos, şi în cadrul fiecărei linii de la stânga la dreapta, ca în
exemplu.
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a
ecranului, elementele de pe aceeaşi linie fiind separate între ele prin
câte un spaţiu.
Exemplu: pentru n = 4 se va obţine matricea alăturată. (10p.)
1 1 2 3
5 8 3 1
4 5 9 4
3 7 0 7*/

int fibonacci(int n) {
   
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c % 10;
}

void matrice(int n) {

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = fibonacci((i * n) + j + 1);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}

void ex5Var74() {

    matrice(4);

}

//s3

/*a) Scrieţi definiţia completă a subprogramului Cifra, cu doi parametri, n şi x, care primeşte
prin intermediul parametrului n un număr natural de cel mult nouă cifre şi furnizează prin
parametrul x cea mai mare cifră a numărului transmis prin parametrul n. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n,
n<1000000000, şi afişează pe ecran mesajul Da în cazul în care numărul citit este format
doar din cifre aparţinând mulţimii {0,1,2,3,4} şi afişează mesajul Nu în caz contrar.*/

int ceaMaiMareCifra(int n) {

    int maxim = 0;

    while (n) {
        if (n % 10 > maxim) {
            maxim = n % 10;
        }
        n /= 10;
    }
    return maxim;
}

bool multime(int n) {

    while (n) {
        if (n % 10 > 4) {
            return false;
        }
        n /= 10;
    }
    return true;
}

void ex3Var74() {

    cout << ceaMaiMareCifra(543198)<<endl;
    cout << multime(1431);
}

/*Se numeşte “număr mare” orice număr natural care are mai mult de nouă cifre.
a) Scrieţi un program C/C++ care citeşte de pe prima linie a fişierului text NUMERE.IN un
număr natural n (10<n<1000), iar de pe a doua linie n cifre despărţite prin câte un spaţiu,
dintre care cel puţin una nenulă, şi afişează pe ecran cel mai mic “număr mare” format cu toate
cele n cifre din fişier. Alegeţi o metodă eficientă din punct de vedere al utilizării memoriei.
(6p.)
b) Descrieţi succint în limbaj natural metoda de rezolvare folosită explicând în ce constă
eficienţa ei (3 – 4 rânduri). (4p.)
Exemplu: dacă fişierul NUMERE.IN conţine
10
7 9 4 0 9 0 1 1 8 8
atunci se va afişa pe ecran ”numărul mare” :
1001478899*/

int numarMare(int v[], int d) {

    sortareCrescator(v, d);

    int k = 0;
    for (int i = 0; i < d; i++) {
        k = k * 10 + v[i];
    }

    return k;
}

void ex4Var74() {

    int v[100], d;

    citire(v, d);
    cout << numarMare(v, d);

}










