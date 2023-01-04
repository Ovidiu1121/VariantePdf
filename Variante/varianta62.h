#include "citire_afisare.h"


/*Utilizând metoda backtracking pentru afiºarea tuturor modalitãþilor de descompunere a unui
numãr natural ca o sumã de numere naturale nenule, pentru n=3 se obþin, în ordine,
soluþiile: 1+1+1; 1+2; 2+1; 3. Ordinea de scriere a termenilor dintr-o descompunere este
semnificativã. Folosind aceeaºi metodã pentru n=10, care este soluþia generatã imediat
dupã 1+1+3+5?*/

void ex1Var62() {



}

/*Scrieþi definiþia completã a unui subprogram fibo cu doi parametri, n ºi v, care primeºte
prin intermediul parametrului n un numãr natural (1<n<30) ºi returneazã prin intermediul
parametrului v un tablou unidimensional care conþine primii n termeni impari ai ºirului lui
Fibonacci (amintim cã ºirul lui Fibonacci este: 1,1,2,3,5,8,13,21,…).*/

void fibo(int n) {

    cout << 1 << " ";
    int i = 1;
    int a = 1, b = 1, c; 

    while (i < n) {
        c = a + b; 
        if (c % 2 == 1) { 
            cout << c << " ";
            i++; 
        }
        a = b; 
        b = c;
    }

}

void ex4Var62() {

	fibo(4);

}

/*Fiºierul date.in conþine un ºir de cel mult 10000 numere naturale (printre care cel
puþin un numãr par ºi cel puþin un numãr impar), cu cel mult 2 cifre fiecare, separate prin
câte un spaþiu. Scrieþi un program C/C++ care citeºte numerele din fiºierul date.in ºi
scrie în fiºierul text date.out valorile distincte citite, separate prin câte un spaþiu,
respectându-se regula: pe prima linie vor fi scrise numerele impare în ordine crescãtoare,
iar pe linia a doua numerele pare, în ordine descrescãtoare. Alegeþi o metodã eficientã din
punctul de vedere al timpului de executare. (6p.)
Exemplu: dacã pe prima linie a fiºierului date.in se aflã numerele:
75 12 3 3 18 75 1 3
atunci fiºierul date.out va conþine:
1 3 75
18 12*/

void nrDistincte(int v[], int &d) {

    int a[100],x[100], b = 0;

    for (int i = 0; i < d; i++) {
        if (nrGasit(a, b, v[i]) == false) {
            a[b] = v[i];
            x[b] = v[i];
            b++;
        }
    }

    sortareCrescator(a, b);

    for (int i = 0; i < b; i++) {
        if (a[i] % 2 == 1) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    sortareDescrescator(x, b);

    for (int i = 0; i < b; i++) {
        if (x[i] % 2 == 0) {
            cout << x[i] << " ";
        }
    }

}

void ex5Var62() {

    int v[100], d;

    citire(v, d);
    nrDistincte(v, d);
    

}












