#include "citire_afisare.h"


/*Subprogramul divPrimMax are doi parametri:
• n, prin care primește un număr natural (n[2,109]);
• p, prin care furnizează cel mai mare divizor prim al lui n.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2000, în urma apelului p=5, deoarece 2000=2453*/

void divizorPrimMaxim(int n) {

    int d = 2, p = 0;

    while (d * d <= n){
        if (n % d == 0){
            int k = 0;
            while (n % d == 0){
                n /= d;
                k++;
                if (d > p){
                    p = d;
                }
            }
        }
        d++;
    }
    if (n != 1){
        p = n;
    }
    cout << p;
}

void ex1Var15() {

    divizorPrimMaxim(2000);

}

/*Se citesc de la tastatură două numere naturale din intervalul [1,81], p1 și p2, și se cere scrierea în
fișierul bac.out a tuturor numerelor naturale cu exact 7 cifre, pentru care produsul primelor două cifre
este egal cu p1, cele trei cifre din mijloc sunt egale între ele, iar produsul ultimelor două cifre este egal
cu p2. Numerele apar în fișier în ordine strict crescătoare, fiecare pe câte o linie. Proiectați un algoritm
eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă p1=12, iar p2=8, atunci 2633324 și 3400018 sunt două dintre cele 160 de numere cu
proprietatea cerută (2∙6=3∙4=12 și 2∙4=1∙8=8).*/

bool produs(int n,int p1, int p2) {
    int k = 1;
    int p = 1;

    while (n) {
        p *= n % 10;
        if (k == 2) {
            if (p != p2) {
                return false;
            }
            p = 1;
        }
        else if (k >= 2 && k < 5) {
            if (n % 10 != (n / 10) % 10) {
                return false;
            }
        }
        else if (k == 7) {
            if (p != p1) {
                return false;
            }
        }
        if (k == 5) {
            p = 1;
        }
        k++;
        n /= 10;
    }
    return true;
}

void ex3Var15() {

    cout << produs(3400018, 12, 8);

}















