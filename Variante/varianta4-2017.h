#include "citire_afisare.h"


/*Subprogramul duplicare are un singur parametru, n, prin care primește un număr
natural (n∈[1,104)). Subprogramul furnizează, prin același parametru, numărul obţinut
din n prin inserarea, după fiecare cifră pară din scrierea lui, a unei cifre egale cu jumătate
din aceasta.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2380 după apel, n=2138400, iar dacă n=35 după apel, n=35*/

void duplicare(int n) {
    int p = 1;
    int aux = 0;

    while (n > 0) {
        int c = n % 10;
        if (c % 2 == 0) {
            aux = aux + c / 2 * p + c * p * 10;
            p *= 100;
        }
        else {
            aux = aux + c * p;
            p *= 10;
        }
        n/= 10;
    }
    cout << aux;
}

void ex3Var4() {

	duplicare(2380);

}

/*Numim secvență pară într-un șir o succesiune de termeni ai șirului cu proprietatea că sunt
numere pare și că se află pe poziții consecutive în șir; orice secvență are cel puțin doi
termeni și este maximală în raport cu proprietatea precizată (dacă i se adaugă un alt
termen, secvența își pierde această proprietate). Lungimea secvenței este egală cu
numărul termenilor săi.
Fişierul bac.txt conţine un şir de cel mult 106
 numere naturale din intervalul [0,109].
Numerele din şir sunt separate prin câte un spaţiu.
Se cere să se afişeze pe ecran numărul de secvențe pare de lungime maximă din șir.
Proiectați un algoritm eficient din punctul de vedere al spațiului de memorie utilizat şi al
timpului de executare.
Exemplu: dacă fişierul bac.txt conţine valorile
1 2 3 4 6 10 2 8 5 7 9 4 6 10 121 20 4 11 10 2 5 2 6 8 10 16
se afişează pe ecran numărul 2. */

void secventeMax(int v[], int d) {

    int ct,k=0, secventaMax = 0, nrSecventeMax = 0;

    for (int i = 0; i < d; i++) {
        int j = i;
        ct = 0;
        while (v[j]%2==0&&j < d - 1) {
            ct++;
            j++;
            if (ct > secventaMax) {
                secventaMax = ct;
            }
        }
        if (secventaMax >= nrSecventeMax) {
            nrSecventeMax = secventaMax;
            k++;
        }
        i = j;
    }
    cout << k;
}

void ex4Var4() {

    int v[100], d;
    citire(v, d);

    secventeMax(v, d);

}















