#include "citire_afisare.h"


/*Subprogramul paritate are doi parametri:
• n, prin care primește un număr natural (n[1,109]);
• nr prin care furnizează numărul de divizori naturali ai lui n cu aceeași paritate ca n.
• Scrieți definiția completă a subprogramului.
Exemplu: dacă n=20, după apel nr=4 (divizorii lui 20 sunt 1, 2, 4, 5, 10, 20).*/

void controDivizori(int n) {
	int ct = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			if (n % 2 == 0 && i % 2 == 0 || n % 2 == 1 && i % 2 == 1) {
				ct++;
			}
		}
	}
	cout << ct;
}

void ex1Var19() {

	controDivizori(20);

}

/*Într-un tablou bidimensional, cu elemente având valori numai în mulțimea {0,1}, numim
linii „complementare” două linii cu proprietatea că oricare două elemente ale acestora,
aflate pe aceeași coloană, sunt diferite.
Scrieți un program C/C++ care citește de la tastatură trei numere naturale m, n și k
(m,n[2,20], k[1,m]) și elementele unui tablou bidimensional cu m linii și n coloane,
numere naturale din mulțimea {0,1}. Programul afișează pe ecran mesajul DA dacă există
cel puțin o linie „complementară" cu linia a k-a a acestuia, sau mesajul NU în caz contrar.
Exemplu: pentru m=7, n=3, k=2 și tabloul alăturat se afișează pe ecran mesajul DA
0 1 0
1 1 0
0 0 0
0 0 1
0 0 1
1 1 1
0 0 1*/

void linii(int a[100][100], int n, int m, int k) {

    for (int i = 0; i < n; i++) {
        if (i != k - 1) { 
            bool flag = true;
            for (int j = 0; j < m; j++) {
                if (a[i][j] == a[k - 1][j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << "da";
                return;
            }
        }
    }
    cout << "nu";
    return;
}

void ex2Var19() {

    int a[100][100], n, m, k=2;

    citireMatrice(a, n, m);
    linii(a, n, m, k);

}

/*Fișierul bac.txt conține, în ordine crescătoare, cel mult 106 numere naturale din intervalul [0,109],
separate prin câte un spațiu. Se cere să se afișeze pe ecran, în ordine strict crescătoare, separate prin
câte un spațiu, numerele pare distincte care apar în fișier. Dacă nu există niciun astfel de număr, se
afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient din punctul de vedere al memoriei
utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele 5 5 6 7 8 8 8 8 10 15 16 16 25 25 49
pe ecran se afișează, în această ordine, numerele 6 8 10 16
*/

void afisarePare(int v[], int d) {

    int a[100], b = 0;

    for (int i = 0; i < d; i++) {
        if (v[i] % 2 == 0) {
            if (nrGasit(a, b, v[i]) == false) {
                a[b] = v[i];
                b++;
            }
        }
    }

    for (int i = 1; i < b; i++) {
        cout << a[i] << " ";
    }

}

void ex3Var19() {

    int v[100], d;
    citire(v, d);
    afisarePare(v, d);

}

















