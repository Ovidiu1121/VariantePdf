#include "citire_afisare.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤6) apoi
construieşte în memorie o matrice cu n linii şi n coloane, astfel încât parcurgând liniile
matricei de sus în jos şi de la stânga la dreapta se obţin, în prima linie primele n numere ale
şirului Fibonacci în ordine crescătoare, în linia a doua următoarele n numere ale şirului
Fibonacci în ordine descrescătoare, în linia a treia următoarele n numere ale acestui şir în
ordine crescătoare, şi aşa mai departe, ca în exemplu. Elementele şirului Fibonacci se obţin
astfel: primul element este 0, al doilea este 1, iar elementele următoare se obţin însumând
cele două elemente care preced elementul curent. Astfel, primele 16 elemente ale acestui şir
sunt: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610.
 5.
Programul afişează pe ecran matricea obţinută, câte o linie a
matricei pe câte o linie a ecranului, elementele fiecărei linii fiind
separate prin câte un spaţiu.
Exemplu: pentru n=4 se obţine matricea alăturată. (10p.)
 0 1 1 2
 13 8 5 3
 21 34 55 89
610 377 233 144 */


void matrice(int n) {

    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
        }
    }

}

void ex5Var89() {


}

/*Scrieţi definiţia completă a subprogramului numar, cu trei parametri, care primeşte prin
intermediul parametrului n un număr natural format din cel mult 9 cifre, iar prin intermediul
parametrilor c1 şi c2 câte o cifră nenulă. Subprogramul caută prima apariţie (de la stânga
spre dreapta) a cifrei c1 în n, şi dacă aceasta apare, o înlocuieşte cu c2, iar următoarele
cifre, dacă există, sunt înlocuite cu câte o cifră 0. Subprogramul furnizează tot prin n
numărul astfel obţinut. Dacă cifra c1 nu apare în n, atunci valoarea lui n rămâne
nemodificată.
Exemplu: pentru n=162448, c1=4 şi c2=7 valoarea furnizată prin n va fi 162700 */

void numar(int n, int c1, int c2) {

    int v[100], d = 0;

    while (n) {
        v[d] = n % 10;
        d++;
        n /= 10;
    }
    int k = 0;
    int ct = 1;
    for (int i = d - 1; i >= 0; i--) {
        if (v[i] == c1) {
            k = k * 10 + c2;
            k = k * pow(10,(d - ct));
            cout << k << endl;
            return;
        }
        else {
            k = k * 10 + v[i];
        }
        ct++;
    }

}

void ex3Var89() {

    numar(162448, 4, 7);

}

/*Fişierul text bac.txt conţine pe mai multe rânduri cel mult 50000 de numere naturale din
intervalul închis [0, 99], numerele de pe acelaşi rând fiind separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care afişează pe ecran, în ordine descrescătoare, acele
numere din fişier care sunt mai mari decât un număr natural k, citit de la tastatură, utilizând
un algoritm eficient din punct de vedere al timpului de executare. Dacă un număr apare de
mai multe ori, şi este mai mare decât k, se va afişa o singură dată. Numerele vor fi afişate
câte 20 pe fiecare linie (cu excepţia ultimei linii care poate să conţină mai puţine valori),
separate prin câte un spaţiu.
Exemplu: dacă fişierul conţine numerele: 15 8 99 15 1 37 1 24 2, iar pentru k se citeşte
valoarea 7, se vor afişa numerele 99 37 24 15 8*/

void nrMaiMAri(int v[], int d, int k) {

    sortareDescrescator(v, d);

    for (int i = 0; i < d; i++) {
        if (v[i] > k) {
            cout << v[i] << " ";
        }
    }

}

void ex4Var89() {

    int v[100], d;

    citire(v, d);
    nrMaiMAri(v, d,7);

}
















