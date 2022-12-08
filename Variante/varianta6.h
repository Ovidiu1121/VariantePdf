#include "citire_afisare.h"


/*Utilizând metoda backtracking sunt generate numerele de 3 cifre, având toate cifrele
distincte şi cu proprietatea că cifrele aflate pe poziţii consecutive sunt de paritate diferită.
Ştiind că primele şase soluţii generate sunt, în această ordine, 103, 105, 107, 109, 123,
125, care este a zecea soluţie generată?*/


int s[100], n = 9, m = 3;

void tipar() {
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << s[i] << " ";
	}

}

int valid(int k) {

	if (s[0] == 0) {
		return 0;
	}

	for (int i = 1; i <= k; i++) {
		if (s[i - 1] % 2 == 0 && s[i] % 2 == 0 || s[i - 1] % 2 == 1 && s[i] % 2 == 1) {
			return 0;
		}
	}

	for (int i = 0; i < k; i++) {
		if (s[i] == s[k]) {
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

void back2(int k) {

	for (int i = 0; i <= n; i++) {
		s[k] = i;
		if (valid(k)) {
			if (solutie(k)) {
				tipar();
			}
			else {
				back2(k + 1);
			}
		}
	}

}

void ex1Var6() {

	back2(0);

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤100) şi apoi
cele n elemente, numere naturale cu cel mult 4 cifre fiecare, ale unui tablou unidimensional
a. Programul afişează pe o linie a ecranului suma celor n elemente ale tabloului, pe
următoarea linie a ecranului suma primelor n-1 elemente şi aşa mai departe, astfel încât
ultima linie afişată să conţină doar primul element al tabloului.
Exemplu: dacă n=4 iar tabloul are elementele
a=(1,7,3,4) programul va afişa valorile
alăturate: 
15
11
8
1*/


int sumaVec(int v[], int d) {

	int s = 0;

	for (int i = 0; i < d; i++) {
		s += v[i];
	}
	return s;
}

void sume(int v[], int d) {

	int k = sumaVec(v, d);

	for (int i = d - 1; i >= 0;i--) {
		cout << k << " ";
		k = k - v[i];
	}

}

void ex3Var6() {

	int v[100], d;

	citire(v, d);
	sume(v, d);


}

/*Se consideră fişierul BAC.TXT ce conţine un şir crescător cu cel mult un milion de numere
naturale de cel mult nouă cifre fiecare, separate prin câte un spaţiu.
a) Să se scrie un program C/C++ care, folosind un algoritm eficient din punct de vedere al
memoriei utilizate şi al timpului de executare, citeşte din fişier toţi termenii şirului şi afişează
pe ecran, pe o singură linie, fiecare termen distinct al şirului urmat de numărul de apariţii ale
acestuia în şir. Valorile afişate sunt separate prin câte un spaţiu.
Exemplu: dacă fişierul BAC.TXT are următorul conţinut:
1 1 1 5 5 5 5 9 9 11 20 20 20
programul va afişa:
1 3 5 4 9 2 11 1 20 3
deoarece 1 apare de 3 ori, 5 apare de 4 ori, etc.*/

int frecventaNumar(int v[], int d, int n) {

	int f[100]{};

	for (int i = 0; i < d; i++) {
		f[v[i]]++;
	}

	return f[n];
}

bool nrGasit(int v[], int d, int n) {

	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			return true;
		}
	}
	return false;
}

void nrAparitii(int v[], int d) {

	int a[100], b = 0;

	for (int i = 0; i < d; i++) {
		if (nrGasit(a, b, v[i]) == 0) {
			a[b] = v[i];
			b++;
		}
	}

	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
		cout << frecventaNumar(v, d, a[i]) << " ";
	}

}

void ex4Var6() {

	int v[100], d;

	citire(v, d);
	nrAparitii(v, d);

}
























