#include "citire_afisare.h"


/*Se consideră subprogramul divizor, cu doi parametri:
• n, prin care primește un număr natural cu cel mult nouă cifre (n>1);
• d, prin care furnizează cel mai mare divizor prim al lui n.
Scrieţi definiţia completă a subprogramului.
Exemplu: pentru n=50, după apel d=5, iar pentru n=11, după apel d=11. */

void divizor(int n) {
    int d = 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0 && prim(i))
            d = i;
    }

    cout<<d;
}

void ex3Var1() {

    divizor(50);

}

/*Fişierul bac.txt conţine pe prima linie un număr natural par n cu cel mult patru cifre, iar
pe următoarea linie un şir de n numere naturale cu cel mult nouă cifre. Numerele din şir
sunt în ordine descrescătoare şi sunt separate prin câte un spaţiu.
Se cere să se afişeze pe ecran cel mai mic număr din prima jumătate a şirului care să fie
strict mai mare decât oricare număr din a doua jumătate a şirului. Dacă în fişier nu se află
o astfel de valoare, pe ecran se afişează mesajul Nu exista.
Pentru determinarea numărului cerut se utilizează un algoritm eficient din punctul de
vedere al memoriei şi al timpului de executare.
Exemplu: dacă fişierul bac.txt are conţinutul
30
16 8 7 7 ... 7 7 2 1
 de 26 de ori
atunci pe ecran se afişează 8, iar dacă fişierul are conţinutul
6
7 7 7 7 2 1
atunci pe ecran se afişează Nu exista. */

void nrMin(int v[], int d) {

	int maxim = 0, minim = 1000;

	for (int i = d - 1; i >= d / 2; i--) {
		if (v[i] > maxim) {
			maxim = v[i];
		}
	}
	bool flag = false;
	for (int i = 0; i < d / 2; i++) {
		if (v[i] > maxim) {
			if (v[i] < minim) {
				minim = v[i];
				flag = true;
			}
		}
	}

	if (flag == false) {
		cout << "Nu exista";
		return;
	}

	cout << minim;

}

void ex4Var1() {

	int v[100], d;

	citire(v, d);
	nrMin(v, d);

}















