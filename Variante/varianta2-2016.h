#include "citire_afisare.h"


/*Un număr natural nenul se numeşte sPar dacă atât el, cât și suma divizorilor săi proprii
(divizori diferiţi de 1 şi de el însuși), sunt numere pare.
Subprogramul sPar are un singur parametru, n, prin care primeşte un număr natural
(n∈[1,109]). Subprogramul returnează cel mai mic număr sPar, strict mai mare decât n.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=95, atunci subprogramul returnează 98 (atât 98, cât și
72=2+7+14+49, sunt numere pare). */

bool sPar(int n) {
    int s = 0;

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            s += i;
        }
    }
    if (s % 2 == n % 2) {
        return true;
    }
    return false;
}

int numarSPar(int n) {
    int k = n + 1;

    while (!sPar(k)) {
        k++;
    }

    return k;
}

void ex3Var2() {

    cout << numarSPar(95);

}

/*Un număr x se numește sufix al unui număr y dacă y se poate obține din x prin alipirea,
la stânga sa, a cel puțin unei alte cifre.
Fişierul bac.in conţine un şir de cel mult 109
 numere naturale din intervalul [0,109].
Numerele din şir sunt separate prin câte un spaţiu.
Se cere să se afișeze pe ecran, în ordine strict crescătoare, toate numerele din intervalul
[100,999] care sunt termeni ai șirului aflat în fișier și sunt sufixe pentru cel puțin un alt
termen al aceluiași șir. Numerele sunt afișate câte unul pe linie, iar dacă în șir nu există
astfel de numere, se afișează pe ecran mesajul Nu exista. Pentru determinarea
numerelor cerute se utilizează un algoritm eficient din punctul de vedere al timpului de
executare.
Exemplu: dacă fişierul bac.in are conţinutul
15502 49 54321 6149 76149 123 123 502 4321 321 321
atunci pe ecran se afişează numerele
321
502*/

int contorCifre(int n) {
    int ct = 0;
    while (n) {
        ct++;
        n /= 10;
    }
    return ct;
}

bool sufix(int a, int b) {

    if (contorCifre(a) == contorCifre(b)) {
        return false;
    }

    while (a) {
        if (a % 10 != b % 10) {
            return false;
        }
        a /= 10;
        b /= 10;
    }
    return true;
}

void nrSufixe(int v[], int d) {

    int a[100], b = 0;

    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            if (i != j) {
                if (sufix(v[i], v[j])) {
                    if (nrGasit(a,b,v[i]) == false) {
                        a[b] = v[i];
                        b++;
                    }
                }
            }
        }
    }
    sortareCrescator(a, b);
    for (int i = 0; i < b; i++) {
        if (a[i] >= 100 && a[i] <= 999) {
            cout << a[i] << " ";
        }
    }

}

void ex4Var2() {

    int v[100], d;
    citire(v, d);
    nrSufixe(v, d);

}














