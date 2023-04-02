#include "citire_afisare.h"


/*Subprogramul maxim are un singur parametru, n, prin care primește un număr natural (n[0,109]).
Subprogramul returnează cea mai mare cifră impară din scrierea acestuia, sau -1 dacă nu există astfel
de cifre. Scrieți definiția completă a subprogramului.
Exemplu: dacă n=5672883, subprogramul returnează 7.*/

void cifraImparaMax(int n) {

	int maxim = 0;

	while (n) {
		if (n % 10 % 2 == 1 && n % 10 > maxim) {
			maxim = n % 10;
		}
		n /= 10;	
	}

	cout << maxim;
}

void ex1Var17() {

	cifraImparaMax(5672883);

}


/*Fișierul text bac.txt conține numere naturale din intervalul [1,104]: pe prima linie un număr n, pe a
doua linie un șir de n numere, iar pe fiecare dintre următoarele linii, până la finalul fișierului, câte o
pereche de numere, reprezentând extremitățile unui interval închis. Numerele aflate pe aceeași linie a
fișierului sunt în ordine crescătoare și sunt separate prin câte un spațiu.
Se cere să se afișeze pe ecran numărul de intervale care nu conțin niciun termen al
șirului aflat pe a doua linie a fișierului. Proiectați un algoritm eficient din punctul de
vedere al timpului de executare.
Exemplu: dacă fișierul conține numerele alăturate, se afișează pe ecran 3*/

void ex3Var17() {

	int n, v[100], a, b;

	ifstream f("in.txt");

	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}
	int ct = 0;
	bool flag = true;
	while (f >> a >> b) {
		flag = true;
		for (int i = 0; i < n; i++) {
			if (v[i] > a && v[i] < b) {
				flag = false;
			}
		}
		if (flag == true) {
			ct++;
		}
	}
	cout << ct;

}


















