#include "citire_afisare.h"


/*Subprogramul prodprim are doi parametri:
• n, prin care primește un număr natural (n[2,109]);
• p, prin care furnizează produsul divizorilor primi ai lui n.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2000, în urma apelului p=10, deoarece 2000=2453*/

void prodprim(int n) {
    int p = 1;
    int d = 2; 

    while (n > 1) {
        if (prim(d) && n % d == 0) {
            while (n % d == 0) {
                n /= d;
            }
            p *= d;
        }
        d++;
    }

    cout << p;
}

void ex1Var6() {

    prodprim(2000);

}

/*Se citesc de la tastatură două numere naturale din intervalul [1,81], p1 și p2, și se cere scrierea în
fișierul bac.out a tuturor numerelor naturale cu exact 7 cifre, pentru care produsul primelor două cifre
este egal cu p1, cele trei cifre din mijloc sunt egale între ele, iar produsul ultimelor două cifre este egal
cu p2. Numerele apar în fișier în ordine strict descrescătoare, fiecare pe câte o linie. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă p1=12, iar p2=8, atunci 2633324 și 3400018 sunt două dintre cele 160 de numere cu
proprietatea cerută (2∙6=3∙4=12 și 2∙4=1∙8=8)*/

void cifre(int p1, int p2) {

    for (int i = 81; i >= 1; i--) {
        for (int j = 9; j >= 1; j--) {
            if (i % j == 0 && i / j == p1) {
                for (int k = 9; k >= 0; k--) {
                    int n = j * 1000000 + j * 10000 + j * 100 + k * 10 + (p2 / k);
                    if (n >= 1000000 && n < 10000000 && (p2 % k) == 0) {
                        cout << n << endl;
                    }
                }
            }
        }
    }

}

void ex3Var6() {

    cifre(12, 8);

}















