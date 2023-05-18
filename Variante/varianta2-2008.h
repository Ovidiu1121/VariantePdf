#include "citire_afisare.h"


/*Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult
100 de numere întregi, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++ care
citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în
ordine crescătoare, toate numerele naturale nenule din fişier. Dacă nu există astfel de
numere se va afişa pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul NR.TXT conţine numerele: -3 -10 0 7 -5 7 51 -800 6 3798,
atunci pe ecran se va afişa: 6 7 7 51 3798 */

void afisareNrNat(int v[], int d) {

	for (int i = 0; i < d; i++) {
		if (v[i] > 0) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var2() {

	int v[100], d;
	citire(v, d);
	afisareNrNat(v, d);

}


/*Un număr n se numeşte extraprim dacă atât el, cât şi orice număr obţinut prin permutarea
cifrelor lui n, sunt numere prime. De exemplu, numărul 113 este un număr extraprim
deoarece 113, 311, 131 sunt numere prime.
a) Scrieţi definiţia completă a unui subprogram f, cu un parametru, subprogram care:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 3 cifre (a>1)
- returnează suma exponenţilor divizorilor primi din descompunerea în factori primi a valorii
parametrului a.
Exemplu: pentru a=90 subprogramul va returna valoarea 4, deoarece a=2*32
*5 şi
1+2+1=4. 
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n, 2≤n≤999, şi
care determină şi afişează pe ecran, folosind apeluri utile ale subprogramului f, mesajul DA
dacă n este un număr extraprim, iar altfel afişează mesajul NU.*/

int f(int a) {
    int s = 0;
    int div = 2;

    while (a > 1) {
        int exp = 0;
        while (a % div == 0) {
            a /= div;
            exp++;
        }
        if (exp > 0 && prim(div)) {
            s += exp;
        }
        div++;
    }
    return s;
}

bool nrExtraPrim(int n) {

    if (prim(n)) {
        int s = 0;
        while (n > 0) {
            s += n % 10;
            n /= 10;
        }
        return prim(s);
    }
    return false;

}

void ex4Var2() {

    cout << f(90)<<endl;
    cout << nrExtraPrim(113);
}














