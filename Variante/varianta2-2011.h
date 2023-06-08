#include "citire_afisare.h"


/*Subprogramul inter are patru parametri:
� na, nb prin care prime�te c�te un num�r natural (0<na<100, 0<nb<100);
� a, b prin care prime�te c�te un tablou unidimensional care memoreaz� c�te o mul�ime
de na, respectiv nb numere naturale, fiecare av�nd cel mult patru cifre.
Subprogramul returneaz� num�rul de elemente apar�in�nd intersec�iei celor dou� mul�imi
men�ionate.
Scrie�i �n limbajul C/C++ defini�ia complet� a subprogramului inter.
Exemplu: pentru na=4, a=(35,149,72,3798), nb=5, b=(72,151,149,9,623), �n
urma apelului, subprogramul returneaz� valoarea 2.*/

void intersectie(int v[], int d, int a[], int b) {
	int ct = 0;

	if (d > b) {
		for (int i = 0; i < d; i++) {
			int k = i;
			while (k < d) {
				if (v[i] == a[k]) {
					ct++;
				}
				k++;
			}
		}
	}
	else {
		for (int i = 0; i < b; i++) {
			int k = 0;
			while (k < d-1) {
				if (v[i] == a[k]) {
					ct++;
				}
				k++;
			}
		}
	}
	cout<<ct;
}

void ex3Var2() {
	
	int v[4] = { 35,149,72,3798 }, a[5] = { 72,151,149,9,623 };

	intersectie(v, 4, a, 5);

}

/*Fi�ierul BAC.TXT con�ine un �ir de cel pu�in 11 �i cel mult un milion de numere naturale,
desp�r�ite prin c�te un spa�iu. Fiecare num�r are cel pu�in dou� �i cel mult nou� cifre.
Primul termen al �irului are num�rul de ordine 1, al doilea are num�rul de ordine 2 etc.
Se cite�te �irul din fi�ier �i se cere ca, utiliz�nd un algoritm eficient din punct de vedere al
timpului de executare, s� se determine �i s� se afi�eze pe ecran num�rul de ordine al unui
termen al �irului care este precedat �n fi�ier de un num�r maxim de valori care au cifra
zecilor egal� cu a sa. Dac� sunt mai mul�i termeni cu aceast� proprietate, se afi�eaz�
num�rul de ordine doar al unuia dintre ei.
Exemplu: dac� fi�ierul BAC.TXT con�ine numerele
12 36 265 18 139 19 32 34 112 14 68 */


void ex4Var2() {



}











