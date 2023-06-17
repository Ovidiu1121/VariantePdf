#include "citire_afisare.h"


/*Se consider„ subprogramul num, cu doi parametri:
ï n, prin care prime∫te o valoare natural„ 2<n<50;
ï v, prin care prime∫te un tablou unidimensional cu n elemente, numere Óntregi cu cel mult
4 cifre.
Subprogramul Ónlocuie∫te cu 0 fiecare valoare mai mic„ sau egal„ cu prima valoare din
tablou. Tabloul modificat este furnizat tot prin parametrul v.
Scrie—i defini—ia complet„ a subprogramului.
Exemplu: dac„ n=7 ∫i v=(4, 5, 0, 9, 3, 4, -2), atunci dup„ apel
v=(0, 5, 0, 9, 0, 0, 0). */

void inlocuire(int v[], int d) {
	int k = v[0];

	for (int i = 0; i < d; i++) {
		if (v[i] <= k) {
			v[i] = 0;
		}
	}

}

void ex3Var1() {

	int v[100], d;

	citire(v, d);
	inlocuire(v, d);
	afisare(v, d);

}


/*Fi∫ierul numere.in memoreaz„ cel mult 1000000 de numere naturale cu cel mult nou„
cifre. Numerele sunt ordonate strict cresc„tor ∫i separate prin c‚te un spa—iu.
Se consider„ ∫irul 1, 4, 7 .... definit astfel: f1=1, f2=4 ∫i fn=2∑fn-1-fn-2, pentru n>2.
Se cere s„ se afi∫eze pe ecran numerele din fi∫ier care sunt termeni ai ∫irului. Numerele
sunt afi∫ate Ón ordine strict cresc„toare, separate prin c‚te un spa—iu. Dac„ nu exist„ astfel
de numere se afi∫eaz„ pe ecran mesajul Nu exista.
Pentru determinarea numerelor cerute se utilizeaz„ un algoritm eficient din punctul de
vedere al memoriei ∫i al timpului de executare.
Exemplu: dac„ fi∫ierul numere.in con—ine numerele 1 2 5 7 17 30, se afi∫eaz„ pe
ecran numerele 1 7. */

bool isNumber(int n) {
    int f1 = 1,f2 = 4;

    while (f2 <= n) {
        if (f2 == n) {
            return true;
        }

        int next = 2 * f2 - f1;
        f1 = f2;
        f2 = next;
    }

    if (n == 1) {
        return true;
    }

    return false;
}

void numereDinSir(int v[], int d) {

    for (int i = 0; i < d; i++) {
        if (isNumber(v[i]) == true) {
            cout << v[i] << " ";
        }
    }

}

void ex4Var1() {

    int v[100], d;

    citire(v, d);
    numereDinSir(v, d);

}