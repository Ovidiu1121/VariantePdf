#include "citire_afisare.h"


//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤20),
elementele unei matrice cu n linii şi n coloane, numere întregi din intervalul [-100, 100] şi
afişează pe ecran diferenţa m1-m2, unde m1 este media aritmetică a elementelor strict
pozitive ale matricei, situate deasupra diagonalei principale, iar m2 este media aritmetică a
elementelor strict pozitive ale matricei, situate sub diagonala principală, ca în exemplu. Cele
două medii se consideră egale cu 0 dacă nu există valori strict pozitive în zonele
corespunzătoare.
 5.
Exemplu: pentru n=4 şi matricea alăturată se afişează valoarea 0.25
(m1=2.75, calculată din elementele aflate deasupra diagonalei
principale, marcate cu chenar, şi m2=2.5, calculată din elementele
subliniate). (10p.)
 -1 2 -4 5
 0 6 3 1
 2 4 2 0
 3 -5 1 -3*/

void matrice(int a[100][100], int n, int m) {

    double m1 = 0, m2 = 0, ct1 = 0, ct2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j && a[i][j] > 0) {
                m1 += a[i][j];
                ct1++;
            }
            if (i > j && a[i][j] > 0) {
                m2 += a[i][j];
                ct2++;
            }
        }
    }
    cout << (m1 / ct1) - (m2 / ct2) << endl;
}

void ex5Var90() {

    int a[100][100], n, m;

    citireMatrice(a, n, m);
    matrice(a, n, m);

}

//s3

/*Funcţia verif primeşte prin intermediul parametrului n un număr natural format din cel mult
9 cifre, şi prin intermediul parametrului a, un număr natural nenul (2≤a≤9). Funcţia
returnează valoarea 1 dacă n este un număr format din cifre aparţinând intervalului închis
[0,a] şi valoarea 0 în caz contrar.
a) Scrieţi definiţia completă a funcţiei verif. (4p.)
b) Spunem că n poate fi o reprezentare în baza b (1<b≤10), dacă toate cifrele lui n sunt
strict mai mici decât b. Scrieţi un program care citeşte de la tastatură o valoare naturală n cu
cel mult 9 cifre şi, utilizând apeluri ale funcţiei verif, afişează pe ecran, în ordine
crescătoare, cu spaţii între ele, toate valorile lui b pentru care valoarea citită nu poate fi o
reprezentare în baza b. (6p.)
Exemplu: Pentru n=4101, se afişează 2 3 4*/

bool verif(int n, int a) {

    while (n) {
        if (n % 10 > a) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

void ex3Var90() {

    cout << verif(34232, 5);

}

/*Fişierul text bac.txt conţine cel mult 1000 de numere întregi de cel mult 9 cifre fiecare,
numerele fiind separate prin câte un spaţiu; printre numerele din fişier există cel puţin două
numere pozitive, aflate pe poziţii consecutive.
a) Scrieţi un program C/C++ care afişează două numere pozitive, aflate unul după altul în
fişier, a căror sumă este maximă, utilizând un algoritm eficient din punct de vedere al
timpului de executare şi al spaţiului de memorie utilizat. Dacă există mai multe soluţii, se
afişează doar acea pereche pentru care diferenţa dintre cele două numere este maximă.
Numerele vor fi afişate pe ecran, în ordinea din fişier, separate printr-un spaţiu.
Exemplu: dacă fişierul conţine numerele: -2 2 16 4 -1 25 -2 8 12 7 13 se vor
afişa numerele 16 4, în această ordine, cu un spaţiu între ele. */

void sumaMaxima(int v[], int d) {

    int sumaMax = 0;
    int maxim1 = 0, maxim2 = 0;
    
    for (int i = 0; i < d - 1; i++) {
        if (v[i] > 0 && v[i + 1] > 0) {
            int k = v[i] + v[i + 1];
            if (k > sumaMax) {
                sumaMax = k;
                maxim1 = v[i];
                maxim2 = v[i + 1];
            }
        }
    }
    cout << maxim1 << " " << maxim2;
}

void ex4Var90() {

    int v[100], d;
    citire(v, d);
    sumaMaxima(v, d);


}















