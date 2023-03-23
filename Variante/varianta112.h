#include "citire_afisare.h"


/*Subprogramul pDoi are un singur parametru, n, prin care primește un număr natural (n[1,109]).
Subprogramul returnează cea mai mare valoare din intervalul [1,n], cu proprietatea că este o putere a
lui 2.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=20, subprogramul returnează 16.*/

int putere(int n) {

    int k = 1;  
    while (k * 2 <= n) {  
        k *= 2; 
    }
    return k;

}

void ex1Var12() {

    cout << putere(20);

}

/*Șirul de mai jos este definit alăturat:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 21, 42, 43, 86.... fn = {
n dacă n≤10
2∙fn-1 dacă n>10 și n impar
1+ fn-1 altfel
Se citește de la tastatură un număr natural x (x[1,109]), termen al șirului dat, și se cere să se scrie
în fișierul bac.out, separați prin câte un spațiu, în ordine strict descrescătoare, toți termenii șirului mai
mici sau egali cu x. Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al
timpului de executare.
Exemplu: dacă valoarea citită de la tastatură este 43
se scriu în fișier numerele 43 42 21 20 10 9 8 7 6 5 4 3 2 1*/

int f(int n) {

    if (n <= 10) {
        return n;
    }
    else if (n > 10 && n % 2 == 1) {
        return 2 * f(n-1);
    }
    else {
        return 1 + f(n - 1);
    }
    return -1;
}

void ex3Var12() {

    int i = 1;
    int k = f(i);

    while (k <= 43) {
        cout << k << " ";
        i++;
        k = f(i);
    }

}




















