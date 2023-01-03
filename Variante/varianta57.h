#include "citire_afisare.h"


//s2

/*Scrieţi un program C/C++ care citeşte de la tastatură trei numere naturale n, a şi b
(2<n<25, 0<a<n, 0<b<n) şi construieşte în memorie o matrice cu n linii şi n coloane
numerotate de la 1 la n, formată numai din valori 0,1,2,3 şi 4 astfel încât: elementele
aflate pe linia a sau coloana b sunt egale cu 0, cele aflate deasupra liniei a şi la stânga
coloanei b sunt egale cu 1, cele aflate deasupra liniei a şi la dreapta coloanei b sunt egale
cu 2, cele aflate sub linia a şi la stânga coloanei b sunt egale cu 3, iar elementele aflate
sub linia a şi la dreapta coloanei b sunt egale cu 4 ca în exemplul de mai jos.
Programul afişează pe ecran matricea construită, fiecare linie a
matricei pe o linie a ecranului şi elementele de pe aceeaşi linie
separate prin câte un singur spaţiu.
Exemplu: pentru n=5, a=4, b=3 se construieşte în memorie şi se
afişează matricea alăturată: (10p.)
1 1 0 2 2
1 1 0 2 2
1 1 0 2 2
0 0 0 0 0
3 3 0 4 4*/

void matrice(int n, int a, int b) {

	int m[100][100];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == a || j == b) {
                m[i][j] = 0;
            }
            else if (i < a && j < b) {
                m[i][j] = 1;
            }
            else if (i < a && j > b) {
                m[i][j] = 2;
            }
            else if (i > a && j < b) {
                m[i][j] = 3;
            }
            else {
                m[i][j] = 4;
            }
		}
	}

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

}

void ex5Var57() {

    matrice(5, 4, 3);

}

//s3

/*Fişierul text INTRARE.TXT conţine, pe o singură linie, cel mult 100 de numere naturale
nenule de cel mult patru cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un
program C/C++ care citeşte numerele din fişier şi scrie în fişierul text IESIRE.TXT, în
ordine crescătoare, toate valorile distincte obţinute ca sumă de două elemente distincte
aflate pe linia a doua a fişierului.*/

void sumeDistincte(int v[], int d) {
    int a[100], b = 0;

    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            int k = v[i] + v[j];
            if (i != j) {
                if (nrGasit(a, b, k) == false) {
                    a[b] = k;
                    b++;
                }
            }
        }
    }

    sortareCrescator(a, b);

    for (int i = 0; i < b; i++) {
        cout << a[i] << " ";
    }

}

void ex3Var57() {

    int v[100], d;

    citire(v, d);
    sumeDistincte(v, d);

}

/*Se consideră subprogramul multiplu, cu doi parametri, care:
– primeşte prin intermediul parametrilor a şi k două numere întregi de cel mult 4 cifre;
– returnează cel mai mic multiplu al lui k mai mare sau egal cu a.
a) Scrieţi numai antetul subprogramului multiplu. (4p.)
b) Scrieţi declarările de date şi programul principal C/C++ care citeşte de la tastatură trei
numere naturale nenule x, y, z, de cel mult 4 cifre fiecare, (x≤y), şi care, prin apeluri utile
ale subprogramului multiplu, verifică dacă intervalul [x,y] conţine cel puţin un multiplu
al lui z. Programul va afişa pe ecran, în caz afirmativ, mesajul DA, iar în caz contrar
mesajul NU.*/

int multiplu(int a, int k) {
    
    for (int i = k; i < a + k; i++) {
        if (i % a == 0) {
            return i;
        }
    }

    return 0;
}

bool interval(int a, int b, int c) {

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            return true;
        }
    }
    return false;
}

void ex4Var57() {

    cout << interval(4,30,222);
}






