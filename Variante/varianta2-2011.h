#include "citire_afisare.h"


/*Subprogramul inter are patru parametri:
• na, nb prin care primeºte câte un numãr natural (0<na<100, 0<nb<100);
• a, b prin care primeºte câte un tablou unidimensional care memoreazã câte o mulÑime
de na, respectiv nb numere naturale, fiecare având cel mult patru cifre.
Subprogramul returneazã numãrul de elemente aparÑinând intersecÑiei celor douã mulÑimi
menÑionate.
ScrieÑi în limbajul C/C++ definiÑia completã a subprogramului inter.
Exemplu: pentru na=4, a=(35,149,72,3798), nb=5, b=(72,151,149,9,623), în
urma apelului, subprogramul returneazã valoarea 2.*/

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

/*Fiºierul BAC.TXT conÑine un ºir de cel puÑin 11 ºi cel mult un milion de numere naturale,
despãrÑite prin câte un spaÑiu. Fiecare numãr are cel puÑin douã ºi cel mult nouã cifre.
Primul termen al ºirului are numãrul de ordine 1, al doilea are numãrul de ordine 2 etc.
Se citeºte ºirul din fiºier ºi se cere ca, utilizând un algoritm eficient din punct de vedere al
timpului de executare, sã se determine ºi sã se afiºeze pe ecran numãrul de ordine al unui
termen al ºirului care este precedat în fiºier de un numãr maxim de valori care au cifra
zecilor egalã cu a sa. Dacã sunt mai mulÑi termeni cu aceastã proprietate, se afiºeazã
numãrul de ordine doar al unuia dintre ei.
Exemplu: dacã fiºierul BAC.TXT conÑine numerele
12 36 265 18 139 19 32 34 112 14 68 */


void ex4Var2() {



}











