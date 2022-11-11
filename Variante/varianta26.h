#include "varianta25.h"


/*Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale nenule n şi k
(n≤100, k≤100) şi afişează pe ecran, separaţi prin câte un spaţiu, în ordine
descrescătoare, cei mai mici k multipli naturali nenuli ai numărului n.
Exemplu: pentru n=6 şi k=5 se afişează 30 24 18 12 6.*/

void kMultiplii(int n, int k) {
	int ct = 0,i=1;
	do {
		
		cout << n * i << " ";
		
		i++;
		ct++;

	} while (ct < k);

}

void ex3Var26() {

	kMultiplii(6, 5);

}

/*Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n (1≤n≤100) şi pe
următoarea linie n numere întregi din intervalul [-1000;1000], separate prin câte un spaţiu.
Scrieţi un program C/C++ care citeşte din fişierul NUMERE.IN numărul natural n,
construieşte în memorie un tablou unidimensional v cu cele n numere întregi aflate pe linia a
doua în fişier şi utilizează apeluri utile ale subprogramului sterge pentru a elimina din
tablou un număr minim de elemente astfel încât să nu existe două elemente alăturate cu
aceeaşi valoare. Elementele tabloului obţinut se afişează pe ecran, separate prin câte un
spaţiu.
Exemplu: Dacă fişierul NUMERE.IN are conţinutul:
12
10 10 2 2 19 9 9 9 9 15 15 15 atunci se afişează 10 2 19 9 15.*/

void eliminareNrLaFel(int v[], int &d) {

	for (int i = 0; i < d; i++) {
		if (v[i + 1] == v[i]) {
			stergere(v, d, i + 1); 
			i--;
		}
	}

}

void ex4Var26() {

	int v[100], d;

	citire(v, d);
	eliminareNrLaFel(v, d);
	afisare(v, d);
}





















