#include "citire_afisare.h"


/*Subprogramul triplete are trei parametri, a, b și c, prin care primește câte un număr
natural din intervalul [0,104] (a<b). Subprogramul afișează pe ecran toate tripletele de
numere naturale, x, y şi z, soluţii ale ecuaţiei x+y+z=c, cu proprietatea că a≤x≤y≤z≤b.
Fiecare triplet afișat este încadrat între acolade, iar numerele x, y și z sunt afișate în
această ordine, separate prin câte o virgulă. Dacă nu există niciun triplet cu proprietatea
cerută, se afişează mesajul nu exista.
Scrieți definiția completă a subprogramului.
Exemplu: dacă a=2, b=4 şi c=8, se afișează pe ecran tripletele
{2,2,4}{2,3,3}
iar dacă a=5, b=8, c=8 se afişează pe ecran mesajul
nu exista. */

void triplete(int a, int b, int c) {
    bool flag = false;

    for (int x = a; x <= b - 2; x++) {
        for (int y = x; y <= b - 1; y++) {
            int z = c - x - y;
            if (z >= y && z <= b) {
               cout << "{" << x << "," << y << "," << z << "}";
               flag = true;
            }
        }
    }

    if (flag ==false) {
        cout << "nu exista";
    }
}

void ex3Var5() {

    triplete(2, 4, 8);
}

/*Un șir de numere este o progresie aritmetică de rație r dacă oricare termen al său, cu
excepția primului, se obține din cel care îl precede, prin adunarea la acesta a numărului r.
Exemplu: șirul 12, 14, 16, 18, 20 este o progresie de rație 2.
Fișierul bac.in conține un șir de cel mult 106
 numere naturale din intervalul [0,103],
separate prin câte un spațiu.
Se cere să se verifice dacă există un număr natural r, astfel încât toate numerele
distincte din șir să poată fi rearanjate, pentru a forma o progresie aritmetică de rație r. Se
afișează pe ecran numărul r, sau mesajul NU, dacă nu există un astfel de număr.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul conține numerele
180 30 80 280 130 330 230 30 30 330 80
se afișează pe ecran
50 */

void ratie(int v[], int d) {
    sortareCrescator(v, d);
    int r;
    for (int i = 0; i < d; i++) {
        if (v[i] != v[i + 1]) {
            r = v[i + 1] - v[i];
            if (r < 0) {
                r = abs(r);
            }
            break;
        }
    }

    
    bool flag = true;

    for (int i = 1; i < d; i++) {
        if (v[i] != v[i - 1]) {
            if (abs(v[i - 1] - v[i]) != r) {
                flag=false;
            }
        }
    }
    if (flag == true) {
        cout << r;
    }
    else {
        cout << -1;
    }
}

void ex4Var5() {

    int v[100], d;
    citire(v, d);
    ratie(v, d);

}












