#include "citire_afisare.h"


/*Fi�ierul text NR.TXT con�ine pe o singur� linie, separate prin c�te un singur spa�iu, cel mult
100 de numere naturale, fiecare num�r av�nd cel mult 4 cifre. Scrie�i un program C/C++
care cite�te numerele din fi�ierul NR.TXT �i afi�eaz� pe ecran, separate prin c�te un spa�iu,
�n ordine descresc�toare, toate numerele din fi�ier care au cel mult 2 cifre. Dac� fi�ierul nu
con�ine astfel de numere se va afi�a pe ecran mesajul NU EXISTA. */

void cifreNecesare(int v[], int d) {

	for (int i = 0; i < d; i++) {
		int ct = 0, aux = v[i];
		while (aux) {
			ct++;
			aux /= 10;
		}
		if (ct <=4) {
			cout << v[i] << " ";
		}
	}

}

void ex3Var4() {

	int v[100], d;
	citire(v, d);
	cifreNecesare(v, d);

}


/*Subprogramul cif, cu doi parametri, prime�te prin intermediul parametrului a un num�r
natural cu cel mult 8 cifre �i prin intermediul parametrului b o cifr�; subprogramul returneaz�
num�rul de apari�ii ale cifrei b �n scrierea num�rului a.
Exemplu: pentru a=125854 �i b=5, subprogramul va returna valoarea 2.
a) Scrie�i defini�ia complet� a subprogramului cif. (4p.)
b) Scrie�i un program C/C++ care cite�te de la tastatur� un num�r natural n cu exact 8 cifre,
fiecare cifr� fiind nenul�, �i care determin� �i afi�eaz� pe ecran, folosind apeluri utile ale
subprogramului cif, cel mai mic num�r palindrom ce poate fi ob�inut prin rearanjarea
tuturor cifrelor num�rului n. Dac� nu se poate ob�ine un palindrom din toate cifrele num�rului
n, programul va afi�a pe ecran num�rul 0. Un num�r natural este palindrom dac� este egal
cu num�rul ob�inut prin scrierea cifrelor sale �n ordine invers�.
Exemplu: dac� n=21523531 atunci se va afi�a pe ecran num�rul 12355321, iar dac�
n=12272351 atunci se va afi�a pe ecran num�rul 0.*/

int contorCifre(int n, int c) {
	int ct = 0;

	while (n) {
		if (n % 10 == c) {
			ct++;
		}
		n /= 10;
	}
	return ct;
}

void Xex4Var4() {

	cout << contorCifre(125854, 5) << endl;

}












