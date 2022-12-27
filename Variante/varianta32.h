#include "citire_afisare.h"



//s3

/*În vederea participãrii la un concurs, elevii de la liceul sportiv au dat o probã de selecþie, în
urma cãreia primii 6 au obþinut punctaje egale. În câte moduri poate fi formatã echipa
selecþionatã ºtiind cã poate avea doar 4 membri, aleºi dintre cei 6, ºi cã ordinea acestora în
cadrul echipei nu conteazã?*/

int s[100], n = 6, m = 4;
int ct = 0;
void tipar() {

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << s[i];
	}

}

int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] >= s[i + 1]) {
			return 0;
		}
	}

	return 1;
}

int solutie(int k) {

	if (k == m - 1) {
		return 1;
	}
	else {
		return 0;
	}

}

void back(int k) {

	for (int i = 1; i <= n; i++) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				ct++;
				tipar();
			}
			else {
				back(k + 1);
			}
		}
	}

}

void ex1Var32() {

	back(0);
	cout <<"\n==>>"<< ct;
}

/*Scrieþi definiþia completã a subprogramului nr_prim care are ca parametru un numãr
natural x ºi returneazã cel mai mic numãr prim, strict mai mare decât x.
Exemplu: pentru x=25 subprogramul returneazã numãrul 29, iar pentru x=17 valoarea
returnatã va fi 19.*/

int primulNrPrim(int n) {

	for (int i = n; i < n + 10; i++) {
		if (prim(i)) {
			return i;
		}
	}
	return -1;
}

void ex3Var32() {

	cout << primulNrPrim(25);

}

/*În fiºierul numere.txt sunt memorate pe mai multe linii, numere întregi (cel mult 100),
numerele de pe aceeaºi linie fiind despãrþite prin câte un spaþiu, fiecare numãr având cel
mult 9 cifre. Sã se determine cele mai mici douã valori având exact douã cifre fiecare,
memorate în fiºier ºi sã se afiºeze pe ecran aceste valori, despãrþite printr-un spaþiu. Dacã
în fiºier nu se aflã douã astfel de valori, pe ecran se va afiºa valoarea 0.
Scrieþi programul C/C++ corespunzãtor metodei descrise la punctul a. 
Exemplu: dacã fiºierul numere.txt are conþinutul alãturat
5 10
3 -77 20
50 5 0 12 18 30, se va afiºa pe ecran, nu neapãrat în aceastã ordine:-77 10 */

bool nrDe2Cifre(int n) {

	int ct = 0;

	while (n) {
		ct++;
		n /= 10;
	}
	if (ct ==2) {
		return true;
	}
	return false;
}

void numereMinimeDe2Cif(int v[], int d) {
	int minim = 100;
	for (int i = 0; i < d; i++) {
		if (nrDe2Cifre(v[i]) == 1) {
			if (v[i] < minim) {
				minim = v[i];
			}
		}
	}
	int k = 100;
	for (int i = 0; i < d; i++) {
		if (nrDe2Cifre(v[i]) == 1 && v[i] != minim) {
			if (v[i] < k) {
				k = v[i];
			}
		}
	}
	
	cout << k << " " << minim;
}

void ex4Var32() {

	int v[100], d;

	citire(v, d);
	numereMinimeDe2Cif(v, d);

}
















