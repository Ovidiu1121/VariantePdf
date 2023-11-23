#include "citire_afisare.h"

/*Subprogramul Putere are trei parametri:
• n, prin care primește un număr natural (n∈[2,109]);
• x și p, prin care furnizează două numere naturale cu proprietatea că n=xp, iar x este cel mai mic număr
cu această proprietate.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=16 atunci, după apel, x=2 și p=4, dacă n=216 atunci, după apel, x=6 și p=3, iar dacă
n=12 atunci, după apel, x=12 și p=1*/

void putere(int n) {
   int  x = 1,p = 0;

    int k = sqrt(n); 

    for (int i = 2; i <= k; ++i) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            x = i;
            p = count;
            break;
        }
    }

    if (n > 1) {
        x = n;
        p = 1;
    }
    cout << x << ", " << p;
}

void ex1Var2() {

    putere(16);

}

/*La o expoziție sunt prezentate mai multe tipuri de flori, fiecare având un anumit cod. Zona de expunere
este organizată pe n rânduri, fiecare având câte n parcele de dimensiune egală. Pe primul rând sunt
expuse n tipuri de flori distincte, fiecare parcelă conținând flori de un anumit tip. Celelalte parcele sunt
ocupate astfel:
• toate parcelele aflate în dreapta diagonalei secundare a zonei de expunere sunt ocupate de gazon;
• fiecare parcelă, aflată pe diagonala secundară a zonei de expunere sau în stânga acestei diagonale, conține
flori cu un cod de cel mult două cifre, obținut din ultimele două cifre ale sumei codurilor florilor aflate în două
parcele de pe rândul anterior, și anume cea de pe aceeași coloană, respectiv cea de pe coloana din dreapta
sa; dacă prima dintre cifrele codului obținut este 0, ea este ignorată, ca în exemplu.
Scrieți un program C/C++ care citește de la tastatură un număr natural, n (n∈[2,20]), apoi n numere
naturale distincte din intervalul [0,102), reprezentând, în această ordine, de la stânga la dreapta, codurile
florilor din parcelele aflate pe primul rând al zonei de expunere; gazonul are codul -1. Programul
construiește în memorie un tablou bidimensional cu n linii și n coloane, în care fiecare linie corespunde
unui rând de parcele și fiecare element al liniei corespunde unei parcele, în ordinea acestora, și
memorează codul plantelor (flori sau gazon) plasate în acea parcelă.
Programul afișează pe ecran tabloul obținut, fiecare linie a tabloului pe câte o
linie a ecranului, elementele de pe aceeași linie fiind separate prin câte un
spațiu.
Exemplu: dacă se citesc numerele n=5, apoi 90, 10, 4, 27, 30 se obține
tabloul alăturat. (10p.)
90 10 4 27 30
0 14 31 57 -1
14 45 88 -1 -1
59 33 -1 -1 -1
92 -1 -1 -1 -1*/

void matrice(int v[100], int d) {

    int a[100][100];

    for (int i = 0; i < d; i++) {
        a[0][i] = v[i];
    }

    for (int i = 1; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (j > 4 - i) {
                a[i][j] = -1;
            }
            else if (j <= 5 - i) {
                a[i][j] = (a[i - 1][j] + a[i - 1][j + 1]) % 100;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}

void ex2Var2() {

    int v[100], d;
    citire(v, d);
    matrice(v, d);

}

/*Intervalul [x,y] se numește p-interval pentru un șir de valori întregi, dacă oricare dintre primii p termeni
ai șirului aparține intervalului, iar numărul de valori întregi distincte din interval este minim.
Exemplu: pentru șirul 2, 7, -1, 8, 3, 10 există [2,2] ca 1-interval, [-1,8] ca 4-interval și 5-interval etc.
Fișierul bac.in conține un șir de cel mult 106 numere întregi din intervalul [-109,109], separate prin
câte un spațiu.
Se cere să se afișeze pe ecran cea mai mică și cea mai mare valoare a lui p (p≥2) cu proprietatea că
(p-1)-interval este identic cu p-interval pentru șirul aflat în fișier. Valorile afișate pot fi egale, iar dacă nu
există nicio astfel de valoare, pe ecran se afișează mesajul nu exista. Proiectați un algoritm eficient
din punctul de vedere al timpului de executare și al memoriei utilizate.
Exemplu: dacă fișierul conține numerele 2 7 1 8 3 10 6 -3 -2 13, se afișează pe ecran 5 9
(intervale conform cerinței se obțin pentru valorile 5, 7 și 9 ale lui p),
iar dacă fișierul conține numerele 2 7 1 0 8 10 -3 13, se afișează pe ecran nu exista*/


void ex3Var2() {



}











