#include "citire_afisare.h"


/*Scrie�i defini�ia complet� a subprogram max, cu trei parametri, a, b, c, care prime�te prin
intermediul parametrilor a �i b dou� numere reale cu exact dou� cifre la partea �ntreag� �i
exact dou� zecimale fiecare. Subprogramul determin� cel mai mare num�r real dintre
urm�toarele patru valori: a, b �i numerele reale ob�inute din a �i b prin interschimbarea
p�r�ii �ntregi cu partea frac�ionar� �n cadrul aceluia�i num�r. Aceast� valoare este furnizat�
prin intermediul parametrului real c.
Exemplu: dac� a=33.17 �i b=15.40, c va avea valoarea 40.15 (cea mai mare valoare
dintre 33.17, 15.40, 17.33 �i 40.15)*/

void ex3Var79() {



}

/*Se cite�te de pe prima linie a fi�ierului numere.in un num�r natural n (0<n<10000) �i, de
pe a doua linie a fi�ierului, n numere naturale din intervalul [1,100] �i se cere s� se
afi�eze pe ecran, desp�r�ite prin c�te un spa�iu, num�rul sau numerele �ntregi din intervalul
[1,100] care nu apar printre numerele citite. Dac� pe a doua linie a fi�ierului apar toate
numerele din intervalul precizat, se va afi�a mesajul NU LIPSESTE NICIUN NUMAR.
Alege�i un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
Exemplu: pentru fi�ierul numere.in cu urm�torul con�inut
12
4 2 3 1 6 5 7 8 9 11 10 100
se vor afi�a valorile 12 13 � 99*/

void interval(int v[], int d) {

	for (int i = 1; i < 101; i++) {
		int ok = 1;
		for (int j = 0; j < d; j++) {
			if (v[j] == i) {
				ok = 0;
			}
		}
		if (ok == 1) {
			cout << i << " ";
		}
	}

}

void ex4Var79() {

	int v[100], d;

	citire(v, d);
	interval(v, d);

}





















