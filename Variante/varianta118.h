#include "citire_afisare.h"


/*Subprogramul suma are doi parametri:
• n, prin care primește un număr natural din intervalul [0,109];
• s, prin care furnizează suma cifrelor pare distincte din scrierea acestuia.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=67638825, după apel s=16 (16=6+8+2), iar dacă n=15, după apel s=0. */

void suma(int n) {
    int s = 0;
    int f[10]{};

    while (n) {
        int k = n % 10;
        n /= 10;

        if (k % 2 == 0) {
            f[k] = 1; 
        }
    }

    for (int i = 0; i < 10; i++) {
        if (f[i] == 1) {
            s += i;
        }
    }
    cout << s;
}

void ex1Var18() {

	suma(67638825);
}

/*Numim 10-secvență într-un șir de numere naturale, o succesiune de termeni aflați pe poziții
consecutive în șir, cu proprietatea că sunt multipli ai numărului 10. Lungimea secvenței este egală cu
numărul de termeni ai săi.
Fișierul bac.txt conține un șir de cel mult 106 numere naturale din intervalul [0,109], separate prin
câte un spațiu. Cel puțin un termen din șir este multiplu al lui 10. Se cere să se afișeze pe ecran două
valori, separate printr-un spațiu, reprezentând lungimea maximă a unei 10-secvențe din șirul aflat în
fișier, respectiv numărul de 10-secvențe cu o astfel de lungime. Proiectați un algoritm eficient din
punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul are conținutul
alăturat, se afișează 3 2*/

void secvente(int v[], int d) {

    int secventaMax = 0, ct = 0, secvente = 0;

    for (int i = 0; i < d; i++) {
        int j = i;
        ct = 0;
        while (j < d - 1 && v[j] % 10 == 0) {
            j++;
            ct++;
        }
        if (ct > secventaMax) {
            secventaMax = ct;
            secvente = 0;
        }
        if (ct == secventaMax) {
            secvente++;
        }
        i = j;
    }
    cout << secventaMax << " " << secvente;
}

void ex3Var18() {

    int v[100], d = 0;

    citire(v, d);
    secvente(v, d);

}



















