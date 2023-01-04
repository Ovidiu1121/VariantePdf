#include "citire_afisare.h"


/*Utiliz�nd metoda backtracking pentru afi�area tuturor modalit��ilor de descompunere a unui
num�r natural ca o sum� de numere naturale nenule, pentru n=3 se ob�in, �n ordine,
solu�iile: 1+1+1; 1+2; 2+1; 3. Ordinea de scriere a termenilor dintr-o descompunere este
semnificativ�. Folosind aceea�i metod� pentru n=10, care este solu�ia generat� imediat
dup� 1+1+3+5?*/

void ex1Var62() {



}

/*Scrie�i defini�ia complet� a unui subprogram fibo cu doi parametri, n �i v, care prime�te
prin intermediul parametrului n un num�r natural (1<n<30) �i returneaz� prin intermediul
parametrului v un tablou unidimensional care con�ine primii n termeni impari ai �irului lui
Fibonacci (amintim c� �irul lui Fibonacci este: 1,1,2,3,5,8,13,21,�).*/

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

/*Fi�ierul date.in con�ine un �ir de cel mult 10000 numere naturale (printre care cel
pu�in un num�r par �i cel pu�in un num�r impar), cu cel mult 2 cifre fiecare, separate prin
c�te un spa�iu. Scrie�i un program C/C++ care cite�te numerele din fi�ierul date.in �i
scrie �n fi�ierul text date.out valorile distincte citite, separate prin c�te un spa�iu,
respect�ndu-se regula: pe prima linie vor fi scrise numerele impare �n ordine cresc�toare,
iar pe linia a doua numerele pare, �n ordine descresc�toare. Alege�i o metod� eficient� din
punctul de vedere al timpului de executare. (6p.)
Exemplu: dac� pe prima linie a fi�ierului date.in se afl� numerele:
75 12 3 3 18 75 1 3
atunci fi�ierul date.out va con�ine:
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












