#include "citire_afisare.h"

/*Un număr natural este numit echilibrat dacă suma cifrelor sale de pe poziții pare este un
număr par, iar suma cifrelor sale de pe poziţii impare este un număr impar. Pozițiile cifrelor
sunt numerotate de la dreapta la stânga, astfel: cifra unităților este pe poziția 0, cifra zecilor
este pe poziția 1 ș.a.m.d.
Subprogramul echilibrat are un singur parametru, n, prin care primeşte un număr
natural (n∈[10,109]). Subprogramul returnează valoarea 1 dacă n este echilibrat sau
valoarea 0 în caz contrar.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă n=25163912, subprogramul returnează valoarea 1, iar dacă n=11211,
subprogramul returnează valoarea 0. */

bool nrEchilibrat(int n) {

	int sp = 0, si = 0;
	int ct = 0;
	while (n) {
		if (ct % 2 == 0) {
			sp += n % 10;
		}
		else {
			si+=n % 10;
		}
		n /= 10;
	}

	if (sp % 2 == 1 && si % 2 == 0) {
		return true;
	}
	return false;
}

void ex3Var3() {

	cout << nrEchilibrat(25163912);

}


/*Numim secvență încadrată a unui șir de numere naturale un subșir al acestuia, format din
termeni aflați pe poziții consecutive în șirul dat, subșir care începe și se termină cu aceeași
valoare. Lungimea secvenței este egală cu numărul de termeni ai acesteia.
Fișierul bac.txt conține un șir de cel puțin două și cel mult 106
 numere naturale din
intervalul [0, 9]. Numerele sunt separate prin câte un spațiu. În șir există cel puțin doi
termeni egali.
Se cere să se determine secvențele încadrate din acest șir care au lungime maximă și să
se afișeze pe prima linie a ecranului lungimea maximă determinată, iar pe următoarea
linie, pentru fiecare astfel de secvenţă, valoarea primului său termen. Numerele de pe a
doua linie sunt afişate în ordine strict crescătoare, separate prin câte un spaţiu.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fişierul bac.txt conţine numerele
3 1 5 2 4 5 5 2 5 9 5 7 4 6 8 0 8
atunci pe ecran se afișează valorile:
9
4 5 */

int getLastPosition(int v[], int d, int n) {

	for (int i = d-1; i >=0; i--) {
		if (v[i] == n) {
			return i;
		}
	}
	return - 1;
}

void secventaIncadrata(int v[], int d) {

	int secventa = 0, secventaMax = 0;

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		int j = i;
		int k = getLastPosition(v, d, v[i]);
		secventa = 0;
		while (j < d - 1 && j != k) {
			secventa++;
			j++;
			if (j == d - 1) {
				secventa = 0;
			}
		}
		if (secventa >= secventaMax) {
			secventaMax = secventa;
			a[b] = v[k];
			b++;
		}
	}
	cout << secventaMax << endl;
	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}

}

void ex4Var3() {

	int v[100], d;
	citire(v, d);
	secventaIncadrata(v, d);

}
















